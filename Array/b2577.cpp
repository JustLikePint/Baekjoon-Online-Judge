// Title : 숫자의 개수
// https://www.acmicpc.net/problem/2577

#include <iostream>

#include <string>
#include <vector>
using namespace std;

int A, B, C;
string str = "";
vector<int> num(10);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> A >> B >> C;

  // int result = A * B * C;
  
	str = to_string((A * B * C));
  // == str = to_string(result);

	for (auto& ch : str)
		num[ch - '0']++;

	for (auto& idx : num)
		cout << idx << "\n";

	return 0;
}
