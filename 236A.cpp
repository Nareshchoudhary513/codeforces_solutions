#include <bits/stdc++.h>
using namespace std;
int main() {

   string st;
   cin>>st;

   unordered_set <char> stt (st.begin() , st.end());
   
   if(stt.size() %2 == 0) {
    cout<<"CHAT WITH HER!";
   }
   else {
    cout<<"IGNORE HIM!";
   }

 return 0;
}