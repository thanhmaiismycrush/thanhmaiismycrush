#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a=0,b;
   string s;
   cin>>n;
   cin>>s;
   for (int i=0;i<s.size();i++)
   {
       if (s[i]=='X'){a++;}
   }
   b=a;
   if (a==(n/2)){cout<<0<<endl;return 0;}
   else if (a<(n/2))
    {
        cout<<(n/2)-a<<endl;
        for (int i=0;i<s.size();i+=(n/2)-a)
        {
            s[i]='X';
            b++;
            if (b==n/2){break;}
        }
    }
    else
    {
        cout<<a-(n/2)<<endl;
        for (int i=0;i<s.size();i+=a-(n/2))
        {
            s[i]='x';
            b--;
            if (b==n/2){break;}
        }
    }
    cout<<s;
    return 0;
}
