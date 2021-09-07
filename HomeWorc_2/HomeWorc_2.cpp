#include <iostream>
using namespace std;
union MyVariant {
	int a;
	float b;
	char c;
};

struct MyData {
	MyVariant Spirit;
	unsigned int Storm : 1;          // 3 битых поля.
	unsigned int Eart : 1;
	unsigned int Void : 1;
};

int main()
{
	//DZ1
	{
		short int a = 14;
		cout << a << endl;

		int b = 2'000'000;
		cout << b << endl;

		bool flag_raised = true;
		cout << flag_raised << endl;

		bool flag_droped = false;
		cout << flag_droped << endl;

		char c = 'A';
		cout << c << endl;

		float d = 3.14f;
		cout << d << endl;

		long long ver = 9'999'999'999'999'999;
		cout << ver << endl;

		double f = 1.5e+200;
		cout << f << endl;

		cout << "Text" << endl;

	}
	//DZ2
	{
		enum EXOEmpty { X, O, Empty };

	//DZ3

	EXOEmpty EXOE_arr[9] = { Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty, };

	//DZ4
	struct EXOE {

		EXOEmpty EXOE_line1[3] = { Empty, Empty, Empty };
		EXOEmpty EXOE_line2[3] = { Empty, Empty, Empty };
		EXOEmpty EXOE_line3[3] = { Empty, Empty, Empty };
	};

	}
	//DZ5
	MyData DOTA2;
	DOTA2.Spirit.c = 'A';
	DOTA2.Spirit.a = 'B';
	DOTA2.Spirit.b = 2.17f;
	DOTA2.Eart = 1;

	cout << DOTA2.Spirit.c << endl;
	cout << DOTA2.Spirit.a << endl;
	cout << DOTA2.Spirit.b << endl;
	return 0;
}