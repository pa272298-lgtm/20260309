#include "twoDouble.h"

void exchange(vision *robot)  
{
    double temp;
    temp = (*robot).left;
    (*robot).left = (*robot).right;
    (*robot).right = temp;

}