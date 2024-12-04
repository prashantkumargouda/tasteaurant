# doubly linked list 
class Node :
    def __init__(self,data) :
        self.data = data
        self.next = None 
        self.prev = None 

class LinkedList :
    def __init__(self,data) :
        newnode = Node(data) 

        self.head = newnode 
        self.tail = newnode 

        self.length = 1 

    def print_list(self) :
        temp = self.head 

        while temp is not None :
            print( temp.data , end = " " ) 
            temp = temp.next 

    def insertBegin(self,head,value) :
        newnode = Node(value) 

        if head!=None :
            head.prev = newnode 
            newnode.next = head 

        return newnode 

    def insertEnd(self,value,head) :
        newnode = Node(value) 
        
        if( head == None ) :
            return newnode 
        
        temp = head 
        while temp.next is not None :
            temp = temp.next 

        temp.next = newnode 
        newnode.prev = temp 

        return head
 
    def deleteHead(self,value) :
        if self.head is None :
            return None 
        
        if self.head.next is None :
            return None 
        
        else :
            self.head = self.head.next 
            self.head.prev = None 

            return self.head

    def deleteLast(self,head) :
        if self.head is None :
            return None 
        if self.head.next is None :
            return None 
        
        else :
            temp = self.head 

            while temp.next.next is not None :
                temp = temp.next 

            temp.next = None 

            return head 
    def reverse(head) :
        if head == None :
            return None 
        if head.next == None :
            return head 

        curr = head 
        prev = None 

        while curr.next != None :
            curr = prev 
            curr.next , curr.prev = curr.prev , curr.next 

            curr = curr.prev 

        return prev 
         

    