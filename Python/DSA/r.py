class Node :
    def __init__(self,value) :
        self.value = value 
        self.next = None

class LinkedList :
    def __init__(self,value) :
        newnode = Node(value) 

        self.head = newnode
        self.tail = newnode 

