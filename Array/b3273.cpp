// Title : 두 수의 합
// https://www.acmicpc.net/problem/3273

#include <iostream>

#include <vector>
using namespace std;

vector<int> a(1000001);
vector<bool> b(2000001);
int n, x, ans;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        int calc = x - a[i];

        if (calc > 0 && b[calc])
            ans++;

        b[a[i]] = 1;
    } // for i

    cout << ans << "\n";

    return 0;
}
