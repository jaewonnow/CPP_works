#include <iostream>
using namespace std;
class Complex{
    public:
        Complex(){
            real_ = 0; imagine_ = 0;
        }

        void setValue(double real, double img){
            this->real_ = real;
            this->imagine_ = img;
        }

        double getReal(){
            return real_;
        }

        double getImagine(){
            return imagine_;
        }

        Complex & addTo(Complex data){
            this->real_ += data.real_;
            this->imagine_ += data.imagine_;
            return *this;
        }

        void print(){
            cout << this->real_ << " + " << this->imagine_ << "i" << endl;
        }

    private:
    double real_; //실수부
    double imagine_; //허수부
};

Complex add(Complex data1, Complex data2){
    Complex temp;
    double real_tmp, img_tmp; //임시 실수부, 허수부
    real_tmp = data1.getReal() + data2.getReal(); //실수부 더하기 계산
    img_tmp = data1.getImagine() + data2.getImagine(); //허수부 더하기 계산
    temp.setValue(real_tmp, img_tmp);
    return temp;
}

Complex sub(Complex data1, Complex data2){
    Complex temp;
    double real_tmp, img_tmp; //임시 실수부, 허수부
    real_tmp = data1.getReal() - data2.getReal(); //실수부 빼기 계산
    img_tmp = data1.getImagine() - data2.getImagine(); //허수부 빼기 계산
    temp.setValue(real_tmp, img_tmp);
    return temp;
}

int main(){

    Complex a, b, c, d;
    a.setValue(1.1, 2.2);   // 이것은 1.1 + 2.2i 라는 뜻.
    b.setValue(2.2, 3.3);

    c = add(a, b);  // add는 global 함수이다. 작성하라. 실수부는 실수부끼리, 허수부는 허수부끼리 더한다.

    a.addTo(b);  //  a에 b를 더한다.

    d = sub(a, b);  // 뺄셈을 나타내는 global 함수. a 에서 b를 뺀다.

    cout << "a = " ;
    a.print();   // 자기 자신의 값을 복소수 형태로 출력하라.
    cout << "c = " ;
    c.print();
    cout << "d = ";   // 추가. 2017.9.28.
    d.print();      // 추가. 2017.9.28.
	
    a.addTo(a).addTo(b).addTo(c);  // 개념적으로 말하자면 a += a; a+= b; a+= c;
    cout << "a = ";
    a.print();

    return 0;
}
