#include<stdio.h>
int main ()
{
 int quantity;
 char type_food;
 char menu;
 int total_charges1,total_charges2,total_charges3,total_charges4;
 int Burger=200;
 int French_fries = 50;
 int Pizza = 500;
 int Sandwich= 150;
  printf("Our menu is : \n1 B=Burger\n2 F=French Fries\n3 P=Pizza \n4 S=Sandwich");
 printf("\n What do you want to eat : ");
 scanf("%c",&type_food);
 printf("\n Enter Quantity : ");
 scanf("%d",&quantity);


 
 switch(type_food)	
	
	{
	 case 'B' :
	 total_charges1=quantity*Burger;	
	 printf("\n Your total charges is %d",total_charges1);
	 break;
	 
	 case 'F' :
	 total_charges2=quantity*French_fries;
	 printf("\n Your total charges is %d",total_charges2);
	 break;
	 
	 case 'P':
	total_charges3=quantity*Pizza;
	 printf("\n Your total charges is %d",total_charges3);
	 break;
	 
	 case 'S' :
	 total_charges4=quantity*Sandwich;
	 printf("\n Your total charges is %d",total_charges4);
	 break;	
		
	default:
	printf("You have entered which you have not given input");	
		
}
		
		
	return 0;
	
	
}
	

