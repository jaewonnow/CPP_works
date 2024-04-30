#ifndef _SONG_H_
#define _SONG_H_
#include <string>
class Song{
    public:
        Song(std::string singer, std::string title);
        void show();
        std::string getSinger(int index) const;
        std::string getTitle(int index) const;
    private:
        std::string singer_; //가수 이름
        std::string title_; //노래 제목
};
#endif //_SONG_H_
