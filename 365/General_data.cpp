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
	cout << "������ ���������� �� ����� ������" << endl;
	cout << "������-�������������: ";
	cin >> country;
	cout << "������: ";
	cin >> model;
	cout << "��� �������: ";
	cin >> year;
}/*
void General_data::display() {
	cout << endl;
	cout << "����� ������:" << endl;
	cout << "-������-�������������:" << country << endl;
	cout << "-������:" << model << endl;
	cout << "-��� �������:" << year << endl;
}*/
void operator <<(ostream& o, General_data p) {
	cout << "����� ������:" << endl << "-������-�������������:" << p.country << endl << "-������:" << p.model << endl << "-��� �������:" << p.year << endl;
}
int General_data::getYear() {
	return year;
}
void General_data::setYear(int a) {
	this->year = a;
}