#include <stdio.h>
#include <stdlib.h>

int main(){
	unsigned long long a = 0, c = 0, g = 0, t = 0;
	int sA = 0, sC = 0, sG = 0, sT = 0; 
	char s[1000001];
	char S[10];
	
	scanf("%1000000s", s);
	
	for(int i = 0; s[i] != '\0' ; i ++){
		if(s[i] == 'A'){
			a ++;
			if(a > sA) sA = a;
		} else a = 0;
		
		if(s[i] == 'C'){
			c ++;
			if(c > sC) sC = c;
		} else c = 0;
		
		if(s[i] == 'G'){
			g ++;
			if(g > sG) sG = g;
		} else g = 0;
		
		if(s[i] == 'T'){
			t ++;
			if(t > sT) sT = t;
		} else t = 0;
	}
	
	unsigned long long m = sA;
	
	if (sC > m) m = sC;
	if (sG > m) m = sG;
	if (sT > m) m = sT;
	
	printf("%llu", m);
	
	
	return 0;
}