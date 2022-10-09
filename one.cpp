#include<iostream>
using namespace std;
#include<math.h>
int check_prime(int num);
int main(){
   int num,res;
   cout<<"Enter a number"<<endl;
   cin>>num;
   res=check_prime(num);
   if(res==1)
    cout<<"The given number "<<num<<" is  not prime "<<endl;
   
   else
   cout<<"The given number "<<num<<" is  prime "<<endl;

    return 0;
}  
int check_prime(int num){
    int flag=0;
    for(int i=2;i<=sqrt(num);i++){
      if(num%i==0){
        flag=1;
        break;
      }
   }
   if(flag==1)
   return 1;
   return 0;

}