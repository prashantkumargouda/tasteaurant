# reversing the linked list 

class Node:
    def __init__(self, k):
        self.key = k
        self.next = None

def printList(head):
    curr = head
    while curr != None:
        print(curr.key)
        curr = curr.next
    print()

def recRevK(head,k):
    curr = head 
    prev , next = None , None 

    count = 0 
    while curr != None and count < k :
        next = curr.next 
        curr.next = prev 
        prev = curr 
        curr = next 
        count += 1 
    
    if next != None :
        rem_head = recRevK(curr,k) 
        head.next = rem_head 
    
    return prev 

head = Node(10)
head.next = Node(20)
head.next.next = Node(30)
head.next.next.next = Node(40)
head.next.next.next.next = Node(50)
head.next.next.next.next.next = Node(60)

printList(head)

head = recRevK(head,3)

printList(head)