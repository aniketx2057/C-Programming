#include <stdio.h>
int main(){
int a,b,c;
printf("Enter tyhe number: ");
scanf("%d",&a);
b=1;
while(b<=10){
c=a*b;
printf("%d",c);
b=b+1;
}
return 0;
}
