#include <bits/stdc++.h>
using namespace std;
int main() {

   int n;
   cin>>n;

   string stone;
   cin>>stone;
   int cnt = 0;
   char name = stone[0];

   for(int i=1;i<stone.size();i++) {

    if(name == stone[i]){
        cnt++;

    }
    else {
        name = stone[i];
    }
   }

   cout<<cnt;

 return 0;
}