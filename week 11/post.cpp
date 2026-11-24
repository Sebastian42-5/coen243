#include "post.h"
#include <vector>
#include <string>
#include <iostream>

Post::Post(std::string content){
    postID = 0;
    content = " ";
    likes = 0;
    comments = {};
}

void Post::addLike(){
    likes += 1;
}

void Post::addComment(std::string username, std::string comment){
    std::string fullComment = username + ": " + comment;
    comments.push_back(fullComment);
}

void Post::viewPost(int postID){
    std::cout << "-POST ID: " << postID << std::endl;
    std::cout << "\tContent: " << content << std::endl;
    std::cout << "\tLikes: " << likes << std::endl;
    std::cout << "\tComments: " << std::endl;
    for(std::string comment : comments){
        std::cout << "\t\t" << comment << std::endl;
    }
}

int Post::getID(){
    return postID;
}