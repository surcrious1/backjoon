#include<stdio.h>
#include<string.h>
    char t[1000001];
int main() {
    char arr[26][1001];
    char k[1001];
    char m;
    int n;
    int s, e;
    int index = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %c", k, &m);
        strcpy(arr[m-'A'], k);
    }
    scanf("%s", k);
    for (int i = 0; i < strlen(k); i++) {
        for (int j = 0; j < strlen(arr[k[i] - 'A']); j++) {
            t[index] = arr[k[i] - 'A'][j];
            index++;
        }
    }
    scanf("%d %d",&s,&e);
    for (int i = s - 1; i < e; i++) {
        printf("%c", t[i]);
    }
    return 0;
}