#pragma once
#include <string>
#include <iostream>

using namespace std;

class Monstre
{

private:
	string name;
	string type;
	int pv;
	int attack;


	public:

		Monstre();

		string getName();
		void setName(string n);

		int getNbpv();
		void setNbpv(int p);

		int getattack();
		void setattack(int a);

		string getType();
			void setType(string t);

		}
	

