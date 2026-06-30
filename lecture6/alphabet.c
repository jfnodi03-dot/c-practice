#include <stdio.h>

int main() {
   
char alphabet='A' ;
char *ptr = &alphabet;
printf("enter the alphabet:");
for (int i=0; i<26;i++){
    printf("%c", *ptr);
    (*ptr)++;
}
     printf ("\n");
return 0;

}
