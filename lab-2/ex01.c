#include<stdio.h>
int main()

{
  int integer;
  float floats;
  char character;
  printf("Enter your integer value : ");
  scanf("%d", &integer);
  printf("you entered : %d\n" , integer);
  printf("Enter your float value : ");
  scanf("%f", &floats);
  printf("you entered : %.1f\n" , floats);
  printf("Enter your a character : ");
  scanf(" %c", &character);
  printf("you entered : %c\n" , character);

  return 0;
}
