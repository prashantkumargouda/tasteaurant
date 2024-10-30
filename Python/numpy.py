import numpy as np 

#created an array 
arr = np.array([1,2,3]) 
print(arr) 

#converting list into array 
list = [1,2,4] 

arr = np.array(list) 
print(arr)

print("\n") 

#2D array 
arr = np.array([[1,2,3] , [2,5,6]]) 
print(arr) 

#SIZE AND DIMENSION OF AN ARRAY 
arr = np.arange(3) 
print(arr)

arr = np.arange(12).reshape(4,3) 

row,column = arr.shape 
print("row:" ,row) 
print("column:", column) 

print(arr) 
print(arr.shape) 
# print(arr.len()) 
print("\n")
arr = np.arange(24).reshape(2,3,4) 
print(arr) 

print(arr.ndim) 


arr = np.arange(16).reshape(4,4) 

print(arr) 
print(arr.ndim)

arr = np.array([1,2,3]) 
print(arr.ndim) 

print(arr) 


#ones 

arr = np.ones((3,4)) 
print(arr) 

arr = np.zeros((2,3)) 
print(arr) 

print(np.eye(2,2 , dtype=float)) 

print(np.diag([1,2,3])) 

print(np.arange(10).reshape(2,5)) 

arr1 = np.array([[1,2,3],[2,3,4]]) 
arr2 = np.array([[1,1,2] , [1,4,5]]) 

print(np.multiply(arr1 , arr2 )) 


print(type(arr1)) 

arr = np.array([1,2,3]) 

print(type(arr)) 



