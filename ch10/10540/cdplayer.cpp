#include <iostream>
#include <string>
int CDPlayer::trackNum_ = 0;
//cd_ 가 nullptr 이면 오류메세지를 출력, 아니면 노래 재생
void CDPlayer::play(){
    if(cd_ == nullptr){
        std::cout << "CD가 없습니다." << std::endl;
    }else{
        std::cout << "곡" << trackNum_ + 1<< ". " << ( cd_->CD::getSong(trackNum_)->Song::getSinger(trackNum_) );
        std::cout << "의 " << ( cd_->CD::getSong(trackNum_)->Song::getTitle(trackNum_) );
        std::cout << "가(이) play됩니다." << std::endl;
    }
}

//cd가져오기
void CDPlayer::insertCD(CD *cd1){
    cd_ = cd1;
}

// 총 3곡이 들어있습니다. << 형식으로 출력
void CDPlayer::showStatus(){
    std::cout << "총 " << cd_->CD::getNumSong() << "곡이 들어있습니다." << std::endl;
}

//현재트랙이 최대 트랙 수 보다 작거나 같으면 재생, 아니면 오류메세지 출력
void CDPlayer::nextTrack(){
    trackNum_++;
    if(trackNum_ < cd_->CD::getNumSong()){
        play();
    }else{
        trackNum_--;
        std::cout << "다음 트랙이 없습니다." << std::endl;
    }
}

//현재트랙이 1 보다 크거나 같으면 재생, 아니면 오류메세지 출력
void CDPlayer::prevTrack(){
    trackNum_--;
    if(trackNum_ >= 0 ){
        play();
    }else{
        std::cout << "이전 트랙이 없습니다." << std::endl;
    }
}

//메모리를 nullptr로 만들어서 cd를 제거
void CDPlayer::ejectCD(){
    cd_ = nullptr;
}
