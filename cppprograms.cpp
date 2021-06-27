/*
#include<bits/stdc++.h>
using namespace std;
#define vll long long

int main(){
         vll int n,e;
         cin>>n;
         vll int d[n];
         for(int i = 0;i<n;i++){
                  if(i==0||i==1){
                           d[i]=i;
                  }
                  else{
                           int k = i - 2;
                           int l = i - 1;
                           d[i]=d[k]+d[l];
                  }
         }
         for (int i = 0;i<n;i++){
                  cout<<d[i]<<" ";
         }
}

#include<bits/stdc++.h>
using namespace std;
#define vll long long

int main(){
         vll int n,e,j=1,b=0;
         cin>>n;
         vll int d[n];
         for(int i = 0;i<n;i++){
                  if(i==0||i==1){
                           d[i]=i;
                  }
                  else{
                           int k = i - 2;
                           int l = i - 1;
                           d[i]=d[k]+d[l];
                  }
         }
         for (int i = 0;i<n;i++){
                  while(j<=b+1){
                           for (int i = 0;i<=j;i++){
                                    cout<<d[i]<<" ";
                                    j++;
                           }
                           cout<<"\n";
                           b++;
                           j=1;
                  }
         }

}


#include<bits/stdc++.h>
using namespace std;

int fact(int n){
         if (n == 1){
                  return 1;
         }
         else{
                  int b = n*fact(n-1);
                  return b;
         }
}
int main(){
         long long int n;
         cin>>n;
         cout<<fact(n);
}

*/





















