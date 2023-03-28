#pragma once

class Tree {
public:
	int height;
	string color;
	char symbol;

	int** tab;

	int x, y;  ///y=j x=i

	void printTree();

	Tree(int h, char s, string c, int x, int y);

	~Tree();
};