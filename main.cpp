#include "Cifra-Romana.h"

int main()
{
	int n;

	std::cout << " ========================  Salut aici vei vedea cum se scrie un numar cu cifre romane!  ======================= \n";
	std::cout << " Apasa orice tasta pentru a continua ! ";
	system("pause>nul");

	do {
		system("CLS");
		n = citeste_numarul();
		cifre_romane(n);

	} while (programul_ruleaza());


	return 0;
}