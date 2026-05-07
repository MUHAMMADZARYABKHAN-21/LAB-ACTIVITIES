#include<iostream>
using namespace std;
template<typename T>
int compare(T a,T b){
    if(a>b){
        return 1;
    }
    else if(a<b){
        return -1;

    }
    else{
        return 0;}
    }
    
    int main(){
       cout<< compare(1345,5) << endl;
        cout<< compare(3.14,2.71) << endl;
        return 0;
        
    }