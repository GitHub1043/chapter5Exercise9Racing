// This program 
// Written by: Ayden Holgate
// Date: Jan. , 2021

// chapter5Exercise9Racing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
using namespace std;

void ReadTime(int& min, int& sec){
	//cout << "Enter a time:" << endl;
	cout << "\n\tEnter minutes: ";
	cin >> min;
	cout << "\tEnter seconds: ";
	cin >> sec;
}

void DisplayTime(int min, int sec){
	cout << "Your time was ";
	cout << setw(2) << setfill('0') << min / 60 << ":";
	cout << setw(2) << setfill('0') << min % 60 + sec / 60 << ":";
	cout << setw(2) << setfill('0') << sec % 60 << endl;
}

void AddTime(int Min1, int Sec1, int Min2, int Sec2, int& MinTot, int& SecTot){
	SecTot = Sec1 + Sec2;
    MinTot = Min1 + Min2;
}

int _tmain(int argc, _TCHAR* argv[])
{// Start of program

	int Min1, Sec1, Min2, Sec2, MinTot, SecTot;
    cout << "Enter a time: " << endl;
    ReadTime(Min1, Sec1);
    cout << "Enter another time: " << endl;
    ReadTime(Min2, Sec2);
    cout << "Your time was: ";
	AddTime(Min1, Sec1, Min2, Sec2, MinTot, SecTot);
    DisplayTime(MinTot, SecTot);

	return 0;
}// End of program

