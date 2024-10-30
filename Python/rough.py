class Node :
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
            tail = newnode 
        
        self.length += 1 

    def pop(self) :
        if self.length == 0 :
            return None 

        temp = self.head 
        pre = None 

        while temp.next is not None :
            pre = temp 
            temp = temp.next 

        self.tail = pre 
        self.tail.next = None 

        if self.length == 0 :
            self.head = None 
            self.tail = None 

        self.length -= 1 

    def prepend(self,value) :
        newnode = Node(value) 

        if self.head is None :
            self.head = newnode 
            self.tail = newnode 
        else :
            newnode.next = self.head 
            self.head = newnode 

        self.length += 1 

        return True 
    
    def pop_first(self) :
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
        
