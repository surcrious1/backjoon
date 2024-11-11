num=int(input())
if -32768<=num<=32767:print("short")
elif -2147483648 <= num<=2147483647:print("int")
else:print("long long")