#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Dimensions {
private:
	int width;
	int height;
	int thickness;
	int weight;
public:
	Dimensions(int width, int height, int thickness, int weight);
	Dimensions(int weight);
	Dimensions();
	~Dimensions();
	void read();
	void display();
	int getWidth();
	int getHeight();

};