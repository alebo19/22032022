﻿// 22032022.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
// 
// FOREST

#include <iostream>
using namespace std;

#include "Tree.h"
#include "Forest.h"

int main()
{
	int i, j;
	Tree drzewko(5, '*', "green");
	drzewko.printTree();

	/*for (j = 0; j < drzewko.height; j++) {
		for (i = 0; i < 2 * drzewko.height-1; i++)
			cout << drzewko.tab[j][i];
		cout << endl;

	}*/
	//^^ tu powinien byc forest
	

	///ZAD DOM PRZEROBIĆ FUNKCJE PRINT TREE ŻEBY DRUKOWAŁA NA PODSTAWIE TABA 
	//DOŁOŻYĆ SOBIE KLASE FOREST CPP I FOREST H, NA MATRYCY LASKU NARYSUJEMY DRZEWKA



	// KOLORY
	/*cout << "\033[1;31m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;32m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;33m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;34m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;35m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";
	cout << "\033[1;36m 00000000000000000000000000000000000000000000000000000000000000000000000000 \033[0m \n";*/
}


