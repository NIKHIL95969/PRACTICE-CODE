#include <stdio.h>
//#include <conio.h>

int main(){
 int n , d;
 scanf("%d", &n);
 d= n/2;
 if(n==d*2)
 {
     printf("Even");
 }
 else{
     printf("odd");
 }

 return 0;
 }