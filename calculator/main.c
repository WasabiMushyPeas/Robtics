#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, ans;
    char op;

    puts("This is a simple calculator please type in an equation (EX: 1 + 1)");
    scanf("%d %c %d", &num1, &op, &num2);

    while(op != 'q'){

        printf("%d \n", ans);
        puts("Type in another equation (type exit q)");
        scanf("%d %c %d", &num1, &op, &num2);

        switch(op){
            case '+':
                ans = num1 + num2;
                break;
            case '-':
                ans = num1 - num2;
                break;
            case '*':
                ans = num1 * num2;
                break;
            case '/':
                ans = num1 / num2;
                break;
            case 'q':
                puts("Goodbye!");
                exit(0);
            default:
                puts("Invalid operator");
                exit(0);
        }
    }
    return 0;

}
