#include <iostream>
#include <string>
using namespace std;

int main()
{
	int loop = 0;
	cin >> loop;

	for (int i = 0; i < loop; i++)
	{
		int repeat = 0;
		string str = "";

		cin >> repeat >> str;
		for (int j = 0; j < str.length(); j++)
		{
			for (int k = 0; k < repeat; k++)
				cout << str[j];
		}
		cout << endl;
	}

	return 0;
}