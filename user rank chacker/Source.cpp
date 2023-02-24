#include<iostream>
using namespace std;
int main()
{
	int points;
	cout << "please enter your points \n";
	cin >> points;
	if (points > 0 && points <= 500)
		cout << "not bad \n";
	else if (points > 500 && points <= 1000)
		cout << "very god \n";
	else
		cout << "you are vip \n";
	return 0;
}

