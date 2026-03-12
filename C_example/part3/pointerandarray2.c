#include <stdio.h>

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    int *p;

    p = nums;
    p = p;     // <- 없어도 OK
    *(p + 1) = *(p + 2);
    (p) = (p + 1); // <- (p)에 괄호 없어도 OK
    for (int i = 0; i < 5;++i){
        printf("nums[%d] : %d\t", i, nums[i]);
        printf("*(p+%d) : %d\t", i, *(p + 1));
        printf("*(nums+%d): %d\t", i, *(nums+i));
        printf("p[%d]: %d\n", i, p[i]);
    }
    for (int i = 0; i < 5;++i)
    {
        printf("nums : %p\t", nums);
        printf("*(p+%d) : %p\t", i, (p + 1));
        printf("*(nums+%d): %p\t", i, (nums+i));
        printf("p[%d]: %p\n", i, &p[i]);
    }
    return 0;
}