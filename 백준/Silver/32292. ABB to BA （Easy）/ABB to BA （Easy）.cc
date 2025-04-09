#include<iostream>
using namespace std;
char arr[2001];
int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		cin >> arr;
		while (1) {
			int cnt = 0;
			for (int j = 0; j < m - 2; j++) {
				if (arr[j] == 'A' && arr[j + 1] == 'B' && arr[j + 2] == 'B') {
					cnt++;
					arr[j] = 'B';
					arr[j + 1] = 'A';
					for (int k = j + 2; k < m; k++)arr[k] = arr[k + 1];
					m--;
				}
			}
			if (cnt == 0)break;
		}
		for (int j = 0; j < m; j++) 
			if(arr[j]!=' ') printf("%c", arr[j]);
		printf("\n");
	}
}