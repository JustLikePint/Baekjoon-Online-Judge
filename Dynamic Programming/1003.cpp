// Title : 피보나치 함수
// https://www.acmicpc.net/problem/1003

#include <iostream>

#include <vector>
using namespace std;

unsigned t, n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;

    for (size_t i = 0; i < t; ++i)
    {
        vector<vector<unsigned>> called = { {1, 0}, {0, 1} };
        
        cin >> n;

        if (n == 0)
        {
            cout << called[0][0] << " " << called[0][1] << "\n";

            continue;
        }

        if (n == 1)
        {
            cout << called[1][0] << " " << called[1][1] << "\n";

            continue;
        }

        for (size_t j = 2; j <= n; ++j)
        {
            unsigned front = called[j - 2][0] + called[j - 1][0];
            unsigned back  = called[j - 2][1] + called[j - 1][1];

            called.push_back({ front, back });
        }

        cout << called[n][0] << " " << called[n][1] << "\n";
    }

	return 0;
}
