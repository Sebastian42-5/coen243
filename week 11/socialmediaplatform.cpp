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

User& SocialMediaPlatform::findUserByUsername(std::string username){
    for(User& user : users){
        if(user.getUsername() == username){
            return user;
        } 
    }
    throw std::runtime_error("User not found");
}

void SocialMediaPlatform::createPostForUser(std::string username, std::string content){
    User& user = findUserByUsername(username);
    user.createPost(username, content);
}

void SocialMediaPlatform::likePost(std::string postOwnerUsername, int postID){
    User& user = findUserByUsername(postOwnerUsername);
    for(Post& post : user.getPosts()){
        if(post.getID() == postID){
            post.addLike();
            return;
        }
    }
    throw std::runtime_error("Post not found");
}

void SocialMediaPlatform::commentOnPost(std::string commenterUsername, std::string postOwnerUsername, int postID, std::string comment){
    User& user = findUserByUsername(postOwnerUsername);
    for(Post& post : user.getPosts()){
        if(post.getID() == postID){
            post.addComment(commenterUsername, comment);
            return;
        }
    }
    throw std::runtime_error("Post not found");
}

void SocialMediaPlatform::viewUserProfile(std::string username){
    User& user = findUserByUsername(username);
    std::string bio = user.getBio();
    std::cout << "Profile of " << username << ":" << std::endl;
    std::cout << "Bio: " << bio << std::endl;
    std::cout << std::endl;
    std::cout << "Posts:";
    user.viewAllPosts();
}






