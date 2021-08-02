#include <iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void incrementPointer(int* p){
    p=p+1;
}
void incrementPointer1(int* p){
    (*p)++;
}

int main(){
    int i=10;
    int *p=&i;

    print(p);
    cout<<p<<endl;
    incrementPointer(p);///no effect
    cout<<p<<endl;

    cout<<*p<<endl;
    incrementPointer1(p);///no effect
    cout<<*p<<endl;

    return 0;
}