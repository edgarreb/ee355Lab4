#include<iostream>
 
using namespace std;
 
long int factorial(int n);
 
int main()
{
    int n;
    cout<<"Please enter n:"<<endl;
    cin>>n;
    long int val=factorial(n);
    cout<<"n factorial is: "<<val<<endl;

    return 0;
}
 
long int factorial(int n)
{
    
    if(n) 
        return  factorial(n--)*n;	
    else return 1;
    
    
}
