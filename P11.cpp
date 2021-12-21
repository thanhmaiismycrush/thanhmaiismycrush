#include<bits/stdc++.h>
using namespace std;
map <char,int>d,d2;
map<char,int>::iterator it;
int kq=0;
int main()
{
    string s,s1;
    cin>>s>>s1;
    for (int i=0;i<s.size();i++)
    {
        d[s[i]]++;
    }
    for (int i=0;i<s1.size();i++)
    {
        d2[s1[i]]++;
    }
    for (it=d2.begin();it!=d2.end();it++)
    {
        if (d[it->first])
         {kq+=min(d[it->first],it->second);}
         else{cout<<-1;return 0;}
    }
    cout<<kq;
    return 0;
}
