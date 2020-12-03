#include <stdio.h>

int main(void) {


  int first_num, second_num,third_num;

  printf("Enter first Number ");


  scanf("%d",&first_num);
  printf("Enter second Number ");
  scanf("%d",&second_num);
  printf("Enter third Number ");
  scanf("%d",&third_num);

  if(first_num>second_num){
    if(first_num>third_num){
      printf("%d",first_num);
      printf(" first num is greatest");
    } else {
      printf("%d",third_num);
      printf(" - third num is greatest");
    }
  } else if(second_num>first_num) {
      if(second_num>third_num){
        printf("%d",second_num);
        printf(" - second num is greatest");
      } else{
        printf("%d",third_num);
        printf(" - third num is greatest");
      }
  }





  return 0;

}
