#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int n;
        cin>>n;
        if(n==0) break;

        int count[100]={0};
        for(int i=0;i<n;++i){
                int age;
                cin>>age;
                ++count[age];
        }
        bool first=true;
        for(int age=1;age<=99;age++)
        {
                while(count[age]>0){
                        if(!first) cout<<" ";
                        cout<<age;
                        first=false;
                        --count[age];
                }
        }
        cout<<"\n";
    }
    return 0;
}