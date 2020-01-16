#include<stdio.h>

int main(){

  printf("Hello World\n");
  
  //1st way of declaration
  int a = 10;
  int* p = &a;
  printf("Value of p:%d\n",*p);
  printf("Address of p:%p\n",p);

  //2nd way of declaration
  int b = 20;
  int* p1;
  p1 = &b;
  printf("Value of p:%d\n",*p1);
  printf("Address of p:%p\n",p1);

  //Dereferencing a pointer
  int c = *p;
  printf("Value of c:%d\n",c);

  //Advancing a pointer
  printf("Address of p+1:%p\n",p+1);//Address advances by 4B

  return 0;
}
