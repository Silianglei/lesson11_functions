#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int avg(int *arrayints);
int main(){
  srand( time(NULL) );
  int arraysize = 10;
  int ray[arraysize];
  int *pointer = ray;
  int slider;
  for(slider=0; slider<arraysize; slider++){
    ray[slider]=rand();
  }
  ray[0]
  ray[1]
  ray[2]
  ray[3]
  ray[4]
  ray[5]
  ray[6]
  ray[7]
  ray[8]
  ray[9]
  for(slider = 0; slider < arraysize; slider++){
    printf("%d\n", ray[slider]);
  }
  printf("Average of array: %d", avg(pointer));
  return 0;
}
