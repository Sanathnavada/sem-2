/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()

{
  int array[100], n, i=0, j, swap;

  printf("Enter number of elements :\n");
  scanf("%d",&n);

  printf("Enter the array elements :\n");

  for (i = 0; i < n ; i++)
    scanf("%d", &array[i]); 

  printf("The original elements are \n");
   
    for (i = 0; i < n ; i++)
    printf("%d\t",array[i]); 

  
  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("\nSorted list :\n");

  for (i = 0; i < n; i++)
     printf("%d\t", array[i]);

  return 0;
}

