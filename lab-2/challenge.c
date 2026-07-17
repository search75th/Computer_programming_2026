#include<stdio.h>
int main()

{
  int num1;
  int num2;
  int num3;
  int MIN;
  int MAX;
  int SUM;
  float AVG;


  printf("Enter integer #1 ");
  scanf("%d", &num1);

  printf("Enter integer #2 ");
  scanf("%d", &num2);

  printf("Enter integer #3 ");
  scanf("%d", &num3);

  MIN = num1;
      if (num2 < MIN)
     MIN = num2;
      if (num3 < MIN)
     MIN = num3;

 MAX = num1;
      if (num2 > MAX)
      MAX = num2;
      if (num3 > MAX)
      MAX = num3;

 SUM = (num1 + num2 + num3 );
    AVG = SUM / 3.00;

    printf("\nResults : \n");
    printf("Minimum : %d\n", MIN);
    printf("Maximum : %d\n", MAX);
    printf("SUM : %d\n" , SUM);
    printf("Average : %.2f\n", AVG);

  
  return 0;
}
