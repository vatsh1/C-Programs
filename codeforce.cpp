#include<iostream>
using namespace std;

int main(){
         long long int t,i;
         long long int a,b,c = 0;
         cin>>t;
         for(i = 0;i<t;i++){
                  cin>>a;
                  cin>>b;
                  if(a<b){
                           while(a<b){
                                    a = a + 10;
                                    c = c + 1;
                           }
                           cout<<c<<"\n";
                  }
                  else if(a == b){
                           cout<<"0"<<"\n";
                  }
                  else{
                           while(a>b){
                                    if(a>=10){
                                             a = a - 10;
                                             c = c + 1;
                                    }
                                    else{
                                             a = a - a;
                                             c = c + 1;
                                    }
                           }
                           cout<<c<<"\n";
                  }
         }

}
