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
    printf("수식을 입력하세요(예> 1 + 2): ");
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
    cout << a << " " << operator << b <<" = " << result;
    printf("result is %03d.\n", result);
    return 0;
}
int div(int a, int b)
{
    return a/b;
}