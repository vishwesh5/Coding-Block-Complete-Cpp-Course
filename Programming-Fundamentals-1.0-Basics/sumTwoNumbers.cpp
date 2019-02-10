#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a;
	cin >> b;

	int sum = a+b;
	if (sum%2 == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;
	cout << sum << endl;
	return 0;
}
