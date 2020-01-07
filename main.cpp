#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(){
    int a, b, result;
    char operator;
    
    printf("Please enter a expression");
    cin >> a >> operator >> b;
    
    switch(operator){
            case'+':
            result = add(a,b);
            break;
            case'-':
            result = sub(a,b);
            break;
            case'*':
            result = multi(a,b);
            break;
            case'/':
            result = div(a,b);
            break;
    }
    
    return 0;
}