#include <bits/stdc++.h>
using namespace std;
int main() {

   int t;
   cin>>t;

   int x = 0;

   while(t--) {
    string str;
    cin>>str;

    if(str[1] == '+') {
        x += 1;
    }
    else if(str[1] == '-') {
        x -= 1;
    }
   }


   cout<<x;

   return 0;
}