
#include<stdio.h>
int main()
{
char name[50];
int age;
char adders[100];
long long mobilenumber;
printf("Enter your name:");
scanf("%s",name);
printf("Enter your age:");
scanf("%d",&age);
printf("Enter your adders:");
scanf("%s",&adders);
printf("Enter your mobile number:");
scanf("%lld",&mobilenumber);
printf("\nPersonal details:\n");
printf("Name:%s\n",name);
printf("Age:%d\n",age);
printf("adders:%s\n",adders);

printf("Mobile number:%lld\n",mobilenumber);
return 0;
}









