#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
		{
			int len = strlen(myname) + 1;
			name = new char[len];
			strcpy(name, myname);
			age = myage;

		}
	void ShowPersonInfo() const
	{
		cout << "이름:" << name << endl;
		cout << "나이:" << age << endl;
	}

	//얕은 복사에 복사생성자 만들어서 깊은 복사로 변환
	Person(const Person& copy) : age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}


	~Person()
	{
		delete[]name;
		cout<<"called destructor"<<endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}