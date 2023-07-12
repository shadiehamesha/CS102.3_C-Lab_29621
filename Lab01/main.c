#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n1 ,n4,n5,total ,byear,age ,n8,n9;
    float n2 ,n6,n7,avg;
    double n3;
    char character ,stdname[20];




    printf("Shadie Hamesha\nYasodara Devi Balika Vidyalaya\n");

    printf("*\n**\n***\n****\n*****\n");



    printf("enter a number");
    scanf("%d",&n1);
    printf("enter a number");
    scanf("%f",&n2);
    printf("enter a number");
    scanf("%If",&n3);
    printf("enter a character");
    scanf("%s",&character);


    printf("enter a number");
    scanf("%d",&n4);
    printf("enter a number");
    scanf("%d",&n5);
    total=n4+n5;
    printf("total is %d\n",total);


    printf("enter a number");
    scanf("%f",&n6);
    printf("enter a number");
    scanf("%f",&n7);
    avg=(n6+n7)/2;
    printf("avg is %2f\n",avg);

    printf("enter the student name");
    scanf("%s",&stdname);
    printf("enter the birthyear");
    scanf("%d",&byear);
    age=2023-byear;
    printf("age is %d\n",age);

    printf("enter 1st number");
    scanf("%d",&n8);
    printf("enter 2nd number");
    scanf("%d",&n9);
    printf("the value before swap is %d %d\n",n8,n9);
    printf("the value after swap is %d %d",n9,n8);





    return 0;
}
