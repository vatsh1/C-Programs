
#include <bits/stdc++.h>
using namespace std;


int main(){
         int n,i;
         cin>>n;
         long long int d[n];
         for(i=0;i<n;i++){
                  cin>>d[i];
         }
         int m = sizeof(d) / sizeof(d[0]);
         sort(d, d + m);
         long long int cnt=0;
         for(i = 0;i<n/4;i++){
                  cnt = cnt + d[1+(i*4)];
         }
         float res;
         res = cnt%1000000007;
         cout<<res;

}
