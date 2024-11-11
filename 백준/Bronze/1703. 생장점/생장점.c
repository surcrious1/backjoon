#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(void) {
	long long level, leaf, cut, check;
	while (1) {
		scanf("%lld", &level);
		if (level == 0) return 0;
		check = 1;
		for (int i = 0; i < level; i++) {
			scanf("%lld %lld", &leaf, &cut);
			check = leaf * check - cut;
		}
		printf("%lld\n", check);
	}
	return 0;
}