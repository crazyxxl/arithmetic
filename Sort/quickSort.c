#include<stdio.h>
#include<stdlib.h>
int main(){
	int nums[5] = {3,42,541,23,5};
	sort(nums,0,4);
	for (int i = 0 ; i < 5; i ++){
		printf("%d is %d\n",i,nums[i]);
	}
}

void sort( int* nums,int low , int high){
	if(low >= high) return;
	int mid = partition(nums,low,high);
	sort(nums,low,mid-1);
	sort(nums,mid+1,high);
}

int partition(int* nums,int low, int high){
	int i = low;
	int j = high+1;
	int temp = nums[i];
	while(1){
		while(nums[++i] < temp) if(i == high) break;
		while(nums[--j] > temp) if (j == low) break;
		if(i >= j) break;
		int temp_item = nums[i];
		nums[i] = nums[j];
		nums[j] = temp_item;
	}

	int temp_item = nums[low];
	nums[low] = nums[j];
	nums[j] = temp_item;
	return j;
}
