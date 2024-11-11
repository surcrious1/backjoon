#include<stdio.h>
#include<string.h>
 
char a[1000000];
int main() {
    int h = 0;
    scanf("%s", a);
    for (int i = 0; i < strlen(a)-1; i++) {
        if (a[i] !=a[i + 1]) h++;
    }
    if (h % 2 == 0) printf("%d", h / 2);
    else printf("%d", (h-1)/2+1);
    return 0;
}