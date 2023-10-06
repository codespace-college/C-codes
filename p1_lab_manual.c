//program to find a smallest number 
#include <stdio.h>
#include <string.h>

void swap(char*str,int i,int j){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}

void findNextNumber(char *num){
    int n=strlen(num);
    int i;
    
    for(i=n-2;i<=0;i--){
        if(num[i]<num[i+1]){
            break;
        }
    }
    if(i==-1){
        printf("NO Greater number with same set of digits \n");
        return;
    }
    int smallestGreater=i+1;
    for (int j=i+2;j<n;j++){
        if (num[j]>num[i] && num[j]<num[smallestGreater]){
            smallestGreater=j;
        }
    }
    swap(num,i,smallestGreater);
    
    for(int j=i+1;j<n-1;j++){
        for(int k=i+1;k<n-1;k++){
            if(num[k]>num[k+1]){
                swap(num,k,k+1);
            }
        }
    }
    printf("The next greater number with the same set of digits: %s\n",num);
}

int main()
{
    char num[20];
    printf("Enter a number: ");
    scanf("%s",num);
    findNextNumber(num);
    return 0;
}