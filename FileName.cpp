#include <iostream>
#include <windows.h>
using namespace std; 
//#define SQUARE
//#define triangle
//#define reversetriangle
//#define triangle3
//#define triangle4
//#define romb
//#define plusminus
#define cheas
void main()
{
	setlocale(LC_ALL , "Ru");
#ifdef SQUARE
	int a;
	int i;
	int b;
	cout << "Введи размер сторон квадрата";
	cin >> a;
	for (b = 0;b < a;b++)
	{
		for (i = 0;i < a;i++)
		{
			cout << "* ";

		}
		cout << endl;
	}
#endif //SQUARE
	
#ifdef triangle
	int i, a, b, c;
	cout << "Введи длинну катетов треугольника: ";
	cin >> a;
	c = 0;
	for (i = 0;i < a;i++)
	{
		c++;
		for (b = 0;b < c;b++)
		{	
			cout << "* ";
		}
		cout << endl;
	}
#endif //triangle

#ifdef reversetriangle
	int i, a, b, c;
	cout << "Введи длинну катетов треугольника: ";
	cin >> a;
	c = a+1;
	for (i = 0;i < a;i++)
	{
		c--;
		for (b = 0;b < c;b++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif //reversetriangle
#ifdef triangle3
	int i, a, b, c , d , e , x ;
	cout << "Введи длинну катетов треугольника: ";
	cin >> a;
	c = a + 1;
	for (i = 0;i < a;i++)
	{
		c--;
		d = a - c;
		if (d > 0)
		{
			
				x = 0;
				do
				{
					cout << "  ";
					x++;
				} while (x < d);
				for (e = 0; e < c; e++)
				{
					cout << "* ";
				}
			
		}
		else {
			for (e = 0; e < c; e++)
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
#endif //triangle3
#ifdef triangle4
	int i, a, b, c, d, e, x;
	cout << "Введи длинну катетов треугольника: ";
	cin >> a;
	c = a;
	for (i = 0;i < a;i++)
	{
		c--;
		d = a - c;
		if (c > 0)
		{

			x = 0;
			do
			{
				cout << "  ";
				x++;
			} while (x < c);
			for (e = 0; e < d; e++)
			{

				cout << "* ";
			}

		}
		else {
			for (e = 0; e < c; e++)
			{
				cout << "* ";
			}
		}
		cout << endl;
	}
#endif //triangle4
#ifdef romb
	
	int i, a, b, c, d ,x;
	cout << "Введи размер стороны ромба: ";
	cin >> a ;
	// верх ромба
	for (i=0 ;i < a;i++)
	{	
		x = a - i - 1;
			for (b = 0 ; b < x; b++)
			{
				cout << " ";
			}
		cout << "/";
		d = i * 2;
			for (c=0 ;c < d; c++)
			{
				cout << " ";
			}
			cout << "\\";
			cout << endl;
	}
	for (i = a;i > 0;i--)
	{
		x = a - i;
		for (b = 0; b < x; b++)
		{
			cout << " ";
		}
		cout << "\\";
		d = i * 2 - 2;
		for (c = 0;c < d; c++)
		{
			cout << " ";
		}
		cout << "/";
		cout << endl;
	}

#endif //romb
#ifdef plusminus
	int size, current_num, row, line = 1;

	cout << "Введи размер квадрата: ";
	cin >> size;

	current_num = 1;

	for (row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			if (size % 2 == 0) {
				if (line % 2 != 0) {
					cout << (current_num % 2 == 0 ? " - " : " + ");
				}
				else {
					cout << (current_num % 2 == 0 ? " + " : " - ");
				}
			}

			else {
				cout << (current_num % 2 == 0 ? " - " : " + ");
			}

			current_num++;
		}
		cout << endl;
		line++;
	}
#endif //plusminus

	


};