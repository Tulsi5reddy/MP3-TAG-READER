# 🎵 MP3 Tag Reader (C Language Project)

## 📌 Overview
The **MP3 Tag Reader** is a simple C-based project that reads metadata from MP3 files using the **ID3v1 tag format**.

It extracts and displays important song information such as:
- 🎶 Title
- 🎤 Artist
- 💽 Album
- 📅 Year
- 📝 Comment
- 🎧 Genre ID

---

## ⚙️ Working Principle
MP3 files store metadata in the last **128 bytes** known as the **ID3v1 tag**.

This program:
1. Opens the MP3 file in binary mode
2. Moves to the last 128 bytes
3. Checks for `"TAG"` identifier
4. Extracts metadata fields
5. Displays them in a structured format

---

🧑‍💻 Compile

```bash
gcc main.c -o mp3_reader

./mp3_reader

Enter MP3 filename: song.mp3


------ MP3 TAG INFO ------
Title   : Believer
Artist  : Imagine Dragons
Album   : Evolve
Year    : 2017
Comment : Rock Song
Genre ID: 17
--------------------------
