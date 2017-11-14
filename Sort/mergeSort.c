#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {1,4,2,3,6};
	int temp[5];
	sort(nums,0,4,temp);
	for (int i =0 ; i < 5 ; i++){
		printf("%d is %d\n", i,nums[i]);
	}
}

void sort(int* nums,int left,int right, int* temp){
	while(left <= right){
		int mid = (right + left )/2;
		sort(nums,left,mid,temp);
		sort(nums,mid+1,right,temp);
		merge(nums,left,mid,right,temp);
	}
}

void merge(int* nums,int left,int mid, int right,int* temp){
	int i = left;
	int j = mid+1;
	int k = 0;
	while (i < mid && j<right){
		if(nums[i]<=nums[j]){
			temp[k++] = nums[i++];
		}
		if(nums[i]>nums[j]){
			temp[k++] =nums[j++];
		}
	}
	while(i<=mid){
		temp[k++] = nums[i++];
	}
	while(j<=right){
		temp[k++] = nums[j++];
	}

	k = 0;
	while(left < right){
		nums[left++] = temp[k++];
	}
}

