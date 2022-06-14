#include<stdio.h>
struct student 
{
int roll;
char name[40];
float percentage;
};
void main()
{
struct student s1;
printf("enter roll no,name and percenatage\n");
scanf("%d%s%f",&s1.roll,s1.name,&s1.percentage);
printf("entered name is:%s\n roll no:%d\n percentage:%f\n",s1.name,s1.roll,s1.percentage);
}


