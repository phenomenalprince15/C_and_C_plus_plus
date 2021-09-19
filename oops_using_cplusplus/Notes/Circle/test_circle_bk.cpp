#include "circle.h"
#include <iostream>
#include "assert.h"
int main()
{
    circle c1;
    
    if(1.1 == c1.get_radius())
        std::cout<<"it is working";


    assert(1.1 == c1.get_radius());
    std::cout<<"it is working";

    return 0;
}