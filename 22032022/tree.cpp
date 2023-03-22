#include <iostream>
using namespace std;

#include "tree.h"

void Tree::printTree() {
	int i, j;

	if (color == "green") cout << "\033[1;32m";
	if (color == "red") cout << "\033[1;31m";

	for (j = 0; j < height; j++)
	{
		for (i = height - j - 1; i > 0; i--)
			cout << ' ';

		for (i = 0; i < 2*j; i++)
			cout << '*';

		cout << endl;


	}
	cout << "\033[0m";
}

Tree::Tree(int h, char s, string c)
{
	int i, j;
	height = h;
	symbol = s;
	color = c;

	tab = new int* [height];		 

	for (j = 0; j < height; j++) {
		tab[j] = new int[2 * height - 1];
		for (i = 0; i < 2 * height - 1; i++)
			tab[j][i] = 0;
	}

	for (j = 0; j < height; j++)					/// wzory ustalone na podstawie kartki
	{
		for (i = height - j - 1; i < height + j; i++)
			tab[j][i] = 1;
	}
}

Tree::~Tree()
{
	int j;
	cout << "kasuje drzewo\n";
	for (j = 0; j < height; j++)
		delete tab[j];
	delete tab;
}