#include<iostream>
using namespace std;

void main()
{
	int input;
	int n = 1;
	char c = '*';
	
	cin >> input;
	int hight = input;
	for (int j = 0; j < hight; j++)
	{
		for (int i = 0; i < input-1; i++)
		{
			cout << " ";
		}
		input--;
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		n++;
		cout << endl;
	}
	

}
