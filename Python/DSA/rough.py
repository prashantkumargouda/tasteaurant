class Node :
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

    def insert(self,key):
        if self.data :
            if self.data > key :
                if self.left is None :
                    self.left = Node(key)

                else :
                    self.insert(key)

            elif self.data < key :
                if self.right is None :
                    self.right = Node(key)
                else :
                    self.insert(key)

        else :
            self.data = key


    def
































