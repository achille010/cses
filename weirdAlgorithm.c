#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned long long d;
	scanf("%llu",&d);
	printf("%llu ", d);
	char s[20];
	
	while(d != 1){
		if(d % 2 == 0)
			d /= 2;
		else
			d = d * 3 + 1;
		sprintf(s, "%llu", d);
		puts(s);
	}
	
	return 0;
}

