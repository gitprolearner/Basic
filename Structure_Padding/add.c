#include<stdio.h>
int add(int ,int);//function prototype pass by value
int add1(int*,int*);//function prototype pass by reference
struct addition//structure with two numbers.
{
    int n1,n2;
};
main()
{

    int sum,sum1;//two variables.
    struct addition A;//A is variable of structure type.
    //entering structure data
    printf("enter number 1\n");
    scanf("%d",&A.n1);
    printf("enter number 2\n");
    scanf("%d",&A.n2);
    sum=add(A.n1,A.n2);//function call (call by value)
    printf("call by value answer=%d\n",sum);
    sum1=add1(&A.n1,&A.n2);//function call (call by reference)
    printf("call by reference answer=%d\n",sum1);
}

int add(int a,int b)//function definition  (call by value)
{

    return a+b;//return addition of two numbers.
}
int add1(int*a,int*b)// function definition (call by reference)
{

    return (*a + *b);//return addition of two numbers.
}
 printf("End of Program\n");
  printf("End of Program\n");
   printf("End of Program\n");