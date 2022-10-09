#include<iostream>
using namespace std;
int main(){
   int a,b;
   float c,d;
   cout<<"Enter two numbers "<<endl;
   cin>>a>>b;
   cout<<"The maximum between two integer numbers is "<<max(a,b);
   cout<<"\nEnter two real numbers"<<endl;
   cin>>c>>d;
   cout<<"The maximum between two real numbers is "<<max(c,d);

    return 0;
}
int max(int a,int b){
    return (a>b)?a:b;
}
float max(float a,float b){
    return (a>b)?a:b;
}