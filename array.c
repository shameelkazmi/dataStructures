#include<stdio.h>

int * returnArray(){
  static int* myArray; 
  myArray = (int*)malloc(sizeof(int)*3);
  myArray[0]= 0;
  myArray[1]= 1;
  myArray[0]= 2;

  return myArray;
}

int main(){

  printf("Hello World\n");
  //Declaration by size and elements
  int a[3] = {0,1,2};

  //Declaration by size only and defining elements later
  int b[3];
  b[0]=2;

  //Declaration by elements
  int c[] = {1,2,3};

  //Testing and Printing
  printf("2nd element of a:%d\n",a[1]);
  printf("2nd element of b:%d\n",b[1]);
  printf("2nd element of c:%d\n",c[1]);
 
  //Returning an array from a function 
  int* myArray;
  myArray = returnArray();
  printf("returnArray[2]:%d\n",myArray[2]);
  
  //Arrays and Pointers
  int arr[] = {10, 20, 30, 40, 50, 60}; 
  // Assigns address of array to ptr 
  int *ptr = arr;   
  printf("Value of first element is %d\n", *ptr); 
  printf("Address of first element is %p\n", ptr); 
  printf("Value of 2nd element is %d\n", *ptr+1); //This doesn't work as the brackets are missing
  printf("Value of 2nd element is %d\n", *(ptr+1)); 
  printf("Address of 2nd element is %p\n", ptr+1);//Address increments by 4B 
  printf("Size of Integer:%d\n", sizeof(int)); 

  return 0;

}

