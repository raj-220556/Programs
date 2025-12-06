# Huffman Encoding

import heapq

text = input("Enter the text: ")

frequency = {}
for char in text:
    frequency[char] = frequency.get(char, 0) + 1

class Node:
    def __init__(self, char, freq):
        self.char = char
        self.freq = freq
        self.left = None
        self.right = None
    def check(self, other):
        return self.freq < other.freq

# Build the priority queue (min-heap)
heap = []
for char, freq in frequency.items():
    heapq.heappush(heap, Node(char, freq))

# Build the Huffman tree
while len(heap) > 1:
    node1 = heapq.heappop(heap)
    node2 = heapq.heappop(heap)
    merged = Node(None, node1.freq + node2.freq)
    merged.left = node1
    merged.right = node2
    heapq.heappush(heap, merged)

root = heap[0] if heap else None

# Assign codes to characters
def assign_codes(node, code, codebook):
    if node:
        if node.char is not None:
            codebook[node.char] = code
        assign_codes(node.left, code + "0", codebook)
        assign_codes(node.right, code + "1", codebook)

codebook = {}
assign_codes(root, "", codebook)


print("Huffman Codes:")
for char in sorted(codebook):
    print(f"{char}: {codebook[char]}")


encoded = ''.join(codebook[char] for char in text)
print("Encoded:", encoded)

