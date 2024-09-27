#include<iostream>
using namespace std;
int main(){
    int DATA[]={2,4,7,4,1,9,5,3,7,5,2};
    int N=sizeof(DATA)/sizeof(DATA[0]);
    int k=0,LOC=0,MAX=DATA[0];
    while(k<N){
        if(MAX<DATA[k]){
            LOC=k;
            MAX=DATA[k];

        }
        k=k+1;
        
        
    }
    cout<<"LOCATION ="<<LOC<<endl<<"MAXMUM="<<MAX<<endl;
    return 0;
}