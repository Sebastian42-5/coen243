#include "user.h"
#include <string>
#include <vector>

User::User(std::string username, int userID){
    std::string bio = " ";
    std::vector<Post> posts = {};
}

void User::setUsername(std::string username){
    username = username;
}

std::string User::getUsername(){
    return username;
}

void User::createPost(std::string userName, int postID, std::string content){
    if(userName == username){
        Post newPost = Post(postID, content);
        posts.push_back(newPost);
    }
}

void User::listPosts(){
    for(Post post : posts){
        int postID = post.getID();
        post.viewPost(postID);
    }
}



