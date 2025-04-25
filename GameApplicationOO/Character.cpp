#include "Character.h"
#include <string>

Character::Character()
{
	name = "";//vamos a inicializar las variables
	hp = 0;
	damage = 0;
}

Character::Character(string name, int pHp, int damage)
{
	this->name = name;//usamos -> para referirnos al atributo (this. en java)
	hp = pHp; //no es necesario el this porque el nombre de variable es distinto
	this->damage = damage;
}

string Character::getName()
{
	return name;
}

void Character::setName(string name)
{
	this->name = name;
}

int Character::getHP()
{
	return hp;
}

void Character::setHP(int HP)
{
	this->hp = hp;
}

int Character::getDamage()
{
	return damage;
}

void Character::setDamage(int damage)
{
	this->damage = damage;
}

string Character::getStatus()
{
	return string("\nName: " + name + "\nHP: " + to_string(hp) + "\nDamage: " + to_string(damage));
	//para poder concatenar en un string distintos strings e ints usamos el metodo to_string
	//nos importamos #include <string> para usar to_string
}

void Character::attack(Character c)
{
	c.setHP(c.getHP() - damage);//obtenemos la vida y le restamos el damage -> lo pasamos como parametro de setHP
	/*int characterHp = c.getHP() - damage;
	c.setHP(characterHp);*/ //lo mismo que en la linea anterior de codigo pero desglosado

}

