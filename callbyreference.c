// call by value 
#include<stdio.h>
int swap(int x, int y)
{
      int temp;
      temp=x;
      x=y;
      y=temp;
      printf("x=%d y=%d\n",x,y);
      return 0;
}
int main ()
{
    int a=10, b=20;
    swap(a,b);
    printf("a=%d b=%d",a,b);
    return 0;
}