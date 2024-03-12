#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void){
  // printf("hello, world\n");
  string answer = get_string("What's your nome?  ");
  printf("hello, %s\n", answer);
} 

int add(int a, int b){
    return a + b;
}