#include<stdio.h>

struct coordinate
       {
            int x;
            int y;
       };
struct triangle_t{

       struct coordinate p1;
       struct coordinate p2;
       struct coordinate p3;

};

int main()
{
    struct triangle_t A={{0,0},{100,75},{-60,80}};


    printf("The coordinate of the triangle are A(%d,%d)\tB(%d,%d)\tC(%d,%d)",A.p1.x,A.p1.y,A.p2.x,A.p2.y,A.p3.x,A.p3.y);
}
