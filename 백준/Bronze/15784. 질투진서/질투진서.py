n,a,b=map(int,input().split())
arr=[list(map(int, input().split())) for i in range(n)]
jinsu=arr[a-1][b-1]
word="HAPPY"
for i in range(n):
    if arr[i][b-1] > jinsu or arr[a-1][i] > jinsu:word="ANGRY"
print(word)