// Title : Strfry
// https://www.acmicpc.net/problem/11328

#include <iostream>

#include <string>
#include <algorithm>
using namespace std;

int n;
string str1, str2;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> str1 >> str2;

		sort(str1.begin(), str1.end());
		sort(str2.begin(), str2.end());

		if (str1 == str2)
			 cout << "Possible" << "\n";
		else cout << "Impossible" << "\n";
	}

	return 0;
}
