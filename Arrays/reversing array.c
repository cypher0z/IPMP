#include <stdio.h>
#include <stdlib.h>

void reverse(int a[], int b){
    for(int i = 0; i < b/2; i++){
        int temp = a[i];
        a[i] = a[b-1-i];
        a[b-1-i] = temp;
    }
}

int main(){
    int a[]={0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    printf("The array is : ");
    for(int i = 0; i < n; i++){
        printf("%d ,",a[i]);
    }
    printf("\n");
    reverse(a,n);
    printf("The reversed array is : ");
    for(int i = 0; i < n; i++){
        printf("%d ,",a[i]);
    }
    return 0;
}