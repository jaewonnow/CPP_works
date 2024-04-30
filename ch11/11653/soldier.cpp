#include "squad.h"
#include "soldier.h"
#include <iostream>
Soldier::Soldier(){
	// Default 생성자
}

Soldier::Soldier(std::string rank, std::string name){
	rank_ = rank;
	name_ = name;
}

void Soldier::speak(){
	std::cout << rank_ << " " << name_ << "! 소속 분대는 " << squad_->getSquadName() << "입니다." <<std::endl;
}

void Soldier::addSquad(Squad * squad){
	squad_ = squad;
}
		
void Soldier::setName(std::string name){
	name_ = name;
}

std::string Soldier::getName() const{
	return name_;
}

std::string Soldier::getRank() const{
	return rank_;
}
