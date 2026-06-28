#include <bits/stdc++.h>
using namespace std;
int main() {

   string st;
   cin>>st;


  sort(st.begin() ,st.end());

  int k = st.size()/2;

    for (int i = k; i < st.size(); i++) {
    cout << st[i];
    if (i != st.size() - 1)
        cout << "+";
}

 return 0;
}