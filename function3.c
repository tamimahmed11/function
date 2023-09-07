#include<stdio.h>
int Name()
 //int Name (int n) 
 //int Name (int start, int end)
{
    int i;
    //for(i=start;i<=end;i++)
    for(i=1;i<=100;i++) // (i=1;i<=n;i++)
    {
        printf("%d) Tamim Ahmed\n",i);
    }
    return 0;
}
int main ()
{
    Name(); 
  // Name (5);
  //Name(10,16)
    return 0;
}