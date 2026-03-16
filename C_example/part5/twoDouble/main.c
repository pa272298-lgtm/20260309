#include "twoDouble.h"

int main(void)
{
    vision robot;    

    printf ("시력 입력: ");
    scanf("%lf %lf",&(robot.left), &(robot.right));
    exchange(&robot);
    printf("바뀐 시력: %.1lf %.1lf\n", robot.left, robot.right);
    return 0;
}