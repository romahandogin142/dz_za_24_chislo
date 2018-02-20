#include <windows.h>
#include <iostream>
#include <locale.h>
using namespace std;

//Ссылки
double f(double x, double y);
double f1(double x1, double y1, double x2, double y2);
int f02(int x2, int x1, int x0);
double tre(double a, double b, double c);

int main()
{
	setlocale(LC_ALL, "ru");

	int nz;
	cout << "Vedite nomer zd ot 7 do 10 ";
	cin >> nz;

	if (nz == 0)
		system("cls");

	else if (nz == 7)
	{
		/*7.	Используя функцию Dist из задания Proc59, описать процедуру Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC), 
		находящую высоты hA, hB, hC треугольника 
		ABC (выходные параметры), проведенные соответственно из вершин A, B, C
		(их координаты являются входными параметрами). С помощью этой процедуры найти высоты треугольников ABC, ABD, ACD, 
		если даны координаты точек A, B, C, D.*/
		system("cls");
		double a, b, c;
		cout << "Vedite chislo a - ";
		cin >> a;
		cout << "Vedite chislo b - "; 
		cin >> b;
		cout << "Vedite chislo c - ";
		cin >> c;
		double S = tre(a, b, c);
		cout << " chislo S = " << S << endl;
		double h, c1, v;
		h = 2 * S / a;
		c1 = 2 * S / b;
		v= 2 * S / c;
		cout << "Visota  а = " << h << endl;
		cout << "Visota b  = " << c1 << endl;
		cout << "Visota c = " << v << endl;
		system("pause");
	}

	else if (nz == 8)
	{
		/*8.	Определите функцию double f(double x, double y), которая вычисляет
		и возвращает длину гипотенузы прямоугольного треугольника, две другие стороны 
		x и y которого известны*/
		system("cls");
		double x, y;
		cout << "Vedite x - ";
		cin >> x ;
		cout << "Vedite y - ";
		cin >> y;
		f(x, y);
		return 0;
	}

	else if (nz == 9)
	{
		/*9.	Напишите функцию double f(double x1, double y1, double x2, double y2), 
		которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2)*/
		system("cls");
		int x1, x2, y1, y2;
		x1 = 44;
		y1 = 61;
		cout << "Vedite rasstoynie do 1 tocki : ";
		cin >> x2;
		cout << "Vedite rasstoynie do 2 tocki: ";
		cin >> y2;
		f1(x1, x2, y1, y2);
		return 0;

	}
	else if (nz == 10)
	{
		/*10.	Напишите функцию int f(int m2, int m1, int m0), 
		которая вычисляет и возвращает натуральное число, первая (сотни), вторая (десятки) 
		и третья (единицы) цифры которого равны соответственно m2, m1, m0*/
		system("cls");
		cout << "Vihislite " << endl;
		int m2 = 100+rand() % 899;
		int m1 = 10+rand() % 99;
		int m0 = 1+rand() % 9;
		int m = f02(m2, m1, m0);
		cout << " x2 =" << m2 << ", x1 =  " << m1 << ", x0 = " << m0 << " fo =" << m << "." << endl;

	}

}


double f(double x, double y)//Функция гипотенузы
{
	cout << " P = " << x*y / 2 << endl;
	cout << "Qipotenuza  = " << sqrt(x * x + y * y) << endl;
	return 0;
}

double f1(double x1, double y1, double x2, double y2)//Функция для изменения
{
	cout << " Pastoyanie ot  Х1 do Y1 = " << x1 + y1 << " km" << endl;
	cout << "Pastoyanie ot  Х2 do Y2 = " << x2 + y2 << " km" << endl;
	return 0;
}


int f02(int x2, int x1, int x0)//Трехзначное число 
{
	return x2*100+x1*10+x0;
}

double tre(double a, double b, double c)
{
	double p = (a + b + c) / 2.0;
	double S = sqrt(p*(p - a)*(p - b)*(p - c));
	return S;
}