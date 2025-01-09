#include <stdio.h>
#include <stdlib.h>

int* repeatedNumber(const int* A, int n1, int *len1) {
    int sumsq = 0;
    int sum = 0;
    int nsum = 0;
    int nsumsq = 0;
    for(int i = 0; i < n1; i++){ 
        sum = sum + A[i];
        nsum = nsum + i+1;
        sumsq = sumsq + A[i]*A[i];
        nsumsq = nsumsq + (i+1)*(i+1);
    }
    int a = nsum - sum;
    int b = (nsumsq - sumsq)/(a);
    len1[0] = (b - a)/2;
    len1[1] = (b + a)/2;
    return len1;
}

int main(){
    int arr[]={3,1,2,5,3};
    int n1=5;
    int len1[2];
    int* a=repeatedNumber(arr, n1, len1);
    for(int i = 0; i<2; i++){
        printf("%d ,",a[i]);
    }
    return 0;
}