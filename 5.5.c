

#include <stdio.h>

int main(){
int n;
printf("enter the value");
scanf("%d,&n");

if(n<=200){
    printf("bill=%d/n",50+n*2);
}
else if (n>200&&n<=300){
    printf("bill=%d/n",50+200*2+(n-200)*4);
}
else if (n>300 &&n<=400){
    printf("bill=%d/n",50+200*2+100*4+(n-300)*5);
}
else if (n>400){
    printf("bill=%d/n",(n*10)/100+50+200*2+100*4+100*58+(n-400)*7);
}
return 0;
}
