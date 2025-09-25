#problem link:https://codeforces.com/problemset/problem/1676/E
import bisect
def binary_search(nums,target):
    idx = -1
    low,right = 0,len(nums)-1
    while right-low > 1:
        mid = (low + right)//2
        if nums[mid] > target:
            idx = mid
            right = mid-1
        else:
            low = mid+1
    return idx
for _ in range(int(input())):
    n,q = map(int,input().split())
    arr = list(map(int,input().split()))
    arr.sort(reverse=True)
    prefix = [0]*len(arr)
    prefix[0] = arr[0]
    for i in range(1,len(arr)):
        prefix[i] = prefix[i-1] + arr[i]
    for __ in range(q):
        candy = bisect.bisect_left(prefix,int(input()))
        if candy == n:
            print(-1)
        else:
            print(candy+1)
    