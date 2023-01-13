#include "General_data.h"
#include <iostream>
#include <string>
using namespace std;

General_data::General_data(string country, string model, int year) {
	this->country = country;
	this->model = model;
	this->year = year;
}
General_data::General_data(string model) {
	this->model = model;
	country = "country";
	year = 0;
}
General_data::General_data() {
	model = "model";
	country = "country";
	year = 0;
}
General_data::~General_data() {

}
void General_data::read() {
	cout << "Введем информацию об общих данных" << endl;
	cout << "Страна-производитель: ";
	cin >> country;
	cout << "Модель: ";
	cin >> model;
	cout << "Год выпуска: ";
	cin >> year;
}/*
void General_data::display() {
	cout << endl;
	cout << "Общие данные:" << endl;
	cout << "-страна-производитель:" << country << endl;
	cout << "-модель:" << model << endl;
	cout << "-год выпуска:" << year << endl;
}*/
void operator <<(ostream& o, General_data p) {
	cout << "Общие данные:" << endl << "-страна-производитель:" << p.country << endl << "-модель:" << p.model << endl << "-год выпуска:" << p.year << endl;
}
int General_data::getYear() {
	return year;
}
void General_data::setYear(int a) {
	this->year = a;
}