/* Vẽ tam giác theo nguyên tắc (chiều cao không quá 9)
	Input	|	Output
 	5	|	1
  		|	2 6
		|	3 7 10
		|	4 8 11 13
		|	5 9 12 14 15
*/
#include<stdio.h>

int main() {
	int i, j, n, m, l;
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			l = 0;
			for(m = 1; m < j; m++) {
				l += m;
			}
			printf("%d ", i - l + (j - 1) * n);
		}
		printf("\n");
	}
	return 0;
}
