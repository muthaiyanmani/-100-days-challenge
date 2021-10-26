
size=int(input("Enter the size of array: "))
arr=[]
for i in range(size):
    arr.append(input())

# method1
def method1():
    print("Reverse of an array: ",arr[::-1])

# Method2
def method2():
    reversedArray=[]
    for i in range(len(arr)-1,-1,-1):
        reversedArray.append(arr[i])
    print("Reversed order: ",reversedArray)

#method3
def method3():
    arr.reverse()
    print("Reversed order of array: ",arr);
    
method3()
    