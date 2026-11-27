#ifndef USER_H
#define USER_H
#include "post.h"
#include <string>
#include <vector>

class User{
    private:
        int userID;
        std::string username;
        std::string bio;
        std::vector<Post> posts;
    public:
        User(std::string username, int userID, std::string bio);
        std::string getUsername();
        int getUserID();
        std::string getBio();
        void setUsername(std::string username);
        void createPost(std::string username, std::string content);
        std::vector<Post>& getPosts();
        void viewAllPosts();
};

#endif