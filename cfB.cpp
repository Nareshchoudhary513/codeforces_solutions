#include <bits/stdc++.h>
using namespace std;

bool isgood (int num ){
    string str= to_string(num);

    map <int,int> ls1;

    for(int i=0;i<str.size();i++){
        ls1[str[i]]++;
    }

    if(ls1.size() == 1 || ls1.size() == 2) {
        return true;
    }


    return false ;



}
int main() {

   int t;
   cin>>t;

   while(t--){
    int x;
    cin>>x;

    for(int i=2;i<INT_MAX;i++){

        if(isgood(i) == true){
            int mul =x*i;
            if(isgood(mul) == true){
                cout<<i<<endl;
                break;
            }
        }
    }
   }

 return 0;
}