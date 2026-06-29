#include <bits/stdc++.h>
using namespace std;
int main() {

   string name;
   cin>>name;
   int up=0;
   int low=0;

   for(int i=0;i<name.size();i++){
    char one = name[i];

    if(int(one) <91){
        up++;
    }
    else {
        low++;
    }

   }

   if(low >= up){
  for(int i=0;i<name.size();i++){
    name[i] = tolower(name[i]);
  }
  cout<<name;
   }

   else {
    for(int i=0;i<name.size();i++){
    name[i] = toupper(name[i]);
  }
  cout<<name;
}

 return 0;
}