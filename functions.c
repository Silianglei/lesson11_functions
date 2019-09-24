#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int avg(int *arrayints){
  int slider;
  int sum = 0;
  for(slider=0; slider< 10; slider++){
    sum+=arrayints[slider];
  }
  return sum/(sizeof(arrayints)/sizeof(int));
}
