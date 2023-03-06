//RN Generation Mid Square method
#include <iostream>
using namespace std;

int main(){
    int seed, i,value,req;
    cout<<"Enter the seed"<<endl;
    cin>>seed;
    cout<<"Enter number of Random numbers required"<<endl;
    cin>>req;
    cout<<"Seed \tSquare \tRandom Number\n";
    
    for(i=0;i<req;i++){
    value=seed*seed;
    cout<<seed<<" \t";
    cout<<value<<" \t";
    seed=(((float)value/1000)-(value/1000))*100;
    cout<<seed<<endl;
    }
    return 0;
}