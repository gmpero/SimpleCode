#include <iostream>
#include<ctime>
using namespace std;


template<typename T>
void foo(T &a, T &b)
{
	
	T go = a;
	a = b;
	b = go;
}

/*
void foo(int *a, int *b) 
{
	int go = *a;
	*a = *b;
	*b = go;
}
*/
int main()
{
	char char_1 = 56;
	char char_2 = 128;

	cout << char_1<<"\t"<< char_2 << endl;
	//foo(&char_1,&char_2);
	//cout << char_1 <<"\t"<< char_2 << endl;

	foo(char_1, char_2);
	cout << char_1 <<"\t"<< char_2 << endl;


}
