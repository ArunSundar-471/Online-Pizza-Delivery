#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

void print (struct point a[])
{
    int i;
    for(i=0;i<2;i++)
    printf("%d %d\n",a[i].x,a[i].y);
}

int main()
{
 struct point a[2]={{23,45},{67,89}};
printf(a);
 return 0;
}