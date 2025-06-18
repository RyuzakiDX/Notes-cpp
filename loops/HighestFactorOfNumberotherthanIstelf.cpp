#include<iostream>
int main(){
    int n;
    std::cout<<"Enter the number : ";
    std::cin>>n;

    int a = 1;

    for(int i = 1; i< n; i++){
        if(n%i == 0){
            a = i;
        }
    }
    std::cout<<a<<" is the higest factor other than itself";
}