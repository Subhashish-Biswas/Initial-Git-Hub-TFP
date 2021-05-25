//Program to enter a positive integer and find whether a number is prime.
//Subhashish Biswas 08 CSE
#include<stdio.h>
int main(){
    printf("Enter a positive number\n");
    int a;
    int count=0;

    scanf("%d",&a);
        for(int j=1;j<=a;j++){
            if(a%j==0)
            count++;}
            if(count==2)
                printf("The number is prime.\n");
            else
                printf("The number is not prime.\n");       
printf("Learning git");
   return 0;
    }
       


