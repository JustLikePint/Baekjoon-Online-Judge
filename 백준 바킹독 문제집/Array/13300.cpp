// 방 배정
// https://www.acmicpc.net/problem/13300

#include <iostream>

#include <vector>
using namespace std;

int students[2][7] = {};

int peoples, maximum, gender, grade;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> peoples >> maximum;

	for (int i = 0; i < peoples; ++i)
	{
		cin >> gender >> grade;
		students[gender][grade]++;
	}

	int roomCnt = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 1; j < 7; ++j)
		{
			roomCnt += students[i][j] / maximum;

			if (students[i][j] % maximum)
				// 나머지가 0이 아니라면
				roomCnt++;
		}
	}

	cout << roomCnt << "\n";

	return 0;
}
