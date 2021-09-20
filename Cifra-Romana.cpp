#include "Cifra-Romana.h"
#define Maxim 4000
#define Minim 0

int citeste_numarul()
{
	std::string numar;

	std::cout << "Introdu numarul pe care doresti sa-l scrii cu cifre romane: ";
	std::cin >> numar;

	for (unsigned int j = 0; j < numar.size(); j++)

		if (!std::isdigit(numar[j]))
		{
			std::cout << "Nu ai introdus un numar! \n";
			std::cout << "Introdu doar cifre! \n";
			std::cout << "Asteapta pana cand se actualizeaza ecranul! \n";
			std::cout << "Nu apasa nicio tasta in tot acest timp! \n";
			Sleep(3000);
			system("CLS");
			return citeste_numarul();
		}

	return std::stoi(numar);
}


void cifre_romane(int& n)
{
	if (n > Minim && n < Maxim)
	{
		std::cout << "Numarul scris cu cifre romane este: ";

		while (n >= 1000)
		{
			std::cout << "M";
			n = n - 1000;
		}

		while (n >= 100)
		{
			if (n >= 900)
			{
				std::cout << "CM";
				n = n - 900;
			}

			if (n >= 500)
			{
				std::cout << "D";
				n = n - 500;
			}

			if (n >= 400)
			{
				std::cout << "CD";
				n = n - 400;
			}

			if (n >= 100)
			{
				std::cout << "C";
				n = n - 100;
			}
		}
		while (n >= 10)
		{
			if (n >= 90)
			{
				std::cout << "XC";
				n = n - 90;
			}

			if (n >= 50)
			{
				std::cout << "L";
				n = n - 50;
			}

			if (n >= 40)
			{
				std::cout << "XL";
				n = n - 40;
			}

			if (n >= 10)
			{
				std::cout << "X";
				n = n - 10;
			}
		}

		while (n > 0)
		{
			if (n == 9)
			{
				std::cout << "IX";
				n = n - 9;
			}

			if (n >= 5)
			{
				std::cout << "V";
				n = n - 5;
			}
			if (n == 4)
			{
				std::cout << "IV";
				n = n - 4;
			}
			if (n >= 1)
			{
				std::cout << "I";
				n = n - 1;
			}
		}

		std::cout << "\n=========================================================== \n";
	}

	else if (n == Minim)
	{
		std::cout << "Romanii nu aveau scriere cu cifre romane pentru zero asa ca ii spuneau: ";
		std::cout << "Nulla \n";
		std::cout << "=========================================================== \n";
	}

	else
	{
		std::cout << "Numarul introdus nu este in intervalul alocat! \n";
		std::cout << "Numarul introdus poate lua valori doar in intervalul: ["
			<< Minim << ',' << Maxim << ") \n";
		std::cout << "=========================================================== \n";
	}

}


bool programul_ruleaza()
{
	std::string validare_optiune;

	std::cout << "Pentru a scrie alt numar cu cifre romane apasa tasta 1. \n";
	std::cout << "Pentru a parasi aplicatia apasa tasta 2. \n";

	std::cout << "=========================================================== \n";

	std::cout << "Alege una dintre aceste optiuni: ";
	std::cin >> validare_optiune;

	if (validare_optiune.size() > 1)
	{
		system("CLS");
		std::cout << "Optiunea selectata de tine nu exista! \n";
		std::cout << "=========================================================== \n";
		Sleep(500);
		std::cout << "Optiunile posibile sunt: \n";
		return programul_ruleaza();
	}

	char optiune = validare_optiune[0];

	switch (optiune)
	{
	case '1':
		std::cout << "=========================================================== \n";
		std::cout << "Te rugam sa astepti cateva secunde si sa nu apesi nicio tasta in tot acest timp! ";
		Sleep(3000);
		system("CLS");
		return true;

	case '2':
		std::cout << "=========================================================== \n";
		std::cout << "Multumim te mai asteptam cand vei mai fi curios sa aflii despre tainele scrierii numerelor cu cifre romane! \n";
		return false;

	default:
		system("CLS");
		std::cout << "Optiunea selectata de tine nu exista! \n";
		std::cout << "=========================================================== \n";
		Sleep(500);
		std::cout << "Optiunile posibile sunt: \n";
		return programul_ruleaza();
	}
}