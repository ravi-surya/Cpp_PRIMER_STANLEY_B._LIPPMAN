#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item,item1;
 
    if(std::cin>>item)//input the first Sales_item object
    {
        int count =1;// have counter initialized to 1
        while(std::cin>>item1)//input the second Sales_item object
        {
            if(item.isbn()== item1.isbn())
            //check if the isbn for both are matching,if yes increament the count and add the two objects
            {
                count++;
                item+=item1;

            }
            else{
            //else     
                std::cout<<item.isbn()<<" is the isbn and the number of transaction for this isbn is "<< count<<std::endl;
                std::cout<<item<<std::endl;
                item = item1;
                count=1;
            }
        }
    }   
return 0;

}