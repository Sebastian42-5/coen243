#include "post.h"
#include "user.h"
#include "socialmediaplatform.h"
#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>

std::vector<User> SocialMediaPlatform::getUsers(){
    return users;
}

void SocialMediaPlatform::registerUser(std::string username, std::string bio){
    int userID = getUsers().size();
    User user = User(username, userID, bio);
    users.push_back(user);
}

void SocialMediaPlatform::removeUser(User user){
    int index = user.getUserID();
    users.erase(users.begin() + index);
}

User SocialMediaPlatform::findUserByUsername(std::string username){
    for(User user : users){
        if(user.getUsername() == username){
            return user;
        }
    }
    throw std::runtime_error("User not found");
}

void SocialMediaPlatform::createPostForUser(std::string username, std::string content){
    User user = findUserByUsername(username);
    user.createPost(username, content);
}

void SocialMediaPlatform::likePost(std::string username, int postID){
    User user = findUserByUsername(username);
    for(Post post : user.listPosts()){
        if(post.getID() == postID){
            post.addLike();
        }
    }
}

void SocialMediaPlatform::commentOnPost(std::string username, int postID, std::string comment){
    User user = findUserByUsername(username);
    for(Post post : user.listPosts()){
        if(post.getID() == postID){
            post.addComment(username, comment);
        }
    }
}

void SocialMediaPlatform::viewUserProfile(std::string username){
    User user = findUserByUsername(username);
    std::string bio = user.getBio();
    std::cout << "Profile of " << username << ":" << std::endl;
    std::cout << "Bio: " << bio << std::endl;
    std::cout << std::endl;
    std::cout << "Posts:";
    user.listPosts();
}







