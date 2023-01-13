// 365.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string>
#include "Current_state.h"
#include "Dimensions.h"
#include "System_t.h"
#include "Screen.h"
#include "General_data.h"
#include "Telephone.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Current_state current_state = Current_state::Current_state(0, 0, "internet", 0, "no");
	Dimensions dimensions = Dimensions::Dimensions(0, 0, 0, 0);
	System_t system_t = System_t::System_t("opersystem", 0, "card");
	Screen screen = Screen::Screen(0, "pixel", 0, 0);
	General_data general_data = General_data::General_data("country", "model", 0);
	int d, p, t, n, c;
	Telephone* spisok = new Telephone;
	*spisok = Telephone::Telephone(current_state, dimensions, system_t, screen, general_data);
	spisok->read();
	spisok->display();
	spisok->number_phone();
	do {
		cout << endl << "Выберите действие, которое хотите совершить:" << endl << "1.Вывод информации" << endl << "2.Зарядить телефон" << endl << "3.Изменить данные памяти" << endl << "4.Ввод новых данных" << endl << "5.Посчитать соотношение экрана к корпусу телефона" << endl << "6.Позвонить" << endl << "7.Включить режим энергосбережения" << endl << "8.Преверить свободную память" << endl << "9.Выход" << endl;
		cin >> d;
		if (d == 1) {
			spisok->display();
			spisok->number_phone();
		}
		if (d == 2)
		{
			spisok->zaryad();
		}
		if (d == 3)
			spisok->change();
		if (d == 4) {
			spisok->read();
			spisok->display();
			spisok->number_phone();
		}
		if (d == 5) {
			int r = screen_percentage(*spisok);
			cout << "Соотношение экрана к корпусу телефона(%):" << r << endl;
		}
		if (d == 6) {
			cout << "1.Хотите узнать информацию звонков после вызова" << endl << "2.Позвонить без вывода дополнительной информации" << endl << "3. Сделать сразу несколько звонков" << endl;
			cin >> c;
			Current_state calls1, calls2;
			if (c == 1) {
				calls1 = spisok->getCurrent_state();
				calls2 = calls1++;
				spisok->setCurrent_state(calls1);
				int c = spisok->number_calls(calls2);
				cout << "Количество звонков до нынешнего:" << c << endl;
				c = spisok->number_calls(calls1);
				cout << "Количество звонков после нынешнего:" << c << endl;
			}
			if (c == 2) {
				calls1 = spisok->getCurrent_state();
				calls2 = ++calls1;
				spisok->setCurrent_state(calls1);
				int c = spisok->number_calls(calls1);
				cout << "Количество звонков:" << c << endl;
			}
			if (c == 3) {
				cout << "Сколько звонков вы планируете сделать?";
				cin >> n;
				calls1 = spisok->getCurrent_state() + n;
				spisok->setCallsCurrent_state(calls1);
			}
		}
		if (d == 7) {
			int s;
			cout << "Сколько процентов заряда должно быть на телефоне, чтобы включить энергосбережение?";
			cin >> s;
			int s1 = 0;
			s1 = *spisok->energy_saving(s);
			cout << "Разница введенного значения и заряда телефона ";
			cout << s1 << endl;
		}
		if (d == 8) {
			int s;
			cout << "Какой объем памяти вы хотели бы оставить свободной?";
			cin >> s;
			int s1 = spisok->check_memory(s);
			cout << "Разница введенного значения и свободной памяти ";
			cout << s1 << endl;
		}
		if (d == 9) {
			cout << "Вы действительно хотите выйти? (1-Да,2-Нет):";
			cin >> p;
			if (p == 1)
				return 0;
		}
		cout << "Хотите продолжить? Да - любая клавиша, Нет -ESC";
	} while (_getch() != 27);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
