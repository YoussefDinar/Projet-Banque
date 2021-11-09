
namespace  Banque {
	class Compte{

public:
	Compte();
	Compte(int numCl, char* nom, double solde);
	bool retirerArgent(double Mt);
	void deposerArgent(double Mt);
	void consulterSolde();
	bool transfererArgent(Compte cp, double Mt);

private:
	int numeroCpt;
	char* nomCl;
	double solde;
	};
};

