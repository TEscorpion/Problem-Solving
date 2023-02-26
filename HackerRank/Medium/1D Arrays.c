#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void ReadArray(int *p, int size)
{
  for(int i=0; i<size; i++)
  {
    scanf("%d", &p[i]);
  }
}

int sum(int *p, int size)
{
  int sum=0;
  
  for(int i=0; i<size; i++)
  {
    sum += p[i];
  }
  
  return sum; 
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    
    scanf("%d", &size);
    
    int *p = (int*)malloc(size*sizeof(int)); 
    
    ReadArray(p, size);
    
    printf("%d\n", sum(p,size)); 
       
    return 0;
}
