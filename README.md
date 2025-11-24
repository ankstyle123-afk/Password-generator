# 🔐 Password Generator (C) — README

**What is unique in your project.**

- This submission focuses on a *minimal, easy-to-understand C implementation* suitable for beginners learning random number usage, arrays, and strings in C. Unlike other similar projects, this README contains detailed documentation, structured explanations, optional enhancements, security notes, and a polished, clean presentation.

---

## 📌 Project Overview
A simple and clean C-based password generator that allows the user to choose the length of the password and generates a random combination of:
- Uppercase letters  
- Lowercase letters  
- Numbers  
- Special symbols  

---

## 🛠️ Language and Tools
**Programming Language:** C  
Chosen because it helps understand core concepts like memory handling, arrays, and manual string manipulation — ideal for beginners.

---

## ⚙️ How the System Works
1. User enters desired password length  
2. A predefined character set is used  
3. `rand()` selects random characters  
4. Password is displayed to the user  

---

## ✨ Features
- Random password generation  
- User-defined length  
- Uses letters, symbols, and digits  
- Lightweight and easy to understand  

---

## 🔧 Optional Enhancements (For Extra Marks)
- Ensure at least one char from each category  
- Remove confusing characters (I, l, 0, O)  
- Password strength meter  
- Generate multiple passwords  
- Save output to file  

---

## 🚀 How to Compile and Run
gcc -o password src/password.c  
./password  

---

## 📚 Explanation of Techniques Used
- `rand()` + `srand(time(NULL))` for randomness  
- Character array manipulation  
- Null-terminating strings  

---

## 🔒 Security Notes
- `rand()` is not cryptographically secure  
- Do not store passwords without permission  

---

## 📂 Submission Checklist
- README  
- password.c  
- Screenshot  
- Unique improvements  

---

## 📜 License
MIT License  

---
# 📸 Output Screenshots

Below are the output screenshots of the **Password Generator (C)** project.

---

## 🖼️ Screenshot 1

![Screenshot 1](https://raw.githubusercontent.com/ankstyle123-afk/Password-generator/2c5ae61aa6d188de59899b7840c1df73b4677a07/Screenshot%202025-11-24%20152758.png)

---

## 🖼️ Screenshot 2

![Screenshot 2](https://raw.githubusercontent.com/ankstyle123-afk/Password-generator/2c5ae61aa6d188de59899b7840c1df73b4677a07/Screenshot%202025-11-24%20152820.png)

---


## 👤 Author
**Name:** Ankit kumar sahu  
**Roll Number:** 322  
**Course:** B.Tech CSE  
**Email:** ankstyle123@gmail.com

