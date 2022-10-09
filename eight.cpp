#include<iostream>
using namespace std;
float area(float b,float h);
int area(int l,int b);
float area(int r);
int main(){
  int r,n2,n3;
  float b,h;
  cout<<"Enter the radius of circle"<<endl;
  cin>>r;
  cout<<"Area of circle is "<<area(r);
  cout<<"\nEnter the length and breath of a rectangle"<<endl;
  cin>>n2>>n3;
  cout<<"Area of rectangle is "<<area(n2,n3);
  cout<<"\nEnter the  base and height of a  triangle"<<endl;
  cin>>b>>h;
  cout<<"Area of triangle is "<<area(b,h);

    return 0;
}
float area(int r){
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}
float area(float b,float h){
     return (0.5*b*h);
}