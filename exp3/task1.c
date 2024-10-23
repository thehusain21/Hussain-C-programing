#include<stdio.h>


int main (){
    float num1,num2,result;
    int mod_result;
    char operator;

    printf("\t\t\t***Calculator***\n\n");
    printf("\t Operations : \n");
    printf("\t\t + : Addition\n");
    printf("\t\t - : Subtraction\n");
    printf("\t\t * : Multiplication\n");
    printf("\t\t / : Division\n");
    printf("\t\t %%: Modulus\n");

    repeat:

    printf("Enter first operand:");
    scanf("%f",&num1);
    printf("Enter second operand:");
    scanf("%f",&num2);
    getchar();
    printf("Enter Operation:");
    scanf("%c",&operator);

    switch(operator)
    {

        case '+':
            result = num1+num2;
            printf("%.1f + %.1f = %.1f",num1,num2,result);
            break;
        case '-':
            result = num1-num2;
            printf("%.1f - %.1f = %.1f",num1,num2,result);
            break;
        case '*':
            result = num1*num2;
            printf("%.1f * %.1f = %.1f",num1,num2,result);
            break;
        case '/':
            if(num2 == 0){
                printf("cannot divide by zero");
                break;
            }
            result = num1/num2;
            printf("%.1f / %.1f =%.1f", num1,num2,result);
            break;
        case '%':
            mod_result = (int)num1 % (int)num2;
            printf("%.0f %% %.0f = %d",num1,num2,mod_result);
            break;
        default:
            printf("invalid Opreator. Try again");
            break;


    }


    printf("\n Continue? (Y/N) : ");
    scanf("%c", &operator);
    if(operator == 'N' || operator == 'n'){
        printf("Thank you for using calculator");
        return 0;
    }

    printf("\n\n");
    goto repeat;



return 0;

}
