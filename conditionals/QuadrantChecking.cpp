#include<iostream>
using namespace std;

int main(){
    cout<<"Enter X coordinate of point :";
    float x;
    cin>>x;

    cout<<"Enter Y coordinate of point :";
    float y;
    cin>>y;

    if(x>0 and y>0){
        cout<<"First quadrant";    
    }

    else if(x>0 and  y<0){
        cout<<"Fourth quadrant";
    }

    else if(x<0 and y>0){
        cout<<"Second quadrant";
    }

    else if(x<0  and y<0){
        cout<<"Third quadrant";
    }
    
    else if(x == 0 and y == 0){
        cout<<"Origin";
    }

}
