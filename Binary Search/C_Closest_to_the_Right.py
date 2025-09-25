#problem link:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

def closest_to_the_right(nums,target):
    idx = len(nums)
    left,right = 0,len(nums)-1
    while left <= right:
        mid = left + (right - left) // 2

        if nums[mid] >= target:
            idx = mid
            right = mid - 1
        else:
            left = mid + 1
    print(idx+1)


n,k = map(int,input().split())
arr = list(map(int,input().split()))
query = list(map(int,input().split()))

for q in query:
    closest_to_the_right(arr,q)