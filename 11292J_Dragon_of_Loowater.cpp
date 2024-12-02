#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a[20000],b[20000];
    while(true)
    {
        cin>>x>>y;
        if(x==0){
                break;
        }
        for(int i=0;i<x;i++)
        {
                cin>>a[i];
        }
        for(int i=0;i<y;i++)
        {
                cin>>b[i];
        }
        sort(a,a+x);
        sort(b,b+y);
        int cost=0, j=0;
        
        for(int i=0;i<x;i++)
        {
                while(j<y&&b[j]<a[i]) j++;
                if(j==y)
                {
                        cout<<"Loowater is doomed!"<<endl;
                        goto next_case;
                }
                cost+=b[j++];
        }
        cout<<cost<<endl;
        next_case:;
    }
    
    return 0;
}