#include <stdio.h>

int main(){
  int i;
  int count = 0;

  for(i = 0; i < 1000; i++){
    if (i % 3 == 0 ||
	i % 5 == 0){
      count += 1;
    }
   }

  printf("Sum of multiples of 3 and 5 below 1000: %d\n", count);
}
