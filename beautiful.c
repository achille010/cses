#include <stdio.h>

int main(){
	unsigned long long n;
	scanf("%llu", &n);
	
	if (n == 2 || n == 3){
		printf("NO SOLUTION");
		return 0;
	}
	
	for(long long i = 2; i <= ((n % 2 == 0)? n : n-1); i += 2){
		printf("%llu ", i);
	}
	
	for(long long i = 1 ; i <= ((n % 2 == 1)? n : n - 1); i += 2){
		printf("%llu ", i);
	}
	
	return 0;
}