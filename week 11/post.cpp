#include "post.h"
#include <vector>
#include <string>
#include <iostream>

Post::Post(int postID, std::string content){
    postID = 0;
    content = " ";
    likes = 0;
    comments = {};
}

void Post::addLike(std::string username, int postID){
    likes += 1;
}

void Post::addComment(std::string username, int postID, std::string comment){
    std::string fullComment = username + ": " + comment;
    comments.push_back(fullComment);
}

void Post::viewPost(int postID){
    std::cout << "-POST ID: " << postID << std::endl;
    std::cout << "Content: " << content << std::endl;
    std::cout << "Likes: " << likes << std::endl;
    std::cout << "Comments: " << std::endl;
    for(std::string comment : comments){
        std::cout << comment << std::endl;
    }
}

int Post::getID(){
    return postID;
}