#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;

    

    while(n++){
        int a , b , c ,d;

    a = n%10;
    b=n/10%10;
    c=n/10/10%10;
    d=n/10/10/10%10;

    if(a!=b && a!=c && a!=d and b!=c && b!=d and c!=d && d!=a) {
        cout<<n;
        break;
    }
    }

   

 return 0;
}