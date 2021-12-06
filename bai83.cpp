#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>a;
    a[2]="abc";a[3]="def";a[4]="ghi";a[5]="jkl";a[6]="mno";
    a[7]="pqrs";a[8]="tuv";a[9]="wxyz";
    map<int,string>::iterator it;
    for (it = a.begin(); it != a.end(); it++) {
        cout << it->first << ": " << it->second.c_str() << endl;
    }
}
//10 ở lớp ồi



