#ifndef _CDPLAYER_H_
#define _CDPLAYER_H_
#include "cd.h"
class CDPlayer{
    public:
        void play();    // nullptr 이면 에러, 아니면 재생
        void insertCD(CD *cd1);     //cd가져오기
        void showStatus();  // BTS  총 3 곡이 들어있습니다.
        void nextTrack();   // 곡2. BTS의 Jamais Vu play됩니다.
        void prevTrack();
        void ejectCD();
    private:
        CD *cd_ = nullptr; //cd
        static int trackNum_; //현재 트랙번호
};
#endif //_CDPLAYER_H_
