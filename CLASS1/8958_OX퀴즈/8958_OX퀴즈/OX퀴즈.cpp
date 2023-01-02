#include <iostream>
using namespace std;

int main()
{
	int loop_size = 0;
	cin >> loop_size;

	for (int i = 0; i < loop_size; i++)
	{
		int repeat = 0;
		int sum = 0;

		string str = "";
		cin >> str;

		for (int j = 0; j < str.size(); j++)
		{
			if (str.at(j) == 'O')
			{
				repeat++;
				sum += repeat;
			}
			else
			{
				repeat = 0;
			}
		}
		cout << sum << endl;
	}
}