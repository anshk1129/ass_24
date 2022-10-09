#include<iostream>
using namespace std;
int add(int,int,int=0);
int main(){
  int a,b,c;
  cout<<"Enter two numbers"<<endl;
  cin>>a>>b;
  cout<<"Addition of two numbers "<<add(a,b);
  cout<<"\nEnter three numbers"<<endl;
  cin>>a>>b>>c;
  cout<<"Addition of two numbers "<<add(a,b,c);

   

    return 0;
}
int add(int a,int b,int c){
   return a+b+c;
}