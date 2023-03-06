//Random Number Generation LCG
#include<iostream>
#define max 20
using namespace std;

int main(){
    int a ,c , x[max], m,i,n;
    cout<<"Enter Multiplier ";
    cin>>a;
    cout<<"Enter Seed ";
    cin>>x[0];
    cout<<"Enter Increment ";
    cin>>c;
    cout<<"Enter Modulus ";
    cin>>m;
    cout<<"Enter the number of random numbers required ";
    cin>>n;
    printf("\nRandom Numbers Are \n");
    for(i=1;i<=n;i++){
        x[i]=(a*x[i-1]+c)%m;
        cout<<(float)x[i]/m<<"\t";
    }
    return 0;
}