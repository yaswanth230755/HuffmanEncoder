<div align="center">

# 🌳 Huffman Coding Encoder

[![C++](https://img.shields.io/badge/C++-11%2B-blue.svg)](https://isocpp.org/)
[![Build](https://img.shields.io/badge/Build-Passing-brightgreen.svg)](https://github.com/yaswanth230755/HuffmanEncoder)
[![License](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

*A comprehensive C++ implementation of Huffman Coding algorithm for text compression and character encoding.*

</div>

## 📋 Table of Contents

<details>
<summary>Click to expand</summary>

- [🎯 Overview](#-overview)
- [✨ Features](#-features)
- [🚀 Installation](#-installation)
- [💻 Usage](#-usage)
- [🏗️ Code Structure](#️-code-structure)
- [📊 Examples](#-examples)
- [💡 Future Improvements](#-future-improvements)
- [🔍 Technical Details](#-technical-details)
- [🤝 Contributing](#-contributing)
- [📝 License](#-license)
- [🙏 Acknowledgments](#-acknowledgments)

</details>

## 🎯 Overview

> **Huffman Coding** is a **lossless data compression algorithm** that assigns variable-length codes to characters based on their frequencies.

<div align="center">

| Frequency | Code Length | Result |
|-----------|-------------|--------|
| 🟢 **High** | **Shorter** | Better compression |
| 🔵 **Low** | **Longer** | Optimal encoding |

</div>

This implementation builds a **Huffman Tree** from character frequencies and generates optimal binary codes for each character in the input text.

### 🎨 How It Works

graph TD
```
A[📝 Input Text] --> B[📊 Frequency Analysis]
B --> C[🌳 Build Huffman Tree]
C --> D[🔗 Generate Codes]
D --> E[📤 Output Codes]
```

```
style A fill:#e1f5fe
style B fill:#f3e5f5
style C fill:#e8f5e8
style D fill:#fff3e0
style E fill:#fce4ec
```


## ✨ Features

<div align="center">

| Feature | Description |
|---------|-------------|
| 🔄 **Dual Input Modes** | Support for direct text input and file reading |
| 🎯 **Complete ASCII Support** | Handles all 256 ASCII characters including non-printable ones |
| 🛡️ **Edge Case Handling** | Gracefully handles empty input and single-character scenarios |
| 🖥️ **User-Friendly Interface** | Interactive menu-driven program |
| 🔍 **Hex Display** | Non-printable characters displayed in hexadecimal format |

</div>

## 🚀 Installation

### Prerequisites

<div align="center">

| Requirement | Version |
|-------------|---------|
| **C++ Compiler** | g++, clang++, MSVC |
| **C++ Standard** | C++11 or later |

</div>

### 🛠️ Build and Run

Clone the repository
```
git clone https://github.com/yaswanth230755/HuffmanEncoder.git
cd HuffmanEncoder
```

Compile the program
```
g++ -std=c++11 -o huffman_encoder huffman_encoder.cpp
```

Run the program
```
./huffman_encoder
```
<details>
<summary>📦 Alternative compilation options</summary>
  
With optimization
```
g++ -std=c++11 -O2 -o huffman_encoder huffman_encoder.cpp
```

With debugging symbols
```
g++ -std=c++11 -g -o huffman_encoder huffman_encoder.cpp
```

With warnings
```
g++ -std=c++11 -Wall -Wextra -o huffman_encoder huffman_encoder.cpp
```


</details>

## 💻 Usage

### 🎮 Running the Program
```
./huffman_encoder
```

### 📥 Input Options

<div align="center">

=== Huffman Encoder ===

Select input mode:

1 -> Enter text directly

2 -> Read text from a file

Choice:


</div>

#### 📌 Option 1: Direct Text Input

Choice: 1

Enter a single line of text:
```
Hello World!
```
#### 📌 Option 2: File Input

Choice: 2
```
Enter filename: sample.txt
```
File 'sample.txt' read successfully.


### 📤 Sample Output
```
Huffman Codes:
l: 0
o: 10
H: 110
e: 1110
r: 1111
d: 00010
W: 00011
: 00100
!: 00101
```

## 🏗️ Code Structure

### 🔧 Core Components

#### `Node` Class
```
class Node {
public:
char c; // Character
int freq; // Frequency of character
Node *left, *right; // Left and right child pointers
};
```

#### 🔑 Key Functions

<div align="center">

| Function | Purpose | Complexity |
|----------|---------|------------|
| `BinaryTreeConstruction()` | Builds Huffman tree from character frequencies | O(n log n) |
| `InorderTraversal()` | Recursively generates and prints Huffman codes | O(n) |
| `PrintHuffmanCode()` | Wrapper function to coordinate tree building and code printing | O(n log n) |

</div>

### 📁 Project Structure

```
HuffmanEncoder/
├── 📄 huffman_encoder.cpp # Main program
├── 📄 sample.txt # Example input file
├── 📄 README.md # This file
└── 📄 LICENSE # MIT License
```


## 📊 Examples

### 🎯 Example 1: Simple Text

<div align="center">

**Input**: `"hello"`

</div>

```
Huffman Codes:
e: 00
h: 01
l: 1
o: 10
```

### 🎯 Example 2: Text with Special Characters

<div align="center">

**Input**: `"Hello\nWorld!"`

</div>

```
Huffman Codes:
l: 0
o: 10
H: 110
e: 1110
r: 1111
d: 00010
W: 00011
!: 00100
```


### 🎯 Example 3: File Input

Create a file `test.txt`:


### 🎯 Example 3: File Input

Create a file `test.txt`:

Run with file input option to see character frequencies and their corresponding Huffman codes.

# 💡 Future Improvements

✅ Add encoding and decoding support (compress and decompress files).

✅ Provide a CLI utility for file compression and decompression.

✅ Display compression ratio statistics after encoding.

✅ Build a simple GUI version using Qt (C++) or Tkinter (Python).


## 🔍 Technical Details

### ⚡ Performance Analysis

<div align="center">

| Metric | Complexity | Description |
|--------|------------|-------------|
| **Time - Tree Construction** | `O(n log n)` | n = number of unique characters |
| **Time - Code Generation** | `O(n)` | n = number of nodes in tree |
| **Space - Tree Storage** | `O(n)` | Huffman tree storage |
| **Space - Frequency Array** | `O(256)` | ASCII character frequencies |

</div>

### 🛡️ Edge Cases Handled

<div align="center">

| Case | Solution |
|------|----------|
| ❌ Empty input strings | Graceful error handling |
| 🔤 Single character input | Dummy node insertion |
| 📁 File access errors | Error messages and exit codes |
| 🔢 Non-printable characters | Hexadecimal display |
| 📈 Large files | Efficient memory usage |

</div>

## 🤝 Contributing

<div align="center">

**We welcome contributions!** 🎉

</div>

### 🌟 How to Contribute

1. **🐛 Bug Reports** - Report any bugs or issues
2. **💡 Feature Requests** - Suggest new features
3. **🔧 Code Improvements** - Optimize existing code
4. **📚 Documentation** - Improve documentation and examples

```
Fork this repository 
Create your feature branch (git checkout -b feature/awesome-feature) 🌱
Commit your changes (git commit -m 'Add awesome feature') 💻
Push to the branch (git push origin feature/awesome-feature) 🚀
Open a Pull Request 📬
```
```
style A fill:#e3f2fd
style B fill:#f3e5f5
style C fill:#e8f5e8
style D fill:#fff3e0
style E fill:#fce4ec
```

## 📝 License

<div align="center">

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

</div>

## 🙏 Acknowledgments

<div align="center">

| Contributor | Contribution |
|-------------|-------------|
| **David A. Huffman** | Original Huffman coding algorithm |
| **C++ Standard Library** | Efficient data structures |
| **Open Source Community** | Inspiration and support |

</div>

<div align="center">

**Made with ❤️ for learning and education purposes**

<br>

*For questions or support, please open an issue in the repository.*

<br>

[![GitHub Issues](https://img.shields.io/github/issues/yaswanth230755/HuffmanEncoder)](https://github.com/yaswanth230755/HuffmanEncoder/issues)
[![GitHub Stars](https://img.shields.io/github/stars/yaswanth230755/HuffmanEncoder)](https://github.com/yaswanth230755/HuffmanEncoder/stargazers)
[![GitHub Forks](https://img.shields.io/github/forks/yaswanth230755/HuffmanEncoder)](https://github.com/yaswanth230755/HuffmanEncoder/network)

</div>
