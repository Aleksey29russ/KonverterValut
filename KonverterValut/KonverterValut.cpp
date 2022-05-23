﻿// KonverterValut.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double rub, dollar, euro, rub_dollar, rub_euro,
		euro_rub, dollar_rub, euro_dollar, dollar_euro;
	int menu,cicle=0;

	cout << "\t\tВыберите действие:\n";
	for(int i = cicle;i >= 0 && i <= 6;i++){
		cout << "\tЧтобы перевести рубли в доллары введите  1 \n"
		<< "\tЧтобы перевести рубли в евро введите     2\n"
		<< "\tЧтобы перевести евро в рубли введите     3\n"
		<< "\tЧтобы перевести доллары в рубли введите  4\n"
		<< "\tЧтобы перевести евро в доллары введите   5\n"
		<< "\tЧтобы перевести доллары в евро введите   6\n"
		<< "\tВыйти из программы введите 0\n";
	
		cin >> menu;
		if (menu == 1) {
			cout << "Введите сумму в рублях\n";
			cin >> rub;
			rub_dollar = rub / 61;
			cout << rub << " Рублей = " << rub_dollar << " Долларов \n\n";
		}
		else if (menu == 2) {
			cout << "Введите сумму в рублях\n";
			cin >> rub;
			rub_euro = rub / 65;
			cout << rub << " Рублей = " << rub_euro << " Евро \n\n";
		}
		else if (menu == 3) {
			cout << "Введите сумму в евро\n";
			cin >> euro;
			euro_rub = euro * 65;
			cout << euro << " Евро = " << euro_rub << " Рублей \n\n";
		}
		else if (menu == 4) {
			cout << "Введите сумму в долларах\n";
			cin >> dollar;
			dollar_rub = dollar * 61;
			cout << dollar << " Долларов = " << dollar_rub << " Рублей \n\n";
		}
		else if (menu == 5) {
			cout << "Введите сумму в долларах\n\n";
			cin >> euro;
			euro_dollar = euro * 65 / 61;
			cout << euro << " Евро = " << euro_dollar << " Долларов \n\n";
		}
		else if (menu == 6) {
			cout << "Введите сумму в долларах\n";
			cin >> dollar;
			dollar_euro = dollar * 61 / 65;
			cout << dollar << " Долларов = " << dollar_euro << " Евро \n\n";
		}
		else if (menu == 0) break;
		else cout << "Error\n";
		}
	return 0;
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
