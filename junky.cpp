#include <iostream>

int main()
{
int val,val1;
std::cout<<"enter two numbers ";
std::cin>>val>>val1;


    while(val1<val)
    {
        std::cout<<val1<<" ";
        val1++;
    }


     while(val1>=val )
    {
        std::cout<<val<<" ";
        val++;
    }


return 0;
}