#include<iostream>
using namespace std;
int cal_digit_max(int n);
int main(){
  int n;
  cout<<"Enter a digit"<<endl;
  cin>>n;
  int res=cal_digit_max(n);
  cout<<"Maximum digit is "<<res;


    return 0;
}

int cal_digit_max(int n){
    int max=0;
     while(n){
        if(max<n%10){
            max=n%10;
        }
        n=n/10;
     }
     return max;

}