#include<iostream>
using namespace std;

int main()
{
	int arr[9];
	for (int i = 0; i < size(arr); i++)
		cin >> arr[i];

	int max = arr[0];
	int index = 1;

	for (int i = 1; i < size(arr); i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			index = i + 1;
		}
	}

	cout << max << endl << index;
}