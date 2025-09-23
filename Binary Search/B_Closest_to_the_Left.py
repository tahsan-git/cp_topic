#problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

def closest_to_the_left(nums,q):
    idx = -1
    left,right = 0,len(nums)-1

    while left <= right:
        mid = left + (right - left) // 2
        if nums[mid] <= q:
            idx = mid
            left = mid+1
        else:
            right = mid-1
    return idx+1

n,k = map(int,input().split())
arr = list(map(int,input().split()))
query = list(map(int,input().split()))

for q in query:
    print(closest_to_the_left(arr,q))