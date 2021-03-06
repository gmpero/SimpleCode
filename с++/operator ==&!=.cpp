#include <iostream>

using namespace std;

class Point 
{
private:
	int x;
	int y;
public:
	Point() 
	{
		x = 0;
		y = 0;
		cout << this << " constructor1" << endl;
	}

	Point(int ValueX, int ValueY)
	{
		x = ValueX;
		y = ValueY;
		cout << this << " constructor2" << endl;
	}

	bool operator ==(const Point & other) 
	{
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
};



int main(int argc, char* argv[])
{
	Point a(1,12);
	Point b(3, 14);

	bool result = a != b;
	
	cout << result << endl;
	return 0;
}
