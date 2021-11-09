#include <iostream>
#include "Header1.h"


using namespace std;

Bank::Compte::Compte() {
	this->solde = 0;
	this->numeroCpt = 0;
	this->nomCl = (char*)malloc(sizeof(char) * 30);
}

Bank::Compte::Compte(int numCpt, char* nomCl, double Solde) {
	this->solde = Solde;
	this->nomCl = nomCl;
	this->numeroCpt = numCpt;
	
}


bool Banque::Compte::retirerArgent(double mt) {
	if (this->solde >= mt) {
		this->solde -= mt;
		return true;
	}
	else {
		return false;
	}

}
void Banque::Compte::deposerArgent(double mt) {
	this->solde += mt;
	
}
void Banque::Compte::consulterSolde(); {
	cout << "Votre solde est:" << this->solde;
}

bool Banque::Compte::transfererArgent(Compte cp, double mt) {
	if (this->retirerArgent(mt) == true) {
		
		cp.deposerArgent(mt);
		return true;

	}
	else return false;
}