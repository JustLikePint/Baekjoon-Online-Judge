// Title : 개수 세기
// https://www.acmicpc.net/problem/10807

#include <iostream>

#include <vector>
using namespace std;

vector<int> nums(201);
int n, num, v;

int main()
{	
	cin >> n;

	for (size_t i = 0; i < n; ++i)
	{
		cin >> num;

		nums[num + 100]++;
	}

	cin >> v;

	cout << nums[v + 100] << "\n";

	return 0;
}
