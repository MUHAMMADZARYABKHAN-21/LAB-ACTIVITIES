#include<iostream>
using namespace std;


class circle{
    public:
    int radius;
    
    circle(int r){
        radius=r;

    }
}
;

void display(circle c){
    cout<<"the radius of the circle is "<<c.radius<<endl;

}

int main(){
    circle c(13);
    double x=12.34;
    display(c);
}