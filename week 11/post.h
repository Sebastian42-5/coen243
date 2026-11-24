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
        Post(int postID, std::string content);
        void addLike(std::string username, int id);
        void addComment(std::string username, int id);
        void viewPost();
};

#endif