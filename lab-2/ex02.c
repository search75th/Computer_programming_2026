#include<stdio.h>
int main()

{
  int time;
  int hour;
  int minutes;

  printf("Enter total minutes : ");
  scanf("%d", &time);

  hour = time / 60;
  minutes = time % 60;

  printf(" %d mintues is %d hour and %d minutes \n" , time , hour , minutes);

  
  return 0;
}
