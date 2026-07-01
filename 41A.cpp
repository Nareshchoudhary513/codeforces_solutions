#include <bits/stdc++.h>
using namespace std;
int main() {

    string one ;
    string two;

    cin>>one;
    cin>>two;

   reverse(two.begin() , two.end());

   if(one == two){
    cout<<"YES"<<endl;
    
   }
   else {
cout<<"NO"<<endl;
   }
   

 return 0;
}