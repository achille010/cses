#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned long long max, num; 
	char s[20];
	
	scanf("%llu", &max);
	
	int arr[max];
	
	for(int i = 0; i < max; i ++ ){
		arr[i] = -1;
	}
	
	for(int i = 0; i < max - 1; i++){
		scanf("%llu", &num);
		int number = num - 1;
		arr[number] = num;
	}
	
	
	for(int i = 0; i <= max - 1; i++){
		if (arr[i] == -1){
			sprintf(s, "%llu", i + 1);
			puts(s);
		}
	}
	
	return 0;
}