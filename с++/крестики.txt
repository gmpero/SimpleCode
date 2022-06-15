#include <iostream>
#include<ctime>
using namespace std;
const int SIZE = 3;
char mas[SIZE][SIZE]{};
//int mas[SIZE][SIZE]{};


int main()
{	 
	setlocale(LC_ALL,"Rus");
	int i =0;
	int j =0;
	
	bool move = false;
	char move_one = '*';
	char move_two = '#';

	for (int j = 0; j < SIZE; j++)
	{
		for (int i = 0; i < SIZE; i++)
		{
			mas[j][i] = '0';
			cout << mas[j][i] << "\t";
		}
		cout << endl;
	}
	for (int g = 0; g < 9; g++)
	{

		// условие перехода очереди от первого игрока ко второму
		if (move == false)
		{
			cout << "очередь первого игрока" << endl;
			
			move = true;
		}
		else if (move != false)
		{
			cout << "очередь второго игрока" << endl;
			
			move = false;
		}
		P:
		cout << "Введите координаты: ";
		cin >> j >> i;
		// переход от звездочек к решотке(присвоение значения)
		if (mas[j][i] == '0')
		{
			if (move != false) { mas[j][i] = move_one; }
			else { mas[j][i] = move_two; }
		}
		else 
		{
			goto P;
		}
		

		// вывод массива 
		for (int j = 0; j < SIZE; j++)
		{
			for (int i = 0; i < SIZE; i++)
			{
				cout << mas[j][i] << "\t";
			}
			cout << endl;
		}

		//
		if (mas[0][0] !='0' && mas[0][0] == mas[0][1] && mas[0][1] == mas[0][2] ||
			mas[1][0] !='0' && mas[1][0] == mas[1][1] && mas[1][1] == mas[1][2] ||
			mas[2][0] !='0' && mas[2][0] == mas[2][1] && mas[2][1] == mas[2][2] ||

			mas[0][0] !='0' && mas[0][0] == mas[1][0] && mas[1][0] == mas[2][0] ||
			mas[0][1] !='0' && mas[0][1] == mas[1][1] && mas[1][1] == mas[2][1] ||
			mas[0][2] !='0' && mas[0][2] == mas[1][2] && mas[1][2] == mas[2][2] ||

			mas[0][0] !='0' && mas[0][0] == mas[1][1] && mas[1][1] == mas[2][2] ||
			mas[2][0] !='0' && mas[2][0] == mas[1][1] && mas[1][1] == mas[0][2])
		{
			if (mas[j][i] == move_one) 
			{
				cout << "выйграл первый!";
				return 0;
			}
			else 
			{
				cout << "выйграл второй!";
				return 0;
			}
		}
		
	}
	cout << "Ничья";
	return 0;
	
}

