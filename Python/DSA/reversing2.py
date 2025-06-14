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

def iteRevK(head,k):
    curr = head
    prev_first = head
    first_pass = True
    while curr!= None :
        first, prev = None, None
        count = 0 
        while curr!= None and count<k :
            next = curr.next
            curr.next = prev
            prev = curr
            curr = next
            count+=1
        if(first_pass):
            head = prev
            first_pass = False
        else:
            prev_first.next = prev
            prev_first=first
    return head
    
        

head = Node(10)
head.next = Node(20)
head.next.next = Node(30)
head.next.next.next = Node(40)
head.next.next.next.next = Node(50)
head.next.next.next.next.next = Node(60)

printList(head)

head = iteRevK(head,3)

printList(head)