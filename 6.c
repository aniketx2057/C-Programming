
 #include <stdio.h>

int main(){

int a,b,c;
printf("Enter the sides of triangle:");
scanf("%d%d%d",&a,&b,&c);


if(a==b && b==c){
        printf("equilateral Triangle");
        }
else if (a==b||b==c||a==c)
{
printf("isosceles triangle");
}else{
printf("scalar triangle");
}

}
