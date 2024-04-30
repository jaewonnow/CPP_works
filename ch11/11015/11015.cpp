#include <iostream>
using namespace std;
#include "camera.h"
#include "lens.h"
int main(){
    Camera *cam = new Camera("Canon R5");
    Lens *lens = new Lens("Canon 200mm F4");
    cam->tellSpec();   // 카메라: Canon R5 렌즈: 없음 으로 출력.
    cam->attachLens(lens);
    lens->attachCamera(cam);
    cam->tellSpec();   // 카메라: Canon R5 렌즈: Canon 200mm F4
    lens->tellSpec();  // 렌즈: Canon 200mm F4  카메라: Canon R5
    delete cam;
    delete lens;
}
