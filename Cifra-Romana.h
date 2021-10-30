#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

/*Functie ce prelucreaza un string format doar din cifre pe care apoi
il converteste intr-un intreg/numar natural ce urmeaza sa fie prelucrat
de functia cifre_romane() in functia main.
-in cazul in care stringul nu este format doar din cifre programul
atentioneaza utilizatorul pentru a introduce la urmatoarea incercare
doar caractere de tip cifra.*/
int citeste_numarul();


/*Functie ce primeste ca parametru numarul natural
returnat de functia citeste_numarul(), verifica daca este
cuprins intre 0 si 4000, iar in caz afirmativ va scrie numarul
cu cifre romane conform regulilor de scriere specifice.*/
void cifre_romane(int& n);


/*Functie care da posibilitatea utilizatorului sa introduca si
alte numere la care doreste sa vada scrierea lor cu cifre romane.
-daca nu selecteaza una din optiunile valide programul il va
atentiona pe utilizator sa introduca o optiune valida.
-functia va fi chemata la finalul iterarii fiecarui do while
din functia main. */
bool programul_ruleaza();