#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		if (i > 2) printf("%d bottles of beer on the wall, %d bottles of beer.\nTake one down and pass it around, %d bottles of beer on the wall.\n\n",i,i,i-1);
		else if(i==2) printf("2 bottles of beer on the wall, 2 bottles of beer.\nTake one down and pass it around, 1 bottle of beer on the wall.\n\n");
		else if (i == 1) printf("1 bottle of beer on the wall, 1 bottle of beer.\nTake one down and pass it around, no more bottles of beer on the wall.\n\n");
	}
	if(n==1) printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, 1 bottle of beer on the wall.");
	else printf("No more bottles of beer on the wall, no more bottles of beer.\nGo to the store and buy some more, %d bottles of beer on the wall.",n);
	return 0;
}