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
    this->username = username;
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
    int postID = posts.size() + 1;
    if(userName == username){
        Post newPost = Post(content, postID);
        posts.push_back(newPost);
    }
}

void User::viewAllPosts(){
    for(Post post : posts){
        post.viewPost();
    }
}

std::vector<Post>& User::getPosts(){
    return posts;
}



