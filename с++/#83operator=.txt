#include <iostream>
#include <string>


using namespace std;

class MyClass 
{
public:
	int *data;
	MyClass(int size)
	{
		this->SIZE = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Вызвался конструктор класса" << this << endl;
	};

	// конструктор копирования
	MyClass(const MyClass& other)
	{
		this->SIZE = other.SIZE;
		this->data = new int [other.SIZE];

		for (int i = 0; i < other.SIZE; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "конструктор копирования"<<this << endl;
	}

	MyClass & operator= (const MyClass &other) 
	{
		cout << "operator=" << this << endl;

		this->SIZE = other.SIZE;

		delete[] this->data;

		this->data = new int[other.SIZE];
		for (int i = 0; i < other.SIZE; i++)
		{
			this->data[i] = other.data[i];
		}

		return *this;
	}

	~MyClass()
	{
		cout << "Вызвался деструктор" << this << endl;
		delete[] data;
	}
private:
	int SIZE;
};



void foo(MyClass value)
{
	cout << "Вызвалась функция foo " << endl;
}

MyClass foo2()
{
	cout << "Вызвалась функция foo2"<<endl;
	MyClass temp(2);

	return temp;
}

int main()
{
	setlocale(LC_ALL, "ru");

	MyClass a(10);
	MyClass b(a);
	MyClass c(5);

	c = a = b;
	
	//foo2();

	//foo(a);

	return 0;
	
}
