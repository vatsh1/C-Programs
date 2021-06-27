
#include <bits/stdc++.h>
using namespace std;

int main(){
         int t,j;
         cin>>t;
         for(j=0;j<t;j++){
                  long long int n,i,count = 0,a,k=0;
                  cin>>n;
                  long long int s[n];
                  long long int d[n];
                  for(i=0;i<n;i++){
                           cin>>s[i];
                  }
                  for(i=0;i<n;i++){
                           d[i]=s[i];
                  }

                  int m = sizeof(d) / sizeof(d[0]);
                  sort(d, d + m);
                  for(i=0;i<n;i++){
                           if(d[i]==s[i]){
                                    count++;
                           }
                           else{
                                    break;
                           }
                  }
                  for(i=n-1;i>=0;i--){
                           if(d[i]==s[i]){
                                    k++;
                           }
                           else{
                                    break;
                           }
                  }
                  int f = count + k;
                  int l = n - f;
                  cout<<l<<"\n";
         }

}



