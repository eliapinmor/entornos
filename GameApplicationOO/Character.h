#pragma once
#include <iostream>
using namespace std;

class Character
{
	// ATRIBUTOS
private:
	string name;
	int hp;
	int damage;
public:
	//CONSTRUCTORES
	Character();
	Character(string name, int hp, int damage);

	//GETTERs y SETTERs
	string getName();
	void setName(string name);

	int getHP();
	void setHP(int HP);

	int getDamage();
	void setDamage(int damage);

	// SIMILAR A TOSTRING
	string getStatus();

	//METODOS PROPIOS
	void attack(Character c);
	
};

