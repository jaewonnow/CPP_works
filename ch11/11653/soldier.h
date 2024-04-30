#ifndef _SOILDIER_H_
#define _SOILDIER_H_
#include <string>
class Squad;
class Soldier {
	// 공개 메소드
	public:	
		Soldier();  // 기본 생성자.
		Soldier(std::string rank, std::string name);
		void speak();
		void addSquad(Squad * squad);
		void setName(std::string name);
		std::string getName() const;
		std::string getRank() const;
	// 멤버 변수 및 비공개 함수
	private:
		std::string name_; //이름
		std::string rank_; //계급
		Squad * squad_; //소속 분대

};
#endif
