#include <bits/stdc++.h>
using namespace std;

int main()
{
        int t, n, caseNum = 0;
        cin >> t;
        while (t--)
        {
                cin >> n;
                vector<int> a(n + 1, 0);
                for (int i = 1; i <= n; i++)
                        cin >> a[i];

                int k = 0, Case;
                for (int i = 1; i <= n; i++)
                {
                        if (a[i] - a[i - 1] > k)
                                k = a[i] - a[i - 1];
                }

                Case = k;
                for (int i = 1; i <= n; i++)
                {
                        if (a[i] - a[i - 1] == k)
                                k--;
                        else if (a[i] - a[i - 1] > k)
                        {
                                Case++;
                                break;
                        }
                }

                cout << "Case " << ++caseNum << ": " << Case << '\n';
        }
        return 0;
}