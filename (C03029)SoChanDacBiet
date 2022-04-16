#include<stdio.h>

int specialEvenNumber(long long n) {
	while(n) {
		if(((n % 10) % 2) == 1)
			return 0;
		n /= 10;
	}
	return 1;
}

void print() {
	int t;
	long long n;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld", &n);
		specialEvenNumber(n);
		if(specialEvenNumber(n) == 0)
			printf("NO\n");
		else printf("YES\n");
	}
}

int main() {
	print();
	return 0;
}
