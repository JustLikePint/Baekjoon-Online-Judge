// Title : 애너그램 만들기
// https://www.acmicpc.net/problem/1919

#include <iostream>

#include <string>
using namespace std;

string str1, str2;
int overlap;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> str1 >> str2;

	for (size_t i = 0; i < str1.length(); ++i)
	{
		size_t location = str2.find_first_of(str1[i]);

		if (location != string::npos)
		{
			overlap++;

			str2[location] = '\0';
		}
	}

	cout << (str1.length() + str2.length()) - (overlap * 2) << "\n";

	return 0;
}
