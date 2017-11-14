#include<stdio.h>
#include<stdlib.h>
int main(){
    int test[5] = {1,2,3,4,5};
    int target = 1;
    int res = BinarySearchForRecursion(test,target,5,0,4);
    printf("result is %d \n",res);
}

//普通方法实现

int BinarySearch(int*array,int target,int length){
    int mid = 0;
    int low = 0;
    int high = length-1;
    while (low <= high){
        mid = (high - low)/2+low;
        if(array[mid] > target){
            high = mid - 1;
        }else if(array[mid] < target){
            low = mid + 1;
        }else{
            return mid;
        }
    }
    return -1;
}
// 递归实现

int BinarySearchForRecursion(int* array,int target,int length,int low,int high){
    while (low <= high){
        int mid = (high - low)/2+low;
        if(array[mid] > target){
            return BinarySearchForRecursion(array,target,length,low,mid-1);
        }else if(array[mid] < target){
            return BinarySearchForRecursion(array,target,length,mid+1,high);
        }else{
            return mid;
        }
    }
}
