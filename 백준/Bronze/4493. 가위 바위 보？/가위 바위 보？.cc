#include<iostream>
using namespace std;
int main() {
	int n,m;
	int cnt_one, cnt_two;
	char one, two;
	cin >> n;
	for (int i = 0; i < n; i++) {
		//printf("i %d\n", i);
		cnt_one = 0;
		cnt_two = 0;
		cin >> m;
		for (int j = 0; j < m; j++) {
			//printf("j %d\n", j);
			cin >> one >> two;
			//cout << "print" << one << two << endl;
			if (one == two) {
				cnt_one++;
				cnt_two++;
			}
			//one 가위 S
			else if (one == 'S') {
				if (two == 'R')cnt_two++;
				else cnt_one++;
			}
			//one 바위 R
			else if (one == 'R') {
				if (two == 'P')cnt_two++;
				else cnt_one++;
			}
			//one 보 P
			else {
				if (two == 'S')cnt_two++;
				else cnt_one++;
			}
			//printf("one %d, two %d\n", cnt_one, cnt_two);
		}
		if (cnt_one == cnt_two) printf("TIE\n");
		else if (cnt_one > cnt_two) printf("Player 1\n");
		else printf("Player 2\n");
	}
}