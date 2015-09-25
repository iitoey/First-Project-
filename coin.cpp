#include<stdio.h>
#include<conio.h>
main()
{ 	int x , y = 10 , z = 5;
	int ten , five , coin;
	printf("How many coin:");
	scanf("%d",&x);
	ten = x/y;
	five = x%y/z;
	coin = x%y%z;
	printf("ten is %d coin\n",ten);
	printf("five is %d coin\n",five);
	printf("coin is %d coin\n",coin);
	getch();
	return 0;
}
