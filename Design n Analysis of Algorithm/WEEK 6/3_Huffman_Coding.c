// CODE 4: C program to calculate Huffman Coding
#include <stdio.h>
#include <malloc.h>

#define MAX_TREE_HT 100

typedef struct
{
    char data;
    char *huffmanCode;
} code;

code *HuffmanTable[100];
int huff_index = 0;

typedef struct MinHeapNode
{
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
} MinHeapNode;

typedef struct
{
    unsigned size;
    unsigned capacity;
    struct MinHeapNode **array;
} MinHeap;

MinHeapNode *newNode(char data, unsigned freq)
{
    MinHeapNode *temp = malloc(sizeof(MinHeapNode));

    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;

    return temp;
}

MinHeap *createMinHeap(unsigned capacity)
{
    MinHeap *minHeap = malloc(sizeof(MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = malloc(minHeap->capacity * sizeof(MinHeapNode *));

    return minHeap;
}

void swapMinHeapNode(MinHeapNode **a, MinHeapNode **b)
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

    if (smallest != idx)
    {
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

int isSizeOne(MinHeap *minHeap)
{
    return minHeap->size == 1;
}

MinHeapNode *extractMin(MinHeap *minHeap)
{
    struct MinHeapNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    minHeap->size--;

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

int isLeaf(MinHeapNode *root)
{
    return !(root->left || root->right);
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

void printCodes(MinHeapNode *root, int arr[], int top)
{
    if (root->left) // Assign 0 to left edge and recur
        arr[top] = 0,
        printCodes(root->left, arr, top + 1);

    if (root->right) // Assign 1 to right edge and recur
        arr[top] = 1,
        printCodes(root->right, arr, top + 1);

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
        HuffmanTable[huff_index++] = newCode;
    }
}

// The main function that builds a Huffman Tree and print codes by traversing the built Huffman Tree
void HuffmanCodes(char data[], int freq[], int size)
{
    // Construct Huffman Tree
    MinHeapNode *root = buildHuffmanTree(data, freq, size);

    int arr[MAX_TREE_HT], top = 0;
    printCodes(root, arr, top);
}

// Driver code
int main()
{
    int size;
    scanf("%i", &size);
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // int freq[] = {40, 30, 20, 5, 3, 2};

    char *arr = malloc(sizeof(char) * size);
    int *freq = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
        scanf(" %c", &arr[i]);

    for (int i = 0; i < size; i++)
        scanf("%i", &freq[i]);

    HuffmanCodes(arr, freq, size);

    for (int i = 0; i < size; i++)
    {
        char ch = arr[i];
        for (int j = 0; j < huff_index; j++)
        {
            char data = HuffmanTable[j]->data;
            if (ch == data)
            {
                printf("%c = ", data),
                    puts(HuffmanTable[j]->huffmanCode);
                break;
            }
        }
    }
}
