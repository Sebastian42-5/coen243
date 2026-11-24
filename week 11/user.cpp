#include "user.h"
#include <string>
#include <vector>

void User::setUsername(std::string username){
    username = username;
}

void User::createPost(std::string username, int postID, std::string content){
    Post newPost = Post(postID, content);
    posts.push_back(newPost);
}

