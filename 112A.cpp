#include <bits/stdc++.h>
using namespace std;
int main() {

   string st1;
   string st2;

   cin>>st1;
   cin>>st2;

   for(int i=0;i<st1.size() ; i++) {
    char ch1 = st1[i];
    char ch2 = st2[i];

    ch1 = tolower(ch1);
    ch2 = tolower(ch2);

    if(ch1 < ch2) {
        cout<<-1;
        return 0;
    }
    else if (ch2 < ch1) {
        cout<<1;
        return 0;
    }
   }

   cout<<0;


 return 0;
}