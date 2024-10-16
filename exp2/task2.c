#include<stdio.h>

int main(){
    int start_num,end_num,,sum=0,i;
    print("\t\t\t*** sum of odd Number*** \n\n\n");
    printf("Enter start number");
    scanf("%d",&start_num);
    printf("Enter Ending number");
    scanf("%d",&end_num);
    
    if(start_num>end_num){
        print("Error:Ending Number should be higher than starting number");
        return 1;
    }
    for(i=start_num;i<=end_num;i+){
        if(i/2!=0)
        {
            
            sum=sum+i;
        }
    }
    printf("sum of all the odd numbers between %d & %d=%d",start_num,end_num,sum);
    return 0;
}
