#include "Money.h"


bool Money::Init(int first, int second)
{
	if (first >= 0 && first==1|| first == 2|| first == 5|| first == 10|| first == 20|| first == 50|| first == 100|| first ==200|| first == 500 && second >= 0)
	{
	
		nominal = first;
		number = second;
		return true;
	}
	else
	{
		nominal = 0;
		number = 0;
		return false;
	}
}
void Money::Read()
{
	int a, b;
	do {
		cout << "Введіть номінал купюри: "; cin >> a;
		cout << "Введіть кількість купюр: "; cin >> b;
		if (a < 0 || b < 0)
			cout << "Помилка введення даних" << endl;
	} while (!(Init(a, b)));

}
void Money::SetFirst(int value)
{
	if (value >= 0)
		nominal = value;
	else
		number = 0;
}
void Money::SetSecond(int value)
{
	if (value >= 0)
		nominal = value;
	else
		number = 0;
}