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
	cout << "Введем информацию об экране" << endl;
	cout << "Диагональ(дюйм): ";
	cin >> diagonal;
	cout << "Плотность пикселей(ppi): ";
	cin >> pixel;
	cout << "Ширина(мм): ";
	cin >> width_s;
	cout << "Высота(мм): ";
	cin >> height_s;
}
void Screen::display() {
	cout << endl;
	cout << "Информация об экране:" << endl;
	cout << "-диагональ:" << diagonal << endl;
	cout << "-плотность пикселей:" << pixel << endl;
	cout << "-ширина экрана:" << width_s << endl;
	cout << "-высота экрана:" << height_s << endl;
}
int Screen::getWidth_s() {
	return width_s;
}
int Screen::getHeight_s() {
	return height_s;
}