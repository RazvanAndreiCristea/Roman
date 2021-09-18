#include "Cifra-Romana.h"

int main()
{
	int n;

	std::cout << " ========================  Salut aici vei vedea cum se scrie un numar cu cifre romane!  ======================= \n";
	std::cout << " Te rugam sa astepti cateva secunde si sa nu apesi nicio tasta in tot acest timp! ";
	Sleep(5000);

	do {
		system("CLS");
		n = citeste_numarul();
		cifre_romane(n);

	} while (programul_ruleaza());


	return 0;
}