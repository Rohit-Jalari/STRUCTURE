#include <stdio.h>
#define N 4
struct student{
char name[20];
int eng;
int math;
int phys;
};
static struct student data[]={
{"Ram", 82, 72, 58},
{"Hari", 77, 82, 79},
{"Ashesh", 52, 62, 39},
{"Aayush", 61, 82, 88}
};
int main(void)
{
int i;
for(i=0; i<N; i++){
printf("%7s: Eng = %3d Math = %3d Phys = %3d\n",
data[i].name, data[i].eng, data[i].math, data[i].phys);
}
return(0);

}
