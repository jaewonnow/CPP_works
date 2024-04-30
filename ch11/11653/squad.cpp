#include "squad.h"
#include "soldier.h"
#include <iostream>
Squad::Squad(){
	// Default 생성자
}

Squad::Squad(std::string name){
	squadName_ = name;
}

void Squad::addSoldier(Soldier * soldier){
	soldier_[numSoldier] = soldier;
	soldier->addSquad(this);
	numSoldier++;
}

void Squad::stat(){
	std::cout << "\n" <<squadName_ << std::endl;
	std::cout << "총원 " << numSoldier << "명" << std::endl;
	for(int i = 0; i < numSoldier; i++){
		std::cout << soldier_[i]->getRank() << " " << soldier_[i]->getName() << std::endl;
	}
	std::cout << std::endl;
}

void Squad::setName(std::string name){
	squadName_ = name;
}

std::string Squad::getSquadName() const{
	return squadName_;
}
