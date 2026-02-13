#include <stdio.h>

int main(){
	unsigned long long count = 0, sz;
	scanf("%llu", &sz);
	
	int arr[sz];
	
	for(unsigned long long i = 0; i < sz ; i ++){
		scanf("%d", &arr[i]);
	}
	
	for(unsigned long long i = 1; i < sz ; i ++){
		while(arr[i] < arr[i - 1]){
			arr[i]++;
			count++;
		}
	} 
	
	printf("%llu",count);
	
	return 0;
}
