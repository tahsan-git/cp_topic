n,s = map(int,input().split())
arr = list(map(int,input().split()))

curr_sum,max_len = 0,0
left,right = 0,0
while right < len(arr):
    if curr_sum + arr[right] > s:
        curr_sum -= arr[left]
        left += 1
    else:
        curr_sum += arr[right]
        right += 1
        max_len = max(max_len,(right - left))
print(max_len)
