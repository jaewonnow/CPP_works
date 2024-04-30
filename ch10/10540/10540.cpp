#include "cdplayer.h"
int main(){
    CDPlayer mycdp;  // CD Player 클래스
    CD * cd1;

    // CD를 만든다.

    cd1 = new CD("Map of the Soul:7");
    cd1->addSong(new Song("BTS", "Make it right")); // 가수 및 곡명
    cd1->addSong(new Song("BTS", "Jamais Vu"));
    cd1->addSong(new Song("BTS", "Black Swan"));

    cd1->getSong(0)->show();
    //  가수: BTS, 곡명: Make it right

    mycdp.play();    // CD가 없습니다.
    mycdp.insertCD(cd1);
    mycdp.showStatus(); // BTS  총 3 곡이 들어있습니다.
    mycdp.play();    // 곡1. BTS의 Make it right가 play됩니다.
    mycdp.nextTrack();  // 곡2. BTS의 Jamais Vu play됩니다.
    mycdp.nextTrack();  // 곡3. BTS의 Black Swan가 play됩니다.
    mycdp.nextTrack();  // 다음 트랙이 없습니다.
    mycdp.prevTrack();  // 곡2. BTS의 Jamais Vu play됩니다.
    mycdp.prevTrack();  // 곡1. BTS의 Make it right play됩니다.
    mycdp.prevTrack();  // 이전 트랙이 없습니다.
    mycdp.ejectCD();  //
    mycdp.play();   // CD가 없습니다
}
