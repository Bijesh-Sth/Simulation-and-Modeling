//Implement KS Test
#include <iostream>
#include <algorithm>
#define max 20
using namespace std;

int main(){
    int i,n;
    float R[max],Dplus[max],Dminus[max],D=0,critical=0.565;
    
    cout<<"Enter the number of random numbers ";
    cin>>n;
    cout<<"Enter "<<n<<" random Numbers"<<endl; 
    for(i=0;i<n;i++){
        cin>>R[i];
    }
    //Sorting in Accending Order
    std::sort(R,R+n);
        printf("Ri \t(i/N)-Ri \tRi-(i-1)/N\n");
    for(i=0;i<n;i++){
        Dminus[i]=(float)(R[i]-(float)((float)i/n));
        Dplus[i]=(float)(((float)(i+1)/n)-R[i]);
        printf("%.2f \t%.2f \t\t%.2f\n",R[i],Dplus[i],Dminus[i]);
    }
    //for Max value
    for(i=0;i<n;i++){
        if(D<Dplus[i]){
            D=Dplus[i];
        }
        if(D<Dminus[i]){
            D=Dminus[i];
        }
    }
   // cout<<"The Max value of D is "<<D<<endl;
    if(critical>D){
        cout<<"The Distribution is Uniformly Distributed"<<endl;
    }
    else{
        cout<<"The Distribution is Not Uniformly Distributed"<<endl;
    }
    return 0;
}