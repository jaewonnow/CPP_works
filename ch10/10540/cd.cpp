#include "cd.h"
CD::CD(std::string title){
    title_ = title;
}

void CD::addSong(Song * song){
    song_[numSong_] = song;
    numSong_++;
}

int CD::getNumSong() const {
    return numSong_;
}

Song * CD::getSong(int index) const{
    return song_[index];
}
