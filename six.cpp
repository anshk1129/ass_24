#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main(){
  int n1,n2;
  cout<<"Enter two numbers"<<endl;
  cin>>n1>>n2;
  cout<<"Before swap n1 = "<<n1<<" n2 = "<<n2<<endl;
  swap(n1,n2);
   cout<<"After swap n1 = "<<n1<<" n2 = "<<n2<<endl;

    return 0;
}
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}