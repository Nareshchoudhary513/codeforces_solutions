#include <bits/stdc++.h>
using namespace std;
int main() {

   int t;
   cin>>t;
   vector<int> scores(t);
   int cntr=0;



   int k;
   cin>>k;

   for(int i =0;i<t;i++) {
    cin>>scores[i];
   }
   
   if (scores[0] == 0) {
        cout<<cntr;
        return 0;
    }

   for(int i=0;i<t;i++) {
    if(scores[i] == 0) {
        break;
    }
    if(scores[i] >= scores[k-1]) {
        cntr++;
    }
    else break;
   }


   cout<<cntr;



 return 0;
}