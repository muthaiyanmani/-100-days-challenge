size=int(input("Enter the size of array: "))
arr=[]

for i in range(size):
    arr.append(input())

#method1
def method1():
    print("The largest number in array: ",max(arr))

#method2
def method2():
    arr.sort()
    print("The largest number in array: ",arr[-1])

#method3
def method3():
    max=arr[0]
    for i in range(0,len(arr)):
        if(arr[i]>max):
            max=arr[i]
    print("The largest element in array: ",max)    