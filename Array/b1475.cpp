// Title : 방 번호
// https://www.acmicpc.net/problem/1475

#include <iostream>

#include <string>
#include <vector>
using namespace std;

string room = "";
vector<int> num(9);

int result;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> room;

	for (auto& idx : room)
	{
		if (idx - '0' == 9)
		{
			num[6]++;

			continue;
		} // (idx - '0') == 9

		num[idx - '0']++;
	}

	if (num[6] % 2 != 0)
		 result = num[6] / 2 + 1;
	else result = num[6] / 2;

	num[6] = 0; // 갯수 초기화

	for (auto& n : num)
		result = max(result, n);

	cout << result << "\n";

	return 0;
}
