#include<iostream>
using namespace std;
int add(int a ,int b);
float add(int a,float c);
float add(float a,float c);
int main(){
   int a,b;
   float c,d;
   cout<<"Enter two integer numbers"<<endl;
   cin>>a>>b;
   cout<<"Enter two float numbers"<<endl;
   cin>>c>>d;
   cout<<"\nAddition of int numbers are "<<add(a,b);
   cout<<"\nAddition of float numbers are "<<add(c,d);
   cout<<"\nAddition of int and float numbers are "<<add(a,c);

    return 0;
}
int add(int a ,int b){
    return a+b;
}
float add(int a,float c){
    return a+c;
}
float add(float a,float c){
    return a+c;
}