#include <iostream>
#include <cmath>
int main(){
    std::cout<<"Enter the value n :";
    int n;
    std::cin>>n;
    
    float r;
    std::cout<<"Enter common ratio : ";
    std::cin>>r;
    
    float a;
    std::cout<<"Enter first term of GP";
    std::cin>>a;
    
    for(int i = 0; i < n; i++){
        std::cout<<a*pow(r,i)<<std::endl;
    }

}