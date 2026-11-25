#include "post.h"
#include "socialmediaplatform.h"
#include <string>
#include <iostream>

int main(){
    bool ending = false;
    SocialMediaPlatform socialMedia; 

    while(!ending){
        int decision;
        std::string username;
        std::string bio;
        std::string content;
        std::string comment;
        int postID;

        std::cout << "Welcome to the Social Media Platform Simulation!";
        std::cout << std::endl;
        std::cout << "1. Register new user" << std::endl;
        std::cout << "2. Create a Post for a User" << std::endl;
        std::cout << "3. Like a Post" << std::endl;
        std::cout << "4. Comment on a Post" << std::endl;
        std::cout << "5. View user profile" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> decision;

        switch(decision){
            case 1:
                std::cout << "Enter username: ";
                std::cin >> username;
                std::cout << "Enter bio: ";
                std::getline(std::cin >> std::ws, bio);
                socialMedia.registerUser(username, bio);
                break;
            case 2:
                std::cout << "Enter username to create post for: ";
                std::cin >> username;
                std::cout << "Enter post content: ";
                std::getline(std::cin >> std::ws, content);
                socialMedia.createPostForUser(username, content);
                break;
            case 3:
                std::cout << "Enter username who likes the post: ";
                std::cin >> username;
                std::cout << "Enter post ID to like: ";
                std::cin >> postID;
                socialMedia.likePost(username, postID);
                break;
            case 4:
                std::cout << "Enter username who comments: ";
                std::cin >> username;
                std::cout << "Enter post ID to comment on: ";
                std::cin >> postID;
                std::cout << "Enter comment: ";
                std::getline(std::cin >> std::ws, comment);
                socialMedia.commentOnPost(username, postID, comment);
                break;
            case 5:
                std::cout << "Enter username to view profile: ";
                std::cin >> username;
                socialMedia.viewUserProfile(username);
                break;
            case 6:
                ending = true;
                break;
        }
    }
}