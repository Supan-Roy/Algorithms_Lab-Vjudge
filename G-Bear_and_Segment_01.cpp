#include<bits/stdc++.h>
using namespace std;

bool segment(const string& s)
{
        int first = s.find('1');
        int last = s.rfind('1');
        return first!=string::npos && s.find('0', first)>last;
}

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
                string s;
                cin>>s;
                cout<<(segment(s)? "YES" : "NO")<<endl;                
        }
        return 0;
}