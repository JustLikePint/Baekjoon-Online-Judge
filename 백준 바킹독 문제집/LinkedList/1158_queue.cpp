// Title : 요세푸스 문제
// https://www.acmicpc.net/problem/1158

#include <iostream>

#include <queue>
using namespace std;

queue<unsigned> q;
unsigned n, k;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;

	for (size_t i = 1; i <= n; ++i)
		q.push(i);

	cout << "<";

	while (!q.empty())
	{
		for (size_t i = 1; i < k; ++i)
		{
			q.push(q.front());

			q.pop();
		}

		cout << q.front();

		q.pop();

		if (!q.empty()) cout << ", ";
	}

	cout << ">\n";

	return 0;
}
