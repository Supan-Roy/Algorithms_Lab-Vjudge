#include <bits/stdc++.h>
using namespace std;

int main()
{
        long int numBooks, prices[100000], totalMoney, minPrice, maxPrice, diff, i, j;

        while (cin >> numBooks)
        {
                for (i = 1; i <= numBooks; i++)
                {
                        cin >> prices[i];
                }
                cin >> totalMoney;

                diff = INT_MAX;

                for (i = 1; i < numBooks; i++)
                {
                        if (prices[i] >= totalMoney)
                                continue;
                        for (j = i + 1; j <= numBooks; j++)
                        {
                                if (prices[i] + prices[j] == totalMoney && abs(prices[i] - prices[j]) < diff)
                                {
                                        diff = abs(prices[i] - prices[j]);
                                        if (prices[i] < prices[j])
                                        {
                                                minPrice = prices[i];
                                                maxPrice = prices[j];
                                        }
                                        else
                                        {
                                                minPrice = prices[j];
                                                maxPrice = prices[i];
                                        }
                                }
                        }
                }

                cout << "Peter should buy books whose prices are " << minPrice << " and " << maxPrice << ".\n\n";
        }

        return 0;
}