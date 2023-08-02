
#include <stdio.h>

int main(void){

    print("Hello World");

    int counter = 0;
    int x =1;
    int y = 4;

    if(x < y)
        printf("x is less than y\n");
    else if(x > y)
        printf("x is greater than y")
    else
        printf("x is equal to y\n");

    while(counter <=10){
        printf("%d",counter);
        counter++;
    }
    
    for(int i = 0; i<=10; i++){
        printf("This is C");
    }

    string answer = get_string("What's your name?")

    
}