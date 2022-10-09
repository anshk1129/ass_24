#include<iostream>
using namespace std;
int power_x(int x,int y);
int main(){

int x,y
long int res;
cout<<"Enter the number and power "<<endl;
cin>>x>>y;
res=power_x(x,y);
cout<<"Answer is "<<res;
    return 0;
}
int power_x(int x,int n){
    if(n==0){
      return 1;
    }
     int xnb2=power_x(x,n/2);
     int xn=xnb2*xnb2;
     if(n%2==1){
        xn=xn*x;
     }
     return xn;
}