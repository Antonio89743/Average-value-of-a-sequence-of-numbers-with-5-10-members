#include <iostream>
using namespace std;

int main()
{
	int x, n[10], sum = 0, y;
	a:
	cout << "How many members with the sequence have, pick a number between 5 and 10: ";
	cin >> x;
	if (x > 4 && x < 11)
	{
		for (int i = 0; i < x; i++)
		{
			cout << "Enter the " << i + 1 << ". number:";
			cin >> n[i];
			sum = sum + n[i];
			if (i == x-1)
			{
				for (int i = 0; i < x; i++)
				{
					cout << n[i] << "  ";
				}
			}
		}
	}
	cout << '\n';
	y = sum / x;
	cout << "Average value of the sequence: " << y;
}