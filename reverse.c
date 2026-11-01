#include<stdio.h>
int main()
{
int n,digit,revnum=0;
scanf("%d",&n);
for( ; n>0;){
    digit = n%10;
   revnum = revnum *10 + digit;
   n= n/10;
   }
   printf("%d",revnum);


return 0;
}
