#include <bits/stdc++.h>
using namespace std;

bool binary(int a, long long int A)
{
        int ans = 0, count = 0;
        while (A != 0)
        {
                if (A % 10 == 1)
                {
                        ans += pow(2, count);
                }
                A /= 10;
                count++;
        }
        return ans == a;
}

int main()
{
        int t, a, b, c, d;
        cin >> t;
        char e; 
        long long int A, B, C, D;

        for (int i = 1; i <= t; i++)
        {
                cin >> a >> e >> b >> e >> c >> e >> d;

                cin >> A >> e >> B >> e >> C >> e >> D;

                if (binary(a, A) && binary(b, B) && binary(c, C) && binary(d, D))
                {
                        cout << "Case " << i << ": Yes" << endl;
                }
                else
                {
                        cout << "Case " << i << ": No" << endl;
                }
        }

        return 0;
}
