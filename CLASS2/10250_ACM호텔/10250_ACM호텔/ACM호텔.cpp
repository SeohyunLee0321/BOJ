#include<iostream>
using namespace std;

int main()
{
	int loop, result, height, width, num;
	cin >> loop;

	for (int i = 0; i < loop; i++)
	{
		cin >> height >> width >> num;

		if (num % height == 0)
			result = height * 100 + (num / height);
		else
			result = (num % height) * 100 + (num / height) + 1;

		cout << result << endl;
	}
	return 0;
}