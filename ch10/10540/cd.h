#ifndef _CD_H_
#define _CD_H_
#define MAX_SONG 20
#include "song.h"
class CD{
    public:
        CD(std::string title);
        void addSong(Song * song);
        int getNumSong() const; //numSong_을 반환하는 함수(전체 트랙 수를 알기 위해)
        Song * getSong(int index) const;
    private:
        std::string title_; //cd의 제목
        Song * song_[MAX_SONG]; //노래
        int numSong_ = 0; //노래의 갯수
};
#endif //_CD_H_
