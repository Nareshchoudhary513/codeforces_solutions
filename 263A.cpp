#include <bits/stdc++.h>
using namespace std;
int main() {

   vector<vector<int>> matrix(5, vector<int>(5));

   int x = 2 , y =2;

   for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
      cin>>matrix[i][j];
    }
   }
   for(int i=0;i<5;i++) {
    for(int j=0;j<5;j++) {
      if(matrix[i][j] == 1) {
        x = i-x ;  y = j-y;
        break;
      }
    }
   }


   int ans = abs(x) + abs(y);

   cout<<ans;
   

 return 0;
}