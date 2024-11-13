#include <iostream>

using namespace std;

int main()
{
    char answer;
	cout << "If the temperature is less than 32 degreees [L=Less,B=Between,G=Greater]:";
	cin >> answer;
	if(answer=='L'){
		cout << "bring a heavy jacket\n";
		cout << "if the temperature is between 32 and 50 degrees [L=Less,B=Between,G=Greater]:";
		cin >> answer;
		if(answer=='B'){
			cout << "Bring a light jacket\n";
			cout << "if the temperature is greater than 50 degrees [L=Less,B=Between,G=Greater]:";
			cin >> answer;
			if(answer=='G'){
				cout << "not bring any jacket\n";
			}
		}
	}
	return 0;
}