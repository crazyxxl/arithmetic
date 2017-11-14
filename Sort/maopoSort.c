#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {2,1,4,6,53};
	maopoSort(nums,5);
	for (int i =0 ; i < 5 ; i++){
		printf("%d is %d\n",i,nums[i]);
	}
}

void maopoSort(int* nums,int length){
	for (int i =0 ; i < length -1; i++){
		for (int j = i ; j < length -1 -i ;j++){
				if (nums[j]> nums[j+1]){
				int temp = nums[j];
				nums[j] = nums[ j+1];
				nums[j+1] = temp;
			}
		}
	}
}
