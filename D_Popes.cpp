#include <bits/stdc++.h>
using namespace std;

int main()
{
        int Y, P;
        while (cin >> Y)
        {
                cin >> P;
                vector<int> years(P);
                for (int i = 0; i < P; ++i)
                {
                        cin >> years[i];
                }

                int maxPopes = 0, startYear = 0, endYear = 0;
                int left = 0;

                for (int right = 0; right < P; ++right)
                {
                        while (years[right] - years[left] >= Y)
                        {
                                left++;
                        }
                        int count = right - left + 1;
                        if (count > maxPopes)
                        {
                                maxPopes = count;
                                startYear = years[left];
                                endYear = years[right];
                        }
                }
                cout << maxPopes << " " << startYear << " " << endYear << endl;
        }

        return 0;
}