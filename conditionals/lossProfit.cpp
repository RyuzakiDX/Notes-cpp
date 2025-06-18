#include<iostream>
using namespace std;

int main(){
    cout<<"What is the making cost of the product : ";
    float make;
    cin>>make;

    cout<<"What is the selling price of the product : ";
    float sell;
    cin>>sell;

    float diff = sell - make;

    if(diff>0){
        cout<<"Congrats!! you make a profit of "<<diff<<endl;
        float pp = (diff/make)*100;
        cout<<"Your percentage profit is "<<pp;
    }

    if(diff<0){
        cout<<"You make a loss of "<<-diff<<endl;
        cout<<"your percentage loss is "<<(-diff/make)*100; 
    }

    if(diff == 0){
        cout<<"you make no profit no loss"; 
    }

}