
#include<stdio.h>
int main()
{
    int P,C,M,avg;
printf("Enter Physics Marks:");
scanf("%d",&P);
printf("Enter Chemistry Marks:");
scanf("%d",&C);
printf("Enter Maths Marks:");
scanf("%d",&M);
avg = P+C+M / 3;


(avg>=50)?printf("eligible for admisssion"):printf("not eligible for admission");
return 0;

}
