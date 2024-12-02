#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true){
    int n;
    cin>>n;
    if(n==0) break;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long work=0, balance=0;
    for(int i=0;i<n;i++)
    {
        balance+=a[i];
        work+=abs(balance);
    }
    cout<<work<<endl;
    }
    return 0;
}