#include <bits/stdc++.h>
using namespace std;

int main(){
         map<int,int>m;
         m[1]++;
         map<int,int>::iterator i;
         for(i=m.begin();i!=m.end();++i){
                  cout<<i->first<<" "<<i->second;
         }
         return 0;

}
