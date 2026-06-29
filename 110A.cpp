#include <bits/stdc++.h>
using namespace std;
int main() {

   long long  n;
   cin>>n;
   long long cnt =0;

   while(n>0){
    long long k;
    k = n%10;

    if(k == 4 || k == 7){
        cnt++;
    }

    n /= 10;
   }

   if(cnt == 4 || cnt==7){
    cout<<"YES";
   }
   else {
    cout<<"NO";
   }

 return 0;
}