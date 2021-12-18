#include<bits/stdc++.h>
using namespace std;


bool check(string a) {
    for (long long i = 0; i < a.size(); i += 1) {
        if (a[i] == 'O') return 0;
    }
    return 1;

}



int main()
{
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    string a;
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cin>>a;
        int dem=0,h[101];
        for (int c=1; c<=12; c++)
        {
            if (12%c==0)
            {
                for (int j=1; j<=c; j++)
                {
                    string s;
                    bool f = true;
                    for (int k=j; k<= 12; k+=c)
                    {
                        s+=a[k-1];
                    }
                    //cout << s << "\n";
                    if (check(s))
                    {
                        dem++;
                        h[dem]=c;
                        break;
                    }
                }

            }
        }
        cout<<dem<<" ";
        for(int c=dem; c>= 1; c--)
        {
            cout<<12/h[c]<<"x"<<h[c]<<" ";

        }
        cout<<endl;
    }
}


