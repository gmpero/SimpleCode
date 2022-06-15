#include <iostream>
#include<ctime>
using namespace std;

//int mas[SIZE][SIZE]{};


int main()
{	 
	setlocale(LC_ALL,"Rus");
	const int SIZE = 9;

	int str = 1;
	int index = 0;
	char field[SIZE]{'0','1','2','3','4','5','6','7','8'};
	char first = 'o';
	char second = 'x';
	bool move = true;
	//char* field = new char[SIZE];

	
	for (int i = 0; i < SIZE; i++, str++)
	{
		//i = (char)i;
		//field[i] = i;
		cout << field[i]<<"\t";
		
			if (str%3==0)
			{
				cout << endl;
			}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		if (move)
		{
			cout << "Ход первого игрока" << endl;
			cout << "Введите координату где хотите поставить нолик:";
			cin >> index;
			field[index] = first;
			system("cls");
			move = false;
		}
		else
		{
			cout << "Ход второго игрока" << endl;
			cout << "Введите координату где хотите поставить крестик:";
			cin >> index;
			field[index] = second;
			system("cls");
			move = true;
		}
		
		

		for (int i = 0; i < SIZE; i++, str++)
		{

			cout << field[i]<<"\t";

			if (str % 3 == 0)
			{
				cout << endl;
			}
		}

	}

}

