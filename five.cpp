#include<iostream>
using namespace std;
int fibo(int n);
int main(){
   int n,val,flag=0;
  cout<<"Enter a number which you want to check "<<endl;
  cin>>n;
  for(int i=1;;i++){
    val=fibo(i);
    if(val==n){
        flag=1;
        break;
    }
    if(val>n){
        break;
    }

  }
  if(flag==1){
    cout<<"Number is in fibonacci series"<<endl;
  }
  else{
    cout<<"Number is not in fibonacci series";
  }

    return 0;

}
int fibo(int n){

   int fib1=1,fib2=1,temp;
   if(n<=2)
   return 1;
   for(int i=3;i<=n;i++){
      temp=fib1+fib2;
      fib1=fib2;
      fib2=temp;
   }
   return fib2;
}