#problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
import bisect

def left(arr,left):
     idx = 0
     low,high = 0,len(arr)-1
     while low <= high:
          mid = (high + low) // 2
          if arr[mid] >= left:
               idx = mid
               high = mid-1
          else:
               low = mid+1
     return idx
def right(arr,right):
     idx = -1
     low,high = 0,len(arr)-1
     while low <= high:
          mid = (low + high)//2
          if arr[mid] >= right:
               idx = mid
               low = mid+1
          else:
               high = mid-1
     if arr[idx] <= right:
          return idx
     return -1
n = int(input())
arr = list(map(int,input().split()))
arr.sort()
k = int(input())

while k:
    l,r = map(int,input().split())
    print(bisect.bisect_right(arr,r) - bisect.bisect_left(arr,l),end=' ')
    k -= 1