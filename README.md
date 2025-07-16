# 🌿 Huffman Encoder (C++)

A simple C++ implementation of the Huffman Encoding algorithm.  
This program allows you to compute character frequencies from either **user input** or a **text file** and generates corresponding Huffman codes for data compression.

---

## 📜 **What is Huffman Encoding?**

Huffman encoding is a **lossless data compression algorithm**.  
It assigns variable-length binary codes to characters based on their frequencies:  

- 🟢 Frequently occurring characters get **shorter codes**.  
- 🔵 Rare characters get **longer codes**.  

This leads to **efficient storage** and **faster transmission** of text data.

---

## 🎯 **Features**

✅ Supports **two input modes**:  
- Enter text directly from the terminal.  
- Read text from a file.  

✅ Handles **all ASCII characters** (including spaces, newlines, and non-printable characters).  
✅ Displays generated Huffman codes for each unique character.  
✅ Clean and easy-to-understand **C++ implementation**.  

---

## 🛠️ **How It Works**
1. Builds a **frequency table** for all characters in the input.  
2. Constructs a **Huffman Tree** using a min-heap (priority queue).  
3. Traverses the tree to assign **binary codes** to each character.  
4. Prints out the generated **Huffman codes**.  

---

## 🚀 **Getting Started**

### 🔧 **Prerequisites**
- A C++ compiler (GCC, Clang, or MSVC)
- C++11 or higher

---

### 📥 **Clone the Repository**
```
git clone https://github.com/<your-username>/HuffmanEncoder.git
cd HuffmanEncoder
```
🛠 Build and Run
```
Copy code
g++ -std=c++11 src/huffman.cpp -o huffman
./huffman
```
🖥️ Usage
When you run the program, it asks for your preferred input mode:

vbnet
Copy code
=== Huffman Encoder ===
Select input mode:
1 -> Enter text directly
2 -> Read text from a file
Choice: 
📌 Option 1: Enter Text Directly
vbnet
Copy code
Choice: 1

Enter a single line of text:
hello world

Huffman Codes:
h: 000
' ': 001
e: 010
l: 011
o: 100
w: 101
r: 110
d: 111
📌 Option 2: Read from a File
vbnet
Copy code
Choice: 2

Enter filename: sample_input.txt
File 'sample_input.txt' read successfully.

Huffman Codes:
a: 00
b: 01
' ': 10
c: 110
d: 111

📂 Project Structure

```
Copy code
HuffmanEncoder/
├── src/
│   └── huffman.cpp        # Main program
├── sample_input.txt       # Example input file
└── README.md              # Project documentation
```

💡 Future Improvements

✅ Add encoding and decoding support (compress and decompress files).

✅ Provide a CLI utility for compression.

✅ Display compression ratio statistics.

✅ Build a simple GUI version using Qt or Python Tkinter.


📜 License

This project is licensed under the MIT License.

🤝 Contributing
Pull requests are welcome!
For major changes, please open an issue first to discuss what you would like to change.

🙌 Acknowledgements
This project was built to strengthen understanding of:

📚 Data Structures (Trees, Priority Queues)

💻 Algorithms (Huffman Encoding)

📝 File Handling in C++
