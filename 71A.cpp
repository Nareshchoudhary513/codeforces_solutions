#include <bits/stdc++.h>
using namespace std;
int main() {

  int n ;
  cin>>n;

  while (n--) {
    string name;
    cin>>name;
    int n =name.size();

    if(n > 10) {
        cout<<name[0]<<(n-2)<<name[n-1]<<endl;
    }
    else {
        cout<<name<<endl;
    }
  }

 return 0;
}