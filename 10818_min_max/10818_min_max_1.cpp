#include<iostream>
using namespace std;

int main()
{
	int count;
	int min = 1000001;
	int max = -1000001;
	int temp;

	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> temp;

		if (max < temp)
			max = temp;
		if (min > temp)
			min = temp;
	}

	cout << min << " " << max;

	return 0;
}