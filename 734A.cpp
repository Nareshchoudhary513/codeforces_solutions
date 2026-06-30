#include <bits/stdc++.h>
using namespace std;
int main() {

   int n ;
   cin>>n;

   string game;
   cin>>game;
   int A=0 , D=0;

   for(int i=0;i<game.size();i++){
    if(game[i] == 'A'){
        A++;
    }
    else {
        D++;
    }
   }

   if(A > D){
    cout<<"Anton";
   }
   else if(D > A) {
    cout<<"Danik";
   }
   else {
    cout<< "Friendship";
   }

 return 0;
}