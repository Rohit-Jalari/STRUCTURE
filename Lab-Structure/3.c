#include<stdio.h>
int main(){
    int value;
printf("Enter 1 for rectangle.\nEnter 2 for square.\nEnter 3 for circle. \n");
scanf("%d",&value);


if (value==1){
struct coordinate
       {
            int x;
            int y;
       };

struct rectangle_t{
       struct coordinate p1;
       struct coordinate p2;
       struct coordinate p3;
       struct coordinate p4;
};
struct rectangle_t A={{0,0},{100,75},{-60,80},{95,90}};


    printf("The coordinate of the rectangle are A(%d,%d)\tB(%d,%d)\tC(%d,%d)\tD(%d,%d)"
           ,A.p1.x,A.p1.y,A.p2.x,A.p2.y,A.p3.x,A.p3.y,A.p4.x,A.p4.y);
}


else if(value==2){
        struct coordinate
       {
            int x;
            int y;
       };

struct square_t{
       struct coordinate p1;
       struct coordinate p2;
       struct coordinate p3;
       struct coordinate p4;
};

struct square_t A={{0,0},{100,75},{-60,80},{96,87}};


    printf("The coordinate of the square1 are A(%d,%d)\tB(%d,%d)\tC(%d,%d)\tD(%d,%d)"
           ,A.p1.x,A.p1.y,A.p2.x,A.p2.y,A.p3.x,A.p3.y,A.p4.x,A.p4.y);
}
else if(value==3)
{struct coordinate
       {
            int x;
            int y;
       };
struct circle_t{
       struct coordinate p1;
       int radius;

};
struct circle_t A;
printf("Enter the centre of the circle :");
scanf("%d %d",&A.p1.x,&A.p1.y);
printf("Enter the radius of the circle :");
scanf("%d",&A.radius);
printf("The centre of the given circle is (%d,%d) and its radius is %d",A.p1.x,A.p1.y,A.radius);
}
}


