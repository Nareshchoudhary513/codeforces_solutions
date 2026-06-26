#include <bits/stdc++.h>
using namespace std;
int main() {

   int t;
   cin>>t;
   int cntr =0;

   while(t--) {
    int p , v ,t;
    cin>>p;
    cin>>v;
    cin>>t;

    int sum = p+v+t;

    if (sum >= 2) {
        cntr++;
    }
   }

   cout<<cntr;

 return 0;
}