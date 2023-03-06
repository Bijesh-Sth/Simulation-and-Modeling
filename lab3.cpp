//Drunkard Problem
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    float a;
    int x=0,y=0;
    srand(time(0));
    cout<<"Step \tDirection \tX-Axis \tY-Axis \t(x,y)\n";
   for(int i=0;i<10;i++){
    a=(float)(rand()%100)/100;
   cout<<i+1<<" \t";
    if(a<0.25){
        x++;
        cout<<"Right \t";
    }
    else if(a<0.5){
        y++;
        cout<<"Up \t";
    }
    else if(a<0.75){
        x--;
        cout<<"Left \t";
    }
    else{
        y--;
        cout<<"Down \t";
    }
    printf("\t%d \t%d \t",x,y);
    printf("(%d, %d)\n",x,y);
   }
   printf("\nThe final Position is (%d, %d)\n",x,y);
}
