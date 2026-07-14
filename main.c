#include <stdio.h>

#define MOD 12345

int main() {
	int n;
	scanf("%d", &n);
	
	int a = 1, b = 1, c = 0;
	
	for (int i = 2; i <= n; i++) {
		int newA = (a + b + c) % MOD;
		int newB = a;
		int newC = b;
		
		a = newA;
		b = newB;
		c = newC;
	}
	
	printf("%d\n", (a + b + c) % MOD);
	
	return 0;
}
