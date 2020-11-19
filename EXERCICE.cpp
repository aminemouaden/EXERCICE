#include <iostream>
#include"Complexe.h"
using namespace std;
int main()
{
	cout << "le nombre d'objets initiale est :" <<
		Complexe::nbre_instance << endl;
	Complexe z1(5.5, 3.5);
	cout << "le nombre d'instance est : " <<
		Complexe::nbre_instance << endl;  // ou bien z1.nbre_instance
	Complexe z2(z1); // <==> z2(5.5,3.5)
	cout << "le nombre d'instance est : " <<
		Complexe::nbre_instance << endl;
	Complexe z3, z4, z5; // 5 instance
	cout << "le nombre d'instance est : " <<
		Complexe::nbre_instance << endl;

	cout << "Le nombre complexe est :"; z1.m_afficher();

	cout << "Le nombre complexe est :"; z2.m_afficher();

	z3 = z1.operator+(z2);
	cout << "La somme des deux nombres complexe :";
	z3.m_afficher();

	z4 = z2 + 5.4;
	cout << "La somme des deux nombre complexe :";
	z4.m_afficher();

	z5 = z1 * z4;
	cout << "La multiplication des deux nombre complexe :"; z5.m_afficher();

		cout << z1.operator==(z2) << endl;

	cout << z4.operator==(z2) << endl;

	cout << "le nombre d'instance est : " <<
		Complexe::nbre_instance << endl;

	double module = z1.m_module();
	cout << "Le module est :" << module << endl;

	Complexe conj = z1.m_conjugue();
	cout << "Le conjugue est :";  conj.m_afficher();


}



