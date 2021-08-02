#include<iostream>
using namespace std;
int main(){
    int i=65;
    char c=i;
    cout<<c<<endl;  ///A

    int * p=&i;
    char *pc =(char*)p;

    cout<<p<<endl;  /// Address 
    cout<<pc<<endl; /// char array till null charac

    cout<<*p<<endl;         ///65
    cout<<*pc<<endl;        ///A
    cout<<*(pc+1)<<endl;    ///null
    cout<<*(pc+2)<<endl;    /// null
    cout<<*(pc+3)<<endl;    ///null
    
}