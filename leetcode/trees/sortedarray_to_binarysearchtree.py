# sortedarray_to_binarysearchtree

class TNode:
    def __init__(self, v, l = None, r = None):
        self.v = v
        self.l = l
        self.r = r


def sortedarray_to_binarysearchtree(arr: list): 
    if len(arr) == 0:
        return None

    s = len(arr) // 2
    return TNode(arr[s], sortedarray_to_binarysearchtree(arr[:s]), sortedarray_to_binarysearchtree(arr[s + 1:]))


def preorder(node: TNode):
    if node:
        print(f'Node: {node.v}')
        preorder(node.l)
        preorder(node.r)


if __name__ == '__main__':
    # arr = [5, 6, 7, 8, 9, 10]
    arr = [1, 2, 3, 4]
    tree = sortedarray_to_binarysearchtree(arr)

    preorder(tree)

    
    