#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int white = 0, blue = 0;
int arr[1000][1000] = { 0, };
int n;
void paper(int x, int y, int l) {
	int cnt = 0;
	//check
	for (int i = x; i < x + l; i++) for (int j = y; j < y + l; j++) if (arr[i][j] == 1) cnt++;
	if (cnt == l * l) blue++;
	else if (cnt == 0) white++;
	else {
		l /= 2;
		paper(x, y, l);
		paper(x + l, y, l);
		paper(x, y + l, l);
		paper(x + l, y + l, l);
	}
}
int main(void) {
	int x = 0, y = 0, l;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
	l = n;
	paper(x, y, l);
	printf("%d\n%d", white, blue);
	return 0;
}