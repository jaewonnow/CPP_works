#ifndef _CAMERA_H_
#define _CAMERA_H_
#include <string>
class Lens;
class Camera {
    // 공개 메소드
    public:
        Camera();  // 기본 생성자.
        Camera(std::string name);
        void tellSpec();
        void attachLens(Lens* lens);
        std::string getModelName() const;
    // 멤버 변수 및 비공개 함수
    private:
        std::string modelName_; //모델명
        Lens * lens_;

};
#endif //_CAMERA_H_
