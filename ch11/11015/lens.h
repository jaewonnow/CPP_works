#ifndef _LENS_H_
#define _LENS_H_
#include <string>
class Camera;
class Lens {
    // 공개 메소드
    public:
        Lens();  // 기본 생성자.
        Lens(std::string name);
        void attachCamera(Camera * camera);
        void tellSpec();
        std::string getModelName() const;
    // 멤버 변수 및 비공개 함수
    private:
        std::string modelName_; //모델명
        Camera * camera_;

};
#endif //_LENS_H_
