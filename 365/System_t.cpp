#include "System_t.h"
#include <iostream>
#include <string>
using namespace std;

System_t::System_t(string opersystem, int internalm, string card) {
	this->opersystem = opersystem;
	this->internalm = internalm;
	this->card = card;
}
System_t::System_t(string opersystem) {
	this->opersystem = opersystem;
	internalm = 0;
	card = "card";
}
System_t::System_t() {
	opersystem = "opersystem";
	internalm = 0;
	card = "card";
}
System_t::~System_t() {

}
void System_t::read() {
	cout << "Введем информацию о системе" << endl;
	cout << "Операционная система: ";
	cin >> opersystem;
	cout << "Встроенная память(Гб): ";
	cin >> internalm;
	cout << "Карта памяти(yes/no): ";
	cin >> card;
}
void System_t::display() {
	cout << endl;
	cout << "Система:" << endl;
	cout << "-операционная система:" << opersystem << endl;
	cout << "-встроенная память:" << internalm << endl;
	cout << "-карта памяти:" << card << endl;
}
string System_t::getCard() {
	return card;
}
void System_t::setCard(string a) {
	this->card = a;
}