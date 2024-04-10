// Title : 요세푸스 문제
// https://www.acmicpc.net/problem/1158

#include <iostream>

#include <list>
using namespace std;

#define check(a, b) { if (a == b.end()) a = b.begin(); }

list<unsigned> peoples;
unsigned n, k;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (size_t i = 0; i < n; ++i)
		peoples.emplace_back(i + 1);

	auto it = peoples.begin();

	cout << "<";

	while (peoples.size() > 1)
	{
		for (size_t i = 1; i < k; ++i)
		{
			check(it, peoples);

			++it;

			check(it, peoples);
		}

		cout << *it << ", ";

		it = peoples.erase(it);
	}

	cout << peoples.back() << ">\n";

	return 0;
}
