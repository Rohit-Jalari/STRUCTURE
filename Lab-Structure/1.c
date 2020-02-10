#include<stdio.h>
#include<math.h>

struct coordinate{
       int x;
       int y;
};

float euclidean_distance(struct coordinate a,struct coordinate b)
{
    float distance;
    distance=sqrt((b.x-a.x)*((b.x-a.x))+(b.y-a.y)*(b.y-a.y));
    return distance;

}

int main()
{
    struct coordinate p1={3,5};
    struct coordinate p2={4,6};

    printf("The distance between [%d,%d] and [%d,%d] is %f.\n",p1.x,p1.y,p2.x,p2.y,euclidean_distance(p1,p2));
}





