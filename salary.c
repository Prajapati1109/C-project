#include<stdio.h>

 int main(){
 	
 	 int GS,BS,HRA,DA,TA;
 	 
// 	 input base salary
 	 printf("Enter the Base salary:");
 	 scanf("%d",&BS);
 	 
// 	 input of alloweances
 	 printf("Enter the HRA:");
 	 scanf("%d",&HRA);
     printf("Enter the DA:");
     scanf("%d",&DA);
     printf("Enter the TA:");
     scanf("%d",&TA);
//      logic
     GS=BS+HRA+DA+TA;
     
//     output of gross salary
    printf("Gross Salary=%d",GS);
 }
