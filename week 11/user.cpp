#include "user.h"
#include <string>
#include <vector>

User::User(std::string username, int userID, std::string bio){
    bio = " ";
    username = " ";
    posts = {};
    userID = posts.size();
}

void User::setUsername(std::string username){
    username = username;
}

std::string User::getUsername(){
    return username;
}

int User::getUserID(){
    return userID;
}

std::string User::getBio(){
    return bio;
}

void User::createPost(std::string userName, std::string content){
    if(userName == username){
        Post newPost = Post(content);
        posts.push_back(newPost);
    }
}

std::vector<Post> User::listPosts(){
    for(Post post : posts){
        int postID = post.getID();
        post.viewPost(postID);
    }
    return posts;
}



