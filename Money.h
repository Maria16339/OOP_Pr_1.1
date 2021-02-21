#pragma once
#include <iostream>

using namespace std;
class Money
{
private:
	int nominal;
	int number;
public:
	int summa() { return nominal * number; };
	int GetFirst() const { return nominal; };
	int GetSecond() const { return number; };
	bool Init(int first, int second);
	void SetFirst(int value);
	void SetSecond(int value);
	void Display() const { cout << "Íîì³íàë êóïþðè: " << nominal << " || Ê³ëüê³ñòü êóïþð: " << number << endl; };
	void Read();
};

