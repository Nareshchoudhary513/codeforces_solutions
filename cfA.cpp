#include <bits/stdc++.h>
using namespace std;
int main() {

   int t;
   cin>>t;

   while(t--) {
    int x , y;
    cin>>x>>y;

    for(int i=1 ;i<=100;i++){
        int temp =y;
        temp = y*i;
        if(temp==x) {
            cout<<"YES"<<endl;
            break;
        }
        else if(temp>x) {
            cout<<"NO"<<endl;
            break;
        }
    }
   }

 return 0;
}