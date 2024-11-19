#include <iostream>

using namespace std;

int main ()
{
    int age;
	double money;
	bool parent;
	string toPrintMoney, toPrintShow;
	cout << "Enter age:";
	cin >> age;
	if (age<13){
		cout << "With parent?";
		cin >> parent;
		if(parent)
			toPrintShow = "R, PG &G Show";
		else
			toPrintShow = "G Show";
	}
	else if(age<16){
		cout << "With  parent?";
		cin >> parent;
		if(parent)
			toPrintShow = "R, PG &G Show";
		else
			toPrintShow = "PG & G Show";
	}
	else
		toPrintShow = "R, PG &G Show";
	cout << "Enter money: ";
	cin >> money;
	if(money<7.5)
		toPrintShow = "Not enough money.";
	else if(money<10.5)
		toPrintShow = "Can go to matinee show.";
	else
		toPrintShow = "Can go to evening & matinee show.";
	cout << toPrintShow << endl;
	cout << toPrintMoney << endl;
    return 0;     
}