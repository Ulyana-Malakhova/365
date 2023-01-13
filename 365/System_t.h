#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class System_t {
private:
	string opersystem;
	int internalm;
	string card;
public:
	System_t(string opersystem, int internalm, string card);
	System_t(string opersystem);
	System_t();
	~System_t();
	void read();
	void display();
	string getCard();
	void setCard(string a);
};