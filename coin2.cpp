#include <stdio.h>
int main()
{
 int x , y = 10 , z = 5 , ten , five , coin;
 printf("How many coin:");
 scanf("%d",&x);
 ten = x/y;
 five = x%y/z;
 coin = x%y%z;
 printf("ten is %d coin\n",ten);
 printf("five is %d coin\n",five);
 printf("coin is %d coin\n",coin);
 return 0;
}
