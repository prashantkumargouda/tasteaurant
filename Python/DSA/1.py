class Node:
    def __init__(self,value) :
        self.data = value 
        self.next = None 


class LinkedList :
    def __init__(self,value) :
        newnode = Node(value) 

        self.head = newnode 
        self.tail = newnode 
        self.length = 1 

    def print_list(self) :
        temp = self.head 

        while temp is not None :
            print(temp.data) 
            temp = temp.next 

    def append(self,value) :
        newnode = Node(value) 

        if self.head is None :
            self.head = newnode 
            self.tail = newnode 

        else :
            self.tail.next = newnode 
            self.tail = newnode     
            
        self.length += 1 

    def pop(self) :
        if self.length == 0 :
            return None 
        
        temp = self.head    
        pre = self.head 

        while temp.next is not None :
            pre = temp 
            temp = temp.next 

        self.tail = pre 
        self.tail.next = None 

        self.length -= 1 

        if self.length == 0 :
            self.head = None 
            self.tail = None 

        return temp.data 

    def prepend(self,value) :
        newnode = Node(value)

        if self.length == 0 :
            self.head = newnode 
            self.tail = newnode 

        else :
            newnode.next = self.head 
            self.head = newnode 

        self.length += 1 

        return True 
     
    def popfirst(self) :
        if self.length == 0 :
            return None 
        else :
            temp = self.head 

            self.head = self.head.next  
            temp.next = None 

            self.length -= 1 

            if self.length == 0 :
                self.tail = None 

            return temp.data 
        
    def get(self,index) :
        if index < 0 or index >= self.length :
            return None 
    
        temp = self.head 
        for _ in range(index) :
            temp = temp.next 
        
        return temp 

    def set(self,value,index) :
        temp = self.get(index) 

        if temp is not None :
            temp.data = value 
            return True 
        return False 


    def add_random(self,index,value) :
        newnode = Node(value) 
        if index < 0 or index > self.length :
            return False 
        
        if index == 0 :
            return self.prepend(value) 

        if index == self.length :
            return self.append(value) 

        else :

            temp = self.head 

            for _ in range(index-1) :
                temp = temp.next 
        
            post = temp.next 
            temp.next = newnode 
            newnode.next = post  
        
        self.length += 1 
        return True     

    def remove(self,index) :
        if index < 0 or index > self.length : 
            return None 
        if index == 0 :
            return self.popfirst() 
        if index == self.length - 1 :
            return self.pop() 

        prev = self.get(index - 1) 
        temp = prev.next 

        prev.next = temp.next 
        temp.next = None 
        self.length -= 1 

        return temp.data
        
    def reverse(self) :
        temp = self.head 
        self.head = self.tail 
        self.tail = temp    

        after = temp.next 
        before = None 

        for _ in range(self.length) :
            after = temp.next 
            temp.next = before

            before = temp 
            temp = after 
        
mylinkedlist = LinkedList(10) 
mylinkedlist.append(20)
mylinkedlist.append(30)
mylinkedlist.append(40)
mylinkedlist.prepend(9) 


# print(mylinkedlist.get(2) ) 

# mylinkedlist.add_random(2,11) 

# mylinkedlist.set(12,3)
mylinkedlist.reverse() 

mylinkedlist.print_list() 




# mylinkedlist.print_list()
# print("deleted :") 

# print(mylinkedlist.remove(2) )

# mylinkedlist.print_list() 

# print('\n') 
# print(mylinkedlist.popfirst()) 
# print(mylinkedlist.popfirst()) 

# print(mylinkedlist.pop()) 
# print('\n') 

 