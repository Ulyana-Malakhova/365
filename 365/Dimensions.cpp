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
	cout << "Введем информацию о параметрах телефона" << endl;
	cout << "Ширина(мм): ";
	cin >> width;
	cout << "Высота(мм): ";
	cin >> height;
	cout << "Толщина(мм): ";
	cin >> thickness;
	cout << "Вес(в граммах): ";
	cin >> weight;
}
void Dimensions::display() {
	cout << endl;
	cout << "Параметры:" << endl;
	cout << "-ширина:" << width << endl;
	cout << "-высота:" << height << endl;
	cout << "-толщина:" << thickness << endl;
	cout << "-вес:" << weight << endl;
}
int Dimensions::getWidth() {
	return width;
}
int Dimensions::getHeight() {
	return height;
}