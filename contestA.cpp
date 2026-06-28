#include <bits/stdc++.h>
using namespace std;
int main() {

   int t;
   cin>>t;

   while(t--) {
    int k;
    cin>>k;
    vector <int> tower(k);
    for(int i=0;i<k;i++) {
        cin>>tower[i];
    }

    for(int i=0;i<k-1;i++) {
        for(int j=i+1;j<k;j++) {
            if(tower[j] > tower[i]) {
                tower[j] =tower[i];
            }
        }
    }

    int sum =0;
   for (int i=0;i<k;i++) {
    sum += tower[i];
   }

   cout<<sum<<endl;

   }

 return 0;
}