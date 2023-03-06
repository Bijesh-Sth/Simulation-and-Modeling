#include <iostream>
#include<cstdlib>
#include <ctime>
using namespace std;
int main(){
    float a[20],b[20],c[20],pi=0;
    int i,m=0;
    srand(time(0));
    for(i=0;i<20;i++){
        a[i]=(rand()%10);
        b[i]=(rand()%10);
    }
    printf("S.no \t\tx \t\ty \t\tm \n");
    for(i=0;i<20;i++){
        printf("%f\t ",a[i]);
        printf("%f\t ",b[i]);
        c[i]=(a[i]*a[i]+b[i]*b[i]);
        printf("%f\t ",c[i]);
        
        if(c[i]<=100){
            m++;
        }
        printf("%d",m);
printf("\n");
        pi=((float)4*m/(float)20);
    }
    printf("\n The value of pi is %f",pi);
}

