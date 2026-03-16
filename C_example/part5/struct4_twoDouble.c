#include <stdio.h>

typedef struct
{
    double left;
    double right;
} vision;

void exchange(vision *robot);

int main(void)
{
    vision robot;     // 변수 메모리공간

    printf ("시력 입력: ");
    scanf("%lf %lf",&(robot.left), &(robot.right));
    exchange(&robot);
    printf("바뀐 시력: %.1lf %.1lf\n", robot.left, robot.right);
    return 0;
}

void exchange(vision *robot)  // vision robot = robot 메모리공간
{
    double temp;
    temp = (*robot).left;
    (*robot).left = (*robot).right;
    (*robot).right = temp;

}