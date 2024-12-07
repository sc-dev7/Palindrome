# SCHOOL - Project

## DESCRIPTION  
The **Palindrome** project involves creating a program that determines whether a given number or string is a palindrome. Additionally, the program can compute the smallest palindrome obtained by repeatedly reversing and adding a number.

---

## FEATURES  
- **Palindrome detection:**  
  - Check if a given string or number is a palindrome.  
- **Palindrome generation:**  
  - Starting from a number, reverse its digits, add it to the original, and repeat until a palindrome is obtained.  
  - The program supports specifying a maximum number of iterations.  
- **Customizable base:**  
  - Handle numbers in different bases (default: base 10).  

---

## FUNCTIONS ALLOWED  
- System calls:  
  `malloc`, `free`, `write`, `read`, `exit`.

---

## USAGE  
### Syntax:  
```bash
./palindrome -n number [-b base] [-imin min_iter] [-imax max_iter]
