#include<stdio.h>
int main()

{
  int age;
  float height;
  char name[50];
  char Uname[50];

  printf("Enter your full name : ");
  scanf("%[^\n]",name);
  printf("Enter your age : ");
  scanf("%d", &age);
  printf("Enter your height : ");
  scanf("%f", &height);
  printf("Enter your University name : ");
  scanf(" %[^\n]", Uname);

  printf("Hi! Everyone. this is %s from %s. I am %d years old Adn my height is %.1f tall \n; " , name , Uname , age , height );

  return 0;
}
