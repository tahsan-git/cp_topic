#problem link:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

def binary_search(nums,k):
    left,right = 0,len(nums)-1
    while left <= right:
        mid = left + (right - left) // 2
        if nums[mid] == k:
            print('YES')
            return
        elif nums[mid] < k:
            left = mid + 1
        else:
            right = mid - 1
    print("NO")


n,k = map(int,input().split())
arr = list(map(int,input().split()))
query = list(map(int,input().split()))
for q in query:
    binary_search(arr,q)
