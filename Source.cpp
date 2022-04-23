#include <iostream>
#include "String.h"


using namespace std;

int main()
{
	char* lock = new char[6];
	lock[0] = 't';
	lock[1] = 'a';
	lock[2] = 'b';
	lock[3] = 'l';
	lock[4] = 'e';
	lock[5] = '\0';
	char* lock1 = new char[6];
	lock1[0] = '10';
	lock1[1] = '9';
	lock1[2] = '8';
	lock1[3] = '7';
	lock1[4] = '6';
	lock1[5] = '\0';
	char* lock2 = new char[7];
	lock2[0] = 'D';
	lock2[1] = 'F';
	lock2[2] = 'G';
	lock2[3] = 'H';
	lock2[4] = 'J';
	lock2[5] = 'K';
	lock2[6] = '\0';
	TString stroka1 (lock);
	TString stroka2(stroka1);
	cout << stroka2 << endl;

	TString stroka3 (lock1);
	TString stroka4(lock2);
	stroka3 = stroka3 + stroka2;
	cout << stroka3 << endl;
	stroka3 += lock2;
	cout << stroka3 << endl;

	cout << stroka3.Find('E') << endl;
	cout << stroka3.Find(stroka4) << endl << (stroka3 < stroka4) << endl << (stroka3 > stroka4) << endl << (stroka3 == stroka4) << endl;
	cout << stroka3[14];
	return 0;
}