#ifndef POST_H
#define POST_H

#include <string>
#include <vector>

class Post{
    private:
        int postID;
        std::string content;
        int likes;
        std::vector<std::string> comments;
    public:
        Post(std::string content);
        void addLike();
        void addComment(std::string username, std::string comment);
        void viewPost(int postID);
        int getID();
};

#endif