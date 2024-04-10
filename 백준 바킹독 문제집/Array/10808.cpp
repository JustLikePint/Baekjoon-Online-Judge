// Title : 알파벳 개수
// https://www.acmicpc.net/problem/10808

#include <iostream>

#include <string>
#include <vector>
using namespace std;

string str = "";
vector<int> alphabets(26);

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> str;

	for (size_t i = 0; i < str.length(); ++i)
		alphabets[str[i] - 'a']++;

	for (auto& it : alphabets)
		cout << it << " ";

	return 0;
}
