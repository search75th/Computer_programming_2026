#include<stdio.h>
int main()

{
  int age;
  float height;
  float weight;
  char gender;
  char name[20];
  char EDU[50];

  printf("Enter your name : ");
  scanf("%s",name);
  printf("Enter your age : ");
  scanf("%d", & age);
  printf("Enter your height : ");
  scanf("%f", &height);
  printf("Enter your weight : ");
  scanf("%f", &weight);
  printf("Enter your gender: ");
  scanf(" %c", &gender);
  printf("Enter your Education Qualification : ");
  scanf(" %[^\n]", EDU);
  
  printf("Name : %s\n age : %d\n gender : %c\n height : %.1f\n weight : %.1f\n Education %s\n]" 
    , name , age , gender , height , weight , EDU);
  

  return 0;
}
