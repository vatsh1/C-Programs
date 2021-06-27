#include <bits/stdc++.h>
using namespace std;

int main(){
         long long int t,i;
         long long int a,c = 0,d,e,f,j;
         cin>>t;
         for(i = 0;i<t;i++){
                  cin>>a;
                  long long int b[a];
                  for(j = 0;j<a;j++){
                           cin>>b[j];
                  }
                  reverse(b, b + a);
                  for (j = 0; j < a; j++){
                           cout << b[j] << " ";
                  }
                  cout<<"\n";


         }

}
