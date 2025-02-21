class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.value = key

class BinaryTree:
    def __init__(self, root_value):
        self.root = Node(root_value)

    def insert(self, key):
        node = self.root
        while True:
            if key < node.value:
                if node.left is None:
                    node.left = Node(key)
                    break
                node = node.left
            else:
                if node.right is None:
                    node.right = Node(key)
                    break
                node = node.right

    def print_tree(self, node=None, level=0):
        if node is None:
            node = self.root
        if node.right:
            self.print_tree(node.right, level + 1)
        print(' ' * (level * 4) + str(node.value))
        if node.left:
            self.print_tree(node.left, level + 1)

# Example usage
if __name__ == "__main__":
    tree = BinaryTree(10)
    for value in [5, 15, 3, 7, 12, 18,11,31]:
        tree.insert(value)
    tree.print_tree()
