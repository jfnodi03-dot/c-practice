#include<stdio.h>

int main (){
int num1, num2,max;
int *ptr1 , *ptr2 ;

printf ("enter the number:");
scanf ("%d  %d", &num1 , &num2);

ptr1 = &num1;
ptr2 = &num2;
if(*ptr1 >*ptr2 ){
    max= *ptr1;
} else {max= *ptr2;
}
printf("maximun num is : %d\n", max);
return 0;

}
