#pragma once

class Complexe {

public:
	Complexe();
	Complexe(double, double);
	Complexe(const Complexe& z);
	void m_afficher();
	double m_module();
	Complexe m_conjugue();
	void m_conjugue1();
	Complexe m_conjugue3();
	Complexe operator +(const Complexe& z);
	Complexe operator +(double);
	Complexe operator *(const Complexe& z);
	bool operator == (const Complexe& z);







private:
	double Re;
	double Im;



public:
	static int nbre_instance;
};