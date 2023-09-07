#include<stdio.h>
void swap(int *p, int *q)   // definition
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("p= %d q=%d\n",*p,*q);
}
int main ()
{
    int a=50, b=200;
    swap(&a,&b);
    printf("a=%d b=%d",a,b); // calling 
    return 0;
}