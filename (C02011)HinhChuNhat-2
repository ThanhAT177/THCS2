#include<stdio.h>

int main() {
	int m, n, i, j, count = 0;
	scanf("%d%d", &n, &m);
	for(i = 1; i <= n; i++) {
		if(i <= m) {
			for(j = i; j <= m; j++) {
				printf("%d", j);
				count++;
			}
			for(; count < m; count ++) {
				printf("%d", j - 2);
			j -= 1;
			}
			count = 0;
		}
		else {
			j = i;
			for(count = 1; count <= m; count++) {
				printf("%d", j);
				j--;
			}
			
		}
		printf("\n");	
	}
	return 0;
}
