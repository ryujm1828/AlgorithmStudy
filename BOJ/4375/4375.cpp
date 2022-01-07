#include <stdio.h>

int main() {
	int b;
	int i;
	int k;
	while (scanf("%d", &b)>0) {
		k = 1;
		i = 1;
		while (1) {
			k = k % b;
			if (k == 0) {
				printf("%d\n", i);
				break;
			}
            k = (10 * k) + 1;
			i++;
		}
	}
	return 0;
}
