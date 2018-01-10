#include <stdlib.h>
#include <stdio.h>


int inspect_bits(unsigned int number){
  int count = 0;

  while (number) {
    number = (number & (number << 1));
    count++;
  }

  if(count>1){
      return 1;
  }else{
      return 0;
  }
  
}


int main ()
{
    printf("%d", inspect_bits(13));
}
