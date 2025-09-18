n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
a.append(float('inf'))
b.append(float('inf'))
c = [0]*(n+m)

a_pointer = 0
b_pointer = 0
k = 0
while a_pointer < n or b_pointer < m:
    if a[a_pointer] < b[b_pointer]:
        c[k] = a[a_pointer]
        k += 1
        a_pointer += 1
    else:
        c[k] = b[b_pointer]
        b_pointer += 1
        k += 1
    
print(*c)

