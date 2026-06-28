#include <bits/stdc++.h>
using namespace std;
int main() {

   int a , b;
   cin>>a>>b;
   int cntr =0;

   while(true) {
    if(a<=b) {
        a = a*3;
        b = b*2;
        cntr++;
    }
    else {
        cout<<cntr;
        return 0;
    }
   }

 return 0;
}