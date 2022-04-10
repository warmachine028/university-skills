// CODE 3: C program to calculate Huffman Coding
#include <stdio.h>
#include <malloc.h>

#define MAX_TREE_HT 100
#define isSizeOne(minHeap) (minHeap->size == 1)
#define isLeaf(root) !(root->left || root->right)

typedef struct
{
    char data, *huffmanCode;
} code;

typedef struct MinHeapNode
{
    char data;
    int freq;
    struct MinHeapNode *left, *right;
} MinHeapNode;

typedef struct
{
    int capacity, size;
    MinHeapNode **array;
} MinHeap;

MinHeapNode *newNode(char data, int freq)
{
    MinHeapNode *node = malloc(sizeof(MinHeapNode));
    node->left = node->right = NULL;
    node->data = data;
    node->freq = freq;

    return node;
}

MinHeap *createMinHeap(int capacity)
{
    MinHeap *minHeap = malloc(sizeof(MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = malloc(capacity * sizeof(MinHeapNode));

    return minHeap;
}

void swapNodes(MinHeapNode **a, MinHeapNode **b)
{
    MinHeapNode *t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(MinHeap *minHeap, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest == idx)
        return;

    swapNodes(&minHeap->array[smallest], &minHeap->array[idx]);
    minHeapify(minHeap, smallest);
}

MinHeapNode *extractMin(MinHeap *minHeap)
{
    MinHeapNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[--minHeap->size];

    minHeapify(minHeap, 0);

    return temp;
}

void insertMinHeap(MinHeap *minHeap, MinHeapNode *minHeapNode)
{
    minHeap->size++;
    int i = minHeap->size - 1;

    while (i && minHeapNode->freq < minHeap->array[(i - 1) / 2]->freq)
        minHeap->array[i] = minHeap->array[(i - 1) / 2],
        i = (i - 1) / 2;
    minHeap->array[i] = minHeapNode;
}

void buildMinHeap(MinHeap *minHeap)
{
    int n = minHeap->size - 1;
    for (int i = (n - 1) / 2; i >= 0; i--)
        minHeapify(minHeap, i);
}

MinHeap *createAndBuildMinHeap(char data[], int freq[], int size)
{
    MinHeap *minHeap = createMinHeap(size);

    for (int i = 0; i < size; i++)
        minHeap->array[i] = newNode(data[i], freq[i]);

    minHeap->size = size;
    buildMinHeap(minHeap);

    return minHeap;
}

MinHeapNode *buildHuffmanTree(char data[], int freq[], int size)
{
    MinHeapNode *left, *right, *top;
    MinHeap *minHeap = createAndBuildMinHeap(data, freq, size);

    while (!isSizeOne(minHeap))
    {
        left = extractMin(minHeap);
        right = extractMin(minHeap);
        top = newNode('$', left->freq + right->freq);

        top->left = left;
        top->right = right;

        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}

void generateCodes(MinHeapNode *root, int arr[], int top, code **HuffmanTable, int *huff_index)
{
    if (root->left) // Assign 0 to left edge and recur
        arr[top] = 0,
        generateCodes(root->left, arr, top + 1, HuffmanTable, huff_index);

    if (root->right) // Assign 1 to right edge and recur
        arr[top] = 1,
        generateCodes(root->right, arr, top + 1, HuffmanTable, huff_index);

    // If this is a leaf node, then it contains one of the input characters, print the character and its code from arr[]
    if (isLeaf(root))
    {
        code *newCode = malloc(sizeof(code));
        newCode->data = root->data;
        char *huffmanCode = malloc(sizeof(char) * 10);

        int i;
        for (i = 0; i < top; i++)
            huffmanCode[i] = arr[i] + '0';
        huffmanCode[i] = '\0';

        newCode->huffmanCode = huffmanCode;
        HuffmanTable[*huff_index] = newCode;
        *huff_index += 1;
    }
}

// The main function that builds a Huffman Tree and print codes by traversing the built Huffman Tree
int HuffmanCodes(code **HuffmanTable, char data[], int freq[], int size)
{
    // code *HuffmanTable[MAX_TREE_HT];
    // *HuffmanTable = malloc(MAX_TREE_HT);
    int huff_index = 0;

    // Construct Huffman Tree
    MinHeapNode *root = buildHuffmanTree(data, freq, size);

    // Generate the Huffman Codes
    int arr[MAX_TREE_HT], top = 0;
    generateCodes(root, arr, top, HuffmanTable, &huff_index);
    
    return huff_index;
}

// Driver code
int main()
{
    // int size;
    // scanf("%i", &size);

    // char *arr = malloc(sizeof(char) * size);
    // int *freq = malloc(sizeof(int) * size);

    // for (int i = 0; i < size; i++)
    //     scanf(" %c", &arr[i]);

    // for (int i = 0; i < size; i++)
    //     scanf("%i", &freq[i]);

    int size = 6;
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {40, 30, 20, 5, 3, 2};
    
    
    code *HuffmanTable[MAX_TREE_HT];
    int huff_index = HuffmanCodes(HuffmanTable, arr, freq, size);
    
    for (int i = 0; i < size; i++)
    {
        char ch = arr[i];
        for (int j = 0; j < huff_index; j++)
        {
            char data = HuffmanTable[j]->data;
            char *code = HuffmanTable[j]->huffmanCode;
            if (ch == data)
            {
                printf("%c = ", data);
                puts(code);
                break;
            }
        }
    }
}
