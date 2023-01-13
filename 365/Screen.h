#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Screen {
private:
	double diagonal;
	string pixel;
	int width_s;
	int height_s;
public:
	Screen(double diagonal, string pixel, int width_s, int height_s);
	Screen(double diagonal);
	Screen();
	~Screen();
	void read();
	void display();
	int getWidth_s();
	int getHeight_s();

};