#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int dequeue[20001] = { 0, };	//start 10000
int f = 10000;
int b = 10000;

void push_front(int item) {
	dequeue[--f] = item;
}
void push_back(int item) {
	dequeue[b++] = item;	//자리가 비게되는 경우 제외
}
void pop_front() {
	if (f == b) printf("-1\n");
	else printf("%d\n", dequeue[f++]);
}
void pop_back() {
	if (f == b) printf("-1\n");
	else printf("%d\n", dequeue[--b]);
}
void front() {
	if (f == b) printf("-1\n");
	else printf("%d\n", dequeue[f]);
}
void back() {
	if (f == b) printf("-1\n");
	else printf("%d\n", dequeue[b-1]);
}
void size() {
	printf("%d\n", b - f);
}
void empty() {
	if (f == b)printf("1\n");
	else printf("0\n");
}
int main(void) {
	int n, item;
	char code[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", code);
		if (strcmp(code, "push_back") == 0) {
			scanf("%d", &item);
			push_back(item);
		}
		else if (strcmp(code, "push_front") == 0) {
			scanf("%d", &item);
			push_front(item);
		}
		else if (strcmp(code, "pop_front") == 0) pop_front();
		else if (strcmp(code, "pop_back") == 0) pop_back();
		else if (strcmp(code, "front") == 0) front();
		else if (strcmp(code, "back") == 0) back();
		else if (strcmp(code, "size") == 0) size();
		else empty();
	}
	return 0;
}