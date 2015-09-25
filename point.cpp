#include<stdio.h>
#include<conio.h>
main()
{ int a;
printf("point:");
scanf("%d",&a);
if(a<=100 && a>=80)
printf("%d point = A",a);
else if(a<=79 && a>=75)
printf("%d point = B+",a);
else if(a<=74 && a>=70)
printf("%d point = B",a);
else if(a<=69 && a>=65)
printf("%d point = C+",a);
else if(a<=64 && a>=60)
printf("%d point = C",a);
else if(a<=59 && a>=55)
printf("%d point = D+",a);
else if(a<=54 && a>=50)
printf("%d point = D",a);
else if(a<=49)
printf("%d point = F",a);
else
printf("Error!!");
getch();
return 0;
}
