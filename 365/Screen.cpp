#include "Screen.h"
#include <iostream>
#include <string>
using namespace std;

Screen::Screen(double diagonal, string pixel, int width_s, int height_s) {
	this->diagonal = diagonal;
	this->pixel = pixel;
	this->width_s = width_s;
	this->height_s = height_s;
}
Screen::Screen(double diagonal) {
	this->diagonal = diagonal;
	pixel = "pixel";
	width_s = 0;
	height_s = 0;
}
Screen::Screen() {
	diagonal = 0;
	pixel = "pixel";
	width_s = 0;
	height_s = 0;
}
Screen::~Screen() {

}
void Screen::read() {
	cout << "������ ���������� �� ������" << endl;
	cout << "���������(����): ";
	cin >> diagonal;
	cout << "��������� ��������(ppi): ";
	cin >> pixel;
	cout << "������(��): ";
	cin >> width_s;
	cout << "������(��): ";
	cin >> height_s;
}
void Screen::display() {
	cout << endl;
	cout << "���������� �� ������:" << endl;
	cout << "-���������:" << diagonal << endl;
	cout << "-��������� ��������:" << pixel << endl;
	cout << "-������ ������:" << width_s << endl;
	cout << "-������ ������:" << height_s << endl;
}
int Screen::getWidth_s() {
	return width_s;
}
int Screen::getHeight_s() {
	return height_s;
}