#include<iostream>
using namespace std;

int main()
{
	int arr[8];
	int ascending = 0;
	int descending = 0;

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < sizeof(arr); i++)
	{
		if (arr[i] == i + 1)
			ascending++;
		else if (arr[i] == 8 - i)
			descending++;
		else
			break;
	}

	if(ascending == 8)
		cout << "ascending" << endl;
	else if(descending == 8)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}