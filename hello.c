#include <stdio.h>
#include <conio.h>
void main(){
    //clrscr();
    int num;
    printf("Enter num : ");
    scanf("%d",&num);

    if(num%2 == 0)
        printf("\n %d is an Even number",num);
    else
        printf("\n %d is an Odd number",num);
    
}