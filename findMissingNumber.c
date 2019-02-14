#include <stdio.h>

int main(void) {

  // Calculate the sum of n number = n*(n+1)/2;

  // substarct the each elements in the array 
  //we will have the missing number.
  
  int a[] = {1,2,4,5,6};
  printf("size of a %ld \n",sizeof(a)/sizeof(int));
  int n=5;
  /*
  int res = (n)*(n+1)/2;

  printf("Hello World %d \n", res);

  for(int i=0;i<n-1;i++)
  {
    res = res - a[i];
    printf("Hello World %d %d\n", res,i);
  }
  
  */
  // xor all the array number
  // xor all the number from 1 to number
  int x1 = a[0];
  int x2 = 1;
  for (int i=1;i<n;i++)
  {
      x1 = x1 ^ a[i];
  }

  for (int i =2;i<=n+1;i++)
  {
    x2 = x2 ^ i;
  }

  printf("Hello World %d \n", x1^x2);
  return 0;
  
}
