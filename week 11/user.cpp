#include "user.h"
#include <string>
#include <vector>
#include <iostream>

User::User(std::string username, int userID, std::string bio){
    this->username = username;
    this->bio = bio;
    this->userID = userID;
    this->posts = {};
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
    int postID = posts.size();
    std::cout << "Creating post for user: " << userName << std::endl;
    if(userName == username){
        Post newPost = Post(content, postID);
        posts.push_back(newPost);
    }
    std::cout << content << std::endl;
}

std::vector<Post> User::listPosts(){
    for(Post post : posts){
        post.viewPost();
    }
    return posts;
}



