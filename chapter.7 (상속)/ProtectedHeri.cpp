#include <iostream>
#pragma warning(disable:4996)
using namespace std;

class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	Base() : num1(1), num2(2), num3(3)
	{}

};

class Derived : protected Base {};		//empty

int main(void)
{
	Derived drv;
	//cout << drv.num3 << endl;		//컴파일 에러발생
	return 0;
}