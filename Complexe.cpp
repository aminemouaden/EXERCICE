#include "Complexe.h"
#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int Complexe::nbre_instance = 0;

Complexe::Complexe()    //Methode1: la definition du 
constructeur sans parametres
{
	this->Re = 0.0;
	this->Im = 0.0;
	nbre_instance++;
}

Complexe::Complexe(double Re, double Im)  // Methode2: la 
definition du constructeur avec parametres
{

	this->Re = Re;
	this->Im = Im;
	nbre_instance++;
}

Complexe::Complexe(const Complexe& z) //Methode3: la 
definition du constructeur de recopie
{
	this->Re = z.Re;
	this->Im = z.Im;
	nbre_instance++;
}

/*Complexe::~Complexe()
{
	delete this;
}
*/
void Complexe::m_afficher()
{
	string s;
	if (this->Im < 0)
	{
		s = "(" + to_string(this->Re) + "-i" +
			to_string(-this->Im) + ")";
	}
	else
	{
		s = "(" + to_string(this->Re) + "+i" +
			to_string(this->Im) + ")";
	}

	cout << s << endl;
}

double Complexe::m_module()
{
	double resultat;
	resultat = sqrt(pow(this->Re, 2) + pow(this->Im, 2));
	return resultat;
}

Complexe Complexe::m_conjugue()//M1
{
	Complexe  resultat;
	resultat.Re = this->Re;
	resultat.Im = -this->Im;
	return resultat;

}

void Complexe::m_conjugue1() //M2
{
	this->Re = this->Re;
	this->Im = this->Im;
}

Complexe Complexe::m_conjugue3() //M3
{
	this->Re = this->Re;
	this->Im = -this->Im;
	return *this;
}

Complexe Complexe::operator +(const Complexe& z)
{
	Complexe resultat;
	resultat.Re = this->Re + z.Re;
	resultat.Im = this->Im + z.Im;
	return resultat;

}

Complexe Complexe::operator+(double x)
{
	Complexe resultat;
	resultat.Re = this->Re + x;
	resultat.Im = this->Im;
	return resultat;
}

Complexe Complexe::operator*(const Complexe& z)
{
	Complexe resultat;
	resultat.Re = (this->Re * Re) - (this->Im * Im);
	resultat.Im = (this->Re * Im) + (this->Im * Re);
	return resultat;
}

bool Complexe::operator==(const Complexe& z)
{
	if (this->Re == z.Re && this->Im == z.Im)
	{
		cout << "Les deux nombres sont egaux :";
		return true;
	}
	cout << "Les deux nombres ne sont pas egaux :";
	return false;
}

/*int Complexe::nbre_objets()
{
	return nbre_instance;
}
*/


