#include<iostream>
using namespace std;

int main(){
         long long int t,i;
         long long int a,b,c = 0,d,e,f;
         cin>>t;
         for(i = 0;i<t;i++){
                  cin>>a;
                  cin>>b;
                  if(a>b){
                           d = a - b;
                           if(d>=10){
                                    e = d/10;
                                    if(d%10 != 0){
                                             e = e + 1;
                                    }
                                    cout<<e<<"\n";
                           }
                           else{
                                    cout<<"1"<<"\n";
                           }
                  }
                  else if(a == b){
                           cout<<"0"<<"\n";
                  }
                  else{
                           d = b - a;
                           if(d>=10){
                                    e = d/10;
                                    if(d%10 != 0){
                                             e = e + 1;
                                    }
                                    cout<<e<<"\n";
                           }
                           else{
                                    cout<<"1"<<"\n";
                           }
                  }
         }

}
