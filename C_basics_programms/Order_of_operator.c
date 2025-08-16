#include <stdio.h>
int main()
{
  int a=4;
  //if the evaluation order of compier is left to right then 4 5 5 will print 
  // and right to left then to 6 6 4
  // a++ will print 4 and make 4 to 5  
  // ++a will make 5 to 6 and will print  
  // now a will print 6  
  printf("%d %d %d\n",a,++a,a++);
  return 0;
}