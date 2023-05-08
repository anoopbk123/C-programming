#include<stdio.h>
void check();
int main(){
check();
return 0;

}
void check(){
int n;
printf("\nenter a even number");
scanf("%d",&n);
if(n%2==0){
    printf("\nyour input is correct");
}
else{
    printf("\nyour input is incorrect enter a valid input");
    check();
}
}
