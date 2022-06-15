#include<iostream>
using namespace std;

void main()
{
	int input;
	int n = 1;
	char c = '*';
	
	cin >> input;
	int hight = input;
	for (int j = 0 ; j < hight; j++) //цикл отвечающий за высоту
	{
		for (int i = 0; i < input - 1; i++)//цикл отвечающий за вывод пробелов
		{
			cout << " ";
		}
		cout << string(n, c)<<endl; //вывод символов

		input=input-1; //input--;
		n = n + 1; // n++;
		
	}
	

}
