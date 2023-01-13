#include "Dimensions.h"
#include <iostream>
#include <string>
using namespace std;

Dimensions::Dimensions(int width, int height, int thickness, int weight) {
	this->width = width;
	this->height = height;
	this->thickness = thickness;
	this->weight = weight;
}
Dimensions::Dimensions(int weight) {
	this->weight = weight;
	height = 0;
	thickness = 0;
	width = 0;
}
Dimensions::Dimensions() {
	weight = 0;
	height = 0;
	thickness = 0;
	width = 0;
}
Dimensions::~Dimensions() {

}
void Dimensions::read() {
	cout << "������ ���������� � ���������� ��������" << endl;
	cout << "������(��): ";
	cin >> width;
	cout << "������(��): ";
	cin >> height;
	cout << "�������(��): ";
	cin >> thickness;
	cout << "���(� �������): ";
	cin >> weight;
}/*
void Dimensions::display() {
	cout << endl;
	cout << "���������:" << endl;
	cout << "-������:" << width << endl;
	cout << "-������:" << height << endl;
	cout << "-�������:" << thickness << endl;
	cout << "-���:" << weight << endl;
}*/
void operator <<(ostream& o, Dimensions p) {
	cout << "���������:" << endl << "-������:" << p.width << endl << "-������:" << p.height << endl << "-�������:" << p.thickness << endl << "-���:" << p.weight << endl;
}
int Dimensions::getWidth() {
	return width;
}
int Dimensions::getHeight() {
	return height;
}