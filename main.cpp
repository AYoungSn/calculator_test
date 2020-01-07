#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(){
    int a,b,c;
    char operator;
    
    printf("Please enter a expression");
    cin>>a>>operator>>b;
    
    switch(operator){
            case'+':
            c=add(a,b);
            break;
            case'-':
            c=sub(a,b);
            break;
            case'*':
            c = multi(a,b);
            break;
            case'/':
            c = div(a,b);
            break;
    }
    
    return 0;
}