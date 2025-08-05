#include <iostream>
#include<vector>
using namespace std;
class quick_srt{
	int partition(vector<int> &arr,int st,int end){
		int pivot=arr[end],i=st-1,j=st;
		
		for(int j=st;j<end;j++ ){
			if(arr[j]<=pivot){
				i++;
				swap(arr[i],arr[j]);
			}
		}
		i++;
		swap(arr[i],arr[end]);
		return i;
	}
	public:
	void quickSort(vector<int> &arr, int st,int end){
		if(st<end){
			int pivotIdx = partition(arr,st,end);
			quickSort(arr,st,pivotIdx-1);
			quickSort(arr,pivotIdx+1,end);
		}
	}
	
};



int main() {
	vector<int> arr = {1,2,4,8,5409,3,5,8};
	quick_srt Q;
	Q.quickSort(arr,0,arr.size()-1);
	for(int val:arr){
		cout<<val<<" ";
	}
	return 0;

}
