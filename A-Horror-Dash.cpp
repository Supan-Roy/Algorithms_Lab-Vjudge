#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        int N;
        cin >> N;

        int max_speed = 0;
        for (int j = 0; j < N; ++j)
        {
            int speed;
            cin >> speed;
            if (speed > max_speed)
            {
                max_speed = speed;
            }
        }
        cout << "Case " << i << ": " << max_speed<<endl;
    }
    return 0;
}