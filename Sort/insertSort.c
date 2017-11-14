#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {2,1,3,4,6};
	insertSort(nums,5);
	for(int i = 0 ; i < 5 ; i++){
	    printf("=%d",nums[i]);
	}
}

void insertSort(int* nums, int length){
    for(int i = 0;i<length;i++){
        int min_item = nums[i];
        int index = i;
        for( int j = i+1;j<length;j++){
            if (nums[j]<min_item){
                min_item = nums[j];
                index = j;
            }
        }
        if (index != i){
            int temp = nums[i];
            nums[i] = nums[index];
            nums[index] = temp;
        }
    }
}
