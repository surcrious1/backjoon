#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(void) {
	int n, arr[1000] = { 0, }, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d\n", arr[i]);
	return 0;
}