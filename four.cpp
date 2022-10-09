#include<iostream>
using namespace std;
int combination(int n,int r);
int fact(int n);
int main(){
    int lines,k,r;
    cout<<"Enter the number of lines"<<endl;
    cin>>lines;
    for(int i=1;i<=lines;i++){
          k=1,r=0;        
        for(int j=1;j<=2*lines-1;j++){
              if(j>=lines+1-i&&j<=lines-1+i&&k){
                cout<<" "<<combination(i-1,r);
                k=0;
                r++;
              }
              else{
                cout<<"  ";
                k=1;
              }

        }
        cout<<endl;
    }
    return 0;
}
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int combination(int n,int r){
    return (fact(n))/(fact(n-r)*fact(r));
}