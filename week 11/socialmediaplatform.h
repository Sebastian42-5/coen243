#ifndef SOCIALMEDIAPLATFORM_H
#define SOCIALMEDIAPLATFORM_H
#include "user.h"
#include "post.h"
#include <vector>
#include <string>
#include <iostream>

class SocialMediaPlatform{
    private:
        std::vector<User> users;
    public:
        std::vector<User> getUsers();
        void registerUser(std::string username, std::string bio);
        void removeUser(User user);
        User findUserByUsername(std::string username);
        void createPostForUser(std::string username, std::string content);
        void likePost(std::string username, int postID);
        void commentOnPost(std::string username, int postID, std::string comment);
        void viewUserProfile(std::string username);
};

#endif