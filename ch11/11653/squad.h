#ifndef _SQUAD_H_
#define _SQUAD_H_
#include <string>
class Soldier;
class Squad {
	// 공개 메소드
	public:	
		Squad();  // 기본 생성자.
		Squad(std::string name);
		void addSoldier(Soldier * soldier);
		void stat();
		void setName(std::string name);
		std::string getSquadName() const;

	// 멤버 변수 및 비공개 함수
	private:
		std::string squadName_; //분대 이름
		Soldier * soldier_[10]; //소속 분대원
		int numSoldier = 0; //소속 분대원 수

};
#endif
