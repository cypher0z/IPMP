#include <stdio.h>

void finddup(int *arr, int n){
    int slow, fast;
    slow = 0;
    fast = 0;
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
        printf("%d %d\n",slow, fast);
    }while(slow != fast);
    slow = 0;
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
        printf("%d %d\n",slow, fast);
    }
    printf("%d",fast);
}

int main(){
    int arr[]={ 1, 4, 4, 2, 5, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    finddup(arr, size);
    return 0;
}