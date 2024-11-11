# creating a linked list and modifying the linked list \


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

        self.tail.next = newnode 
        self.tail = newnode 

        self.length += 1 

    def pop(self,head) :
        if self.head is None :
            return None 
        
        temp = self.head 
        pre = self.head 

        while temp.next is not None :
            pre = temp 
            temp = temp.next 

            

