
size=int(input("Enter the size of array: "))
arr=[]
for i in range(size):
    arr.append(input())

#Method1
def method1():
    arr.sort()
    print("The second smallest number is: ",arr[1])

#method2
def method2():
    min=arr[0]
    for i in range(0,len(arr)):
        if(arr[i]<min):
            temp=min
            min=arr[i]
    print("The second smallest number is: ",temp)
method2()


            


