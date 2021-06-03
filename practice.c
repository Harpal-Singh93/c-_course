#include<stdio.h>
typedef struct student
{
    int weight;
    float height;

    
}stud;

int main()
{	
stud s1, *ptr;
ptr=&s1;
printf("enter the weight\n");
scanf("%d",&ptr->weight);

printf("enter the height\n");
scanf("%f",&ptr->height);
printf("the weight is %d and height is %f ",ptr->weight,(*ptr).height);


return 0 ;
}