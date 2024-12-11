a = int(input("Enter a number :")) 

b = int(input("Enter b number :")) 

n = a - 1
sum = 0 
while(n!=0) :
    if( a % n == 0 ) :
        sum = sum + n 
    n = n-1

if b == sum :
    print("Amicable pairs") 

else :
    print("Not amicable")