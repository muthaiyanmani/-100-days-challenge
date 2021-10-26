
size=int(input("Enter the size of array: "))
arr=[]
for i in range(size):
    arr.append(int(input()))

#method1
def method1():
    print("The sum of array is: ",str(sum(arr)))

#method2
def method2():
    sum=0
    for i in range(0,len(arr)):
        sum+=arr[i]
    print("The sum of array is: ",str(sum))

method2()
    