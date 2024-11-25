#include<stdio.h>
#include<string.h>

struct info {
	char stb[10];
	char fruit[10];
	char color[10];
};
struct anw {
	char stb[10];
	char fruit[10];
	char color[10];
};
int main() {
	int n, m, arr[1000] = { 0, }, cnt = 0;
	struct info q1[1000];
	struct anw q2[1000];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s %s %s", q1[i].stb, q1[i].fruit, q1[i].color);
	}
	for (int i = 0; i < m; i++) {
		scanf("%s %s %s", q2[i].stb, q2[i].fruit, q2[i].color);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cnt = 0;
			if (strcmp(q1[j].stb, q2[i].stb) == 0 || strcmp(q2[i].stb, "-") == 0) cnt++;
			if (strcmp(q1[j].fruit, q2[i].fruit) == 0 || strcmp(q2[i].fruit, "-") == 0) cnt++;
			if (strcmp(q1[j].color, q2[i].color) == 0 || strcmp(q2[i].color, "-") == 0) cnt++;
			if (cnt == 3) arr[i]++;
		}
	}
	for(int i=0;i<m;i++) printf("%d\n", arr[i]);
	return 0;
}