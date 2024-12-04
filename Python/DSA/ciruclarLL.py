class Node :
    def __init__(self,data) :
        self.data = data 
        self.next = None 

class LinkedList :
    def __init__(self,value) :
        newnode = Node(value) 

        self.head = newnode 
        self.tail = newnode 
        self.length = 1 

    def print_list(head) :
        if head == None :
            return None 
        
        print(head.data , end=" ") 

        temp = head 

        while temp != head :
            print( temp.data , end = " " ) 

            temp = temp.next 

    def insertbeg( head , data ) : #linear time 
        newnode = Node(data) 

        if head == None :
            newnode.next = newnode
            return newnode 
        
        temp = head 

        while curr.next != head :
            curr = curr.next 

        curr.next = newnode 
        newnode.next = head 

        return newnode 
    
    def insertbegin( head , value ) : # constant time
        newnode = Node(value) 

        if( head == None ) :
            newnode.next = newnode 
            return newnode 
        

        else :
            newnode.next = head.next 
            head.next = newnode

            head.data , newnode.data = newnode.data , head.data 
            return head 
        
    def insertEnd( head, value ) : # naive approach 
        newnode = Node(value) 

        if( head == None ) :
            newnode.next = newnode 
            return newnode 
        
        else :
            temp = head 

            while temp.next != head :
                temp = temp.next 

            temp.next = newnode 
            newnode.next = head 

            return head 
        
    def insertEnds( head , value ) :
        newnode = Node(value) 

        if( head==Node ) :
            newnode.next = newnode 
            return newnode 
        
        else :
            newnode.next = head.next 
            head.next = newnode 

            head.data , newnode.data = newnode.data , head.data 

            return head 
        
    def deleteHead( head ) : #naive approach
        if head == None :
            return None 
        if head.next == None :
            return None 
        
        temp = head 

        while temp.next != head :
            temp = temp.next 

        temp.next = head.next 

        return temp.next 
    
    def deletion(head) : # efficient solution 
        if head is None :
            return None 
        if head.next is None :
            return None 
        
        else :
            head.data = head.next.data 

            head.next = head.next.next 

            return head 
        
    def DeletekthNode( head , k ) :
        if head==None :
            return None 
        
        elif k == 1 : 
            return deleteHead(head) 
        

        temp = head 

        for i in range( k - 2 ) :
            temp = temp.next 

        temp.next = temp.next.next 

        return head 

    def deletingLast(head) :
        if head==None :
            return None 

        else :
            temp = head 
            for i in range( n - 2 ) :




