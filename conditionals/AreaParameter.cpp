#include <iostream>
using namespace std;

int main(){
    cout<<"Choose the figure : 1)Rectangle 2)Triangle 3)Sphere : ";
    int f;
    cin>>f;

    if(f == 1){
        cout<<"Enter lenth of rectangle : ";
        int a;
        cin>>a;
        cout<<"Enter breath of rectangle : ";
        int b;
        cin>>b;

        int A = a*b;
        cout<<"Area of the rectangle is : "<<A<<endl;
        
        int p = 2*(a+b);
        cout<<"Parimeter of rectangle is : "<<p;

    }

    else if(f == 2){
        cout<<"Enter height of rectangle : ";
        float a;
        cin>>a;
        cout<<"Enter base of rectangle : ";
        float b;
        cin>>b;

        float A = 0.5*(a*b);
        cout<<"Area of the rectangle is : "<<A<<endl;
        
    }


}