#include<stdio.h>
int main()

{
  int age;
  float height;
  char Uname[50];
  char name[50];
  char lastname[50];

  printf("Enter your full name: ");
  scanf("%s %s", name, lastname);
  printf("Enter your age : ");
  scanf("%d", &age);
  printf("Enter your height : ");
  scanf("%f", &height);
  printf("Enter your University name : ");
  scanf(" %[^\n]", Uname);

  printf("\nHi! Everyone. this is %s %c. from %s. I am %d years old Adn my height is %.1f tall \n; " , name , lastname[0], Uname , age , height );

  return 0;
}