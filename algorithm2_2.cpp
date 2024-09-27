#include<iostream>
#include<math.h>

using namespace std;
int main(){

    int a,b,c,d;
    cin>>a>>b>>c;
    
    d=b*b-4*a*c;
    if(d>0){
        int x1=(-b+sqrt(d))/2*a;
        int x2=(-b-sqrt(d))/2*a;
        cout<<"x1 is ="<<x1<<endl<<"x2 is ="<<x2<<endl;
    }
    else if (d==0){
        int x=-b/2*a;
        cout<<"unique solution = "<<x<<endl;
    }
    else{
       cout<<"No real solution"<<endl;
    }

    

    return 0;
}