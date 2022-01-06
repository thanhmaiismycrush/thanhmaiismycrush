#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef string str;
ull t,b[20],c[20],d;
string a,s;
str ntS(ull x)
{
    stringstream tg;
    tg<<x;
    string s=tg.str();
    return s;
}
ull stN(char x)
{
    ull N;
    stringstream tg;
    tg<<x;
    tg>>N;
    return N;
}
void insert(str a,str b)
{
    if(a.length()>b.length())
    {
        b.insert(0,a.length()-b.length(),'0');
    }
    else
    {
        a.insert(0,a.length()-b.length(),'0');
    }
    return insert(a,b);
}
void solve(str a,str s)
{
   int j=a.size();
       while (j>=0)
       {
           b[j]=stN(a[j]);
           c[j]=stN(s[j]);
           if(c[j]-b[j]>=0 &&c[j]-b[j]<10 && j!=0)
           {
               cout<<c[j]-b[j];j--;
           }
           if (c[j]-b[j]>0 && j==0){cout<<c[j]-b[j];j--;}
           else if(c[j]-b[j]<0)
           {
               d=stN(s[j]+s[j-1]);
               if (d-b[j]>0){cout<<d-b[j];j-=2;}
               if(d-b[j]>10 || d-b[j]<0){cout<<-1;return;}
           }
       }
}
int main()
{
   cin>>t;
   for (ull i=1;i<=t;i++)
   {
       cin>>a>>s;
       insert(a,s);
       solve(a,s);
       cout<<endl;
   }
}