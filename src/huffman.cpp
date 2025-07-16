#include <bits/stdc++.h>
using namespace std;

// Node structure for Huffman Tree
class Node {
public:
    char c;             // Character
    int freq;           // Frequency of character
    Node *left, *right; // Left and right child pointers

    Node(char c, int freq) {
        this->c = c;
        this->freq = freq;
        left = nullptr;
        right = nullptr;
    }
};

// Comparator for priority_queue (min-heap)
struct Compare {
    bool operator()(Node *a, Node *b) {
        return a->freq > b->freq; // Smaller frequency has higher priority
    }
};

// Builds Huffman Tree from character frequencies
Node *BinaryTreeConstruction(vector<int> &arr) {
    priority_queue<Node *, vector<Node *>, Compare> pq;

    // Push all characters with non-zero frequency into priority queue
    for (int i = 0; i < 256; i++) {
        if (arr[i] > 0)
            pq.push(new Node((char)i, arr[i]));
    }

    // Edge case: no characters to encode
    if (pq.empty()) return nullptr;

    // Edge case: only one unique character
    if (pq.size() == 1) {
        pq.push(new Node('$', 0));
    }

    // Build Huffman Tree
    while (pq.size() > 1) {
        Node *first = pq.top(); pq.pop();
        Node *second = pq.top(); pq.pop();
        Node *temp = new Node('$', first->freq + second->freq);
        temp->left = first;
        temp->right = second;
        pq.push(temp);
    }

    return pq.top();
}

// Recursive traversal to print Huffman Codes
void InorderTraversal(Node *root, string s) {
    if (!root) return;

    // Leaf node: print character and its code
    if (!root->left && !root->right) {
        if (isprint(root->c))
            cout << root->c << ": " << s << endl;
        else
            cout << "'\\x" << hex << setw(2) << setfill('0') << (int)(unsigned char)root->c
                 << "': " << s << endl; // Non-printable characters in hex
        return;
    }

    InorderTraversal(root->left, s + "0");
    InorderTraversal(root->right, s + "1");
}

// Wrapper to build Huffman Tree and print codes
void PrintHuffmanCode(vector<int> &arr) {
    Node *root = BinaryTreeConstruction(arr);
    if (!root) {
        cout << "No characters to encode." << endl;
        return;
    }
    cout << "\nHuffman Codes:\n";
    InorderTraversal(root, "");
}

int main() {
    vector<int> arr(256, 0); // Frequency array for all ASCII characters

    cout << "=== Huffman Encoder ===\n";
    cout << "Select input mode:\n";
    cout << "1 -> Enter text directly\n";
    cout << "2 -> Read text from a file\n";
    cout << "Choice: ";

    int choice;
    cin >> choice;
    cin.ignore(); // Clear newline left in buffer

    if (choice == 1) {
        string s;
        cout << "\nEnter a single line of text:\n";
        getline(cin, s);

        if (s.empty()) {
            cout << "Input string is empty. No Huffman Codes to generate." << endl;
            return EXIT_SUCCESS;
        }

        for (char ch : s) {
            arr[(unsigned char)ch]++;
        }

    } else if (choice == 2) {
        string filename;
        cout << "\nEnter filename: ";
        getline(cin, filename);

        ifstream file(filename);
        if (!file) {
            cout << "Error: Could not open file '" << filename << "'." << endl;
            return EXIT_FAILURE;
        }

        char ch;
        while (file.get(ch)) {
            arr[(unsigned char)ch]++;
        }
        file.close();

        cout << "File '" << filename << "' read successfully." << endl;

    } else {
        cout << "Invalid choice. Exiting." << endl;
        return EXIT_FAILURE;
    }

    // Print Huffman Codes
    PrintHuffmanCode(arr);
    return EXIT_SUCCESS;
}
