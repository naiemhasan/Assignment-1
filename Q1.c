#include<stdio.h>

int main(){
    char input[5000];
    printf("Enter a number: ");
    scanf("%s\n",input);
    int i=0;
    int c1=0,c2=0;
    while(input[i]!='\0'){
        if(input[i]=='.'){
            c1++;
            if(input[i+1]!='\0'){
            c2=1;
            }
        }
        i++;
    }
    if(c1==1 && c2==1){
    printf("valid\n");
    }
    else{
    printf("invalid\n");
    }
}
