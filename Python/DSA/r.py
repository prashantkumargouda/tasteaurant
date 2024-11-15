# find the number of occurence's of a number 

arr = [1,1,1,2,2,2,2,3,3,3,4] 

length = len(arr) 

count = 0 

value = int(input("Enter the value :"))  # 2 

for i in range(length) :
    if( value == arr[i] ) :    # - - - 1 2 3 4 - - - - 
        count += 1 

print(count) 

