#include<iostream>
using namespace std;

int main()
{
	while (true)
	{
		int line1 = -1;
		int line2 = -1;
		int line3 = -1;
		cin >> line1 >> line2 >> line3;

		if (line1 == 0 && line2 == 0 && line3 == 0)
			return 0;

		if (line2 > line1 && line2 > line3)
		{
			int temp = line1;
			line1 = line2;
			line2 = temp;
		}
		else if (line3 > line1 && line3 > line2)
		{
			int temp = line1;
			line1 = line3;
			line3 = temp;
		}

		if (line1 * line1 == line2 * line2 + line3 * line3)
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
	}
}