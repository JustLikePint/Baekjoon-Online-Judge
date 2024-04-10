// Title : 키로거
// https://www.acmicpc.net/problem/5397

#include <iostream>

#include <string>
#include <list>
using namespace std;

unsigned cases = 0;
string str = "";

list<char> password;
auto cursor = password.begin();

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> cases;
	for (size_t i = 0; i < cases; ++i)
	{
		cin >> str;

		if (!password.empty())
			password.clear();

		cursor = password.end();

		for (const auto& ch : str)
		{
			if (ch == '<')
			{
				if (cursor != password.begin())
					cursor--;

				continue;
			}

			if (ch == '>')
			{
				if (cursor != password.end())
					cursor++;

				continue;
			}

			if (ch == '-')
			{
				if (cursor != password.begin())
					cursor = password.erase(--cursor);

				continue;
			}

			password.insert(cursor, ch);
		} // for j

		for (const auto& ch : password)
			cout << ch;

		cout << "\n";
	} // for i
	
	return 0;
}
