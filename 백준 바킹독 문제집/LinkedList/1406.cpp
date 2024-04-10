// Title : 에디터
// https://www.acmicpc.net/problem/1406

#include <iostream>

#include <string>
#include <list>
using namespace std;

string str = "";
list<char> editor;
unsigned m;
char c, w;

int main()
{
	cin >> str;
	for (const auto& ch : str)
		editor.emplace_back(ch);

	auto cursor = editor.end();

	cin >> m;
	for (size_t i = 0; i < m; ++i)
	{
		cin >> c;

		if (c == 'L')
		{
			if (cursor != editor.begin())
				cursor--;

			continue;
		} // if(== L)

		if (c == 'D')
		{
			if (cursor != editor.end())
				cursor++;

			continue;
		}// if(== D)

		if (c == 'B')
		{
			if (cursor != editor.begin())
				cursor = editor.erase(--cursor);
			// 참고 ( list erase() return value )
			// https://learn.microsoft.com/ko-kr/cpp/standard-library/list-class?view=msvc-170

			continue;
		}// if(== B)

		if (c == 'P')
		{
			cin >> w;

			editor.insert(cursor, w);

			continue;
		}// if(== P)

	}

	for (const auto& ch : editor)
		cout << ch;

	cout << "\n";

	return 0;
}
