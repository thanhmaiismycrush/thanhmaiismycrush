#include<bits/stdc++.h>
using namespace std;
int main()
{
   freopen("inp.txt","r",stdin);
   freopen("out.txt","w",stdout);
   int canteen,a[21],gia_menu,ban_chon,duoc_chon[21],tong_tien = 0;
   int b1,b2,b3,b4;
   int c1=0,c2=0,c3=0,c4=0;
   cin>>canteen;
   for (int i=1;i<=canteen;i++){cin>>a[i];}
   cin>>gia_menu;
   cin>>b1>>b2>>b3>>b4;
   cin>>ban_chon;
   for (int i=1;i<=ban_chon;i++)
   {
        cin>>duoc_chon[i];
        if(duoc_chon[i]==b1){c1++;}
        else if(duoc_chon[i]==b2){c2++;}
        else if(duoc_chon[i]==b3){c3++;}
        else if(duoc_chon[i]==b4){c4++;}
        else {tong_tien+=a[duoc_chon[i]];}
   }
   int m=max(max(c1,c2),max(c3,c4));
   for (int i=1;i<=m;i++)
   {
       int tprice=0;
       if (c1>=i){tprice+=a[b1];}
       if (c2>=i){tprice+=a[b2];}
       if (c3>=i){tprice+=a[b3];}
       if (c4>=i){tprice+=a[b4];}
       if (tprice>gia_menu){tong_tien+=gia_menu;}
       else {tong_tien+=tprice;}
   }
   cout<<tong_tien;
}
