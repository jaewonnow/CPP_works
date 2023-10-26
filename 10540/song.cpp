#include "song.h"
#include <iostream>
#include <string>
Song::Song(std::string singer, std::string title) {
    singer_ = singer;
    title_ = title;
}

std::string Song::getSinger(int index) const{
    return singer_;
}

std::string Song::getTitle(int index) const{
    return title_;
}

void Song::show(){
    std::cout << "가수: " << singer_ << ", 곡명: " << title_ << std::endl;
}
