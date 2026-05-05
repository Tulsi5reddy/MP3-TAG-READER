# 🎵 MP3 Tag Reader (C Project)

## 📌 Overview

The **MP3 Tag Reader** is a C-based application that reads and displays metadata from MP3 files by parsing ID3 tags.
It extracts information such as **Title, Artist, Album, and Year** from the MP3 file without using any external libraries.

This project demonstrates **file handling, binary data parsing, and structured programming in C**, making it a strong foundational project for system-level programming.

---

## 🎯 Objectives

* To understand MP3 file structure
* To implement file handling in C
* To parse and extract metadata from binary files
* To learn about ID3 tagging system

---

## 🧠 What are ID3 Tags?

ID3 tags are metadata containers embedded within MP3 files that store information about the audio.

### 🔹 ID3v1 Format (Used in this Project)

* Located at the **last 128 bytes** of the MP3 file
* Fixed-size format
* Easy to parse using file operations

### 📊 Structure of ID3v1 Tag

```id="id3struct"
TAG (3 bytes)
Title (30 bytes)
Artist (30 bytes)
Album (30 bytes)
Year (4 bytes)
Comment (30 bytes)
Genre (1 byte)
```

* The first 3 bytes must be `"TAG"` to identify valid metadata.

---

## ⚙️ Features

* Reads MP3 file in binary mode
* Detects presence of ID3v1 tag
* Extracts:

  * 🎶 Title
  * 🎤 Artist
  * 💿 Album
  * 📅 Year
* Displays formatted output on console
* Written purely in C (no external libraries)

---

## 🧰 Technologies Used

* C Programming Language
* Standard File I/O (`fopen`, `fread`, `fseek`)
* Structures in C

---

## ▶️ How to Run

1. Clone the repository:

```id="clone"
git clone https://github.com/Tulsi5reddy/MP3-TAG-READER.git
```

2. Navigate to project folder:

```id="cd"
cd MP3-TAG-READER
```

3. Compile the program:

```id="compile"
gcc main.c -o mp3tag
```

4. Run the program:

```id="run"
./mp3tag sample.mp3
```

---

## 📊 Sample Output

```id="output"
----- MP3 TAG DETAILS -----
Title   : Shape of You
Artist  : Ed Sheeran
Album   : Divide
Year    : 2017
---------------------------
```

---

## 🔍 Working Principle

1. Open MP3 file in binary mode
2. Move file pointer to last 128 bytes using `fseek()`
3. Read data into a structure using `fread()`
4. Check for `"TAG"` identifier
5. Extract and display metadata fields

---

## 🚀 Applications

* Media library management
* Audio file analysis tools
* Digital music systems
* Learning binary file parsing

---

## 📈 Future Enhancements

* Support for **ID3v2 tags** (more advanced format)
* GUI-based interface
* Batch processing of multiple MP3 files
* Editing and writing MP3 tags

---

## 🧑‍💻 Author

Tulsi Ram Reddy

---

## 📎 Conclusion

This project provides a clear understanding of how metadata is stored and extracted from MP3 files. It strengthens knowledge of **file handling, structures, and low-level data processing in C**, which are essential skills for system programming and embedded development.
