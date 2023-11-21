#include "Monstre.h"

Monstre::Monstre()
{
	name = "Default"
		type = "Default"
		pv = 30
		attack = 10
}

string Monstre::getName()
{
	return name();
}

void Monstre::setName(string n)
{
	name = n;

}

int Monstre::getNbpv()
{
	return nbpv;
}

void Monstre::setNbPv(int np)
{
	if (np <= 0) {
		cout << "Monstre est mort!" << endl;
		nbPv = 30;
	}

	else nbPv = np;
}




int Monstre::getattack()
{
	return attack;
}

void Monstre::setattack(int a)
{
	attack = a;

}

string Monstre::getType()
{
	return type();
}

void Monstre::setType(string t)
{
	type = t;

}
