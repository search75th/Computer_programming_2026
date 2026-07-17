#include<stdio.h>
int main()

{
  
  int ID;
  float PRO;
  float PHY;
  float CAL;
  float GPA;
  char name[20];
  char EDU[50];

  printf("Enter your name : ");
  scanf("%s",name);
  printf("Enter your student id : ");
  scanf("%d", & ID);
  printf("Enter your Programming score : ");
  scanf("%f", &PRO);
  printf("Enter your Physics score : ");
  scanf("%f", &PHY);
  printf("Enter your Calculus score: ");
  scanf(" %f", &CAL);

  GPA = (PRO + PHY + CAL) / 3 ;

  printf("HI %s (%d)! Your GPA is %.2f\n"  , name , ID , GPA  );
  

  return 0;
}
