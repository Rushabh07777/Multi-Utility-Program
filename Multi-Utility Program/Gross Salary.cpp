#include<stdio.h>
int main(){
   int Base_Salary;	
   int DA;
   int HRA;
   int TA;
   int sum;
   printf("Create a program that calculates the gross salary by adding percentages of HRA, DA, and TA tothe base salary as chosen by the user.\n");
   printf("\nBase_Salary : ");
   scanf("%d",&Base_Salary);
   printf("HRA : ");
   scanf("%d",&HRA);
   printf("DA : ");
   scanf("%d",&DA);
   printf("TA : ");
   scanf("%d",&TA);
   HRA=(Base_Salary*HRA)/100;
   DA=(Base_Salary*DA)/100;
   TA=(Base_Salary*TA)/100;
   sum=Base_Salary+HRA+DA+TA;
   printf("Gross Salary : %d",sum);
}