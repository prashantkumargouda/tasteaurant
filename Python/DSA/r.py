# with input 

# append 



def inp( l , n ) :   # l , n are function arguments 

    for i in range(n) :
        value = int(input("Enter the element :")) 

        l.append(value) 

def print_list( l , n ) :
    for i in range(n) :
        print(l[i]) 

def maximum( l , n ) :
    max = -1 

    for i in range(n) :
        if( l[i] > max ) :
            max = l[i] 

    print(max) 

if __name__ == "__main__" :
    l = [] 
    n = int(input("Enter the no of elements :" ))   # 5 

    inp( l , n ) 
    print_list(l,n) 

    maximum(l,n) 











