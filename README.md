🎓 CGPA Calculator – C++
📌 Overview

This project is a Command-Line CGPA Calculator developed using C++.
It computes a student’s Cumulative Grade Point Average (CGPA) based on course grades and their respective credit points.

The program follows a weighted average approach, which is commonly used in universities and colleges.

This project was created as part of my internship learning and practice, focusing on clean code, logic clarity, and basic input validation.

🧠 Problem Statement

Students often need a quick way to calculate their CGPA after entering:

Course grades

Credit points for each course

This program automates that calculation accurately and efficiently.

⚙️ Features

Accepts multiple courses

Supports standard grading system (A, B, C, D, F)

Calculates CGPA using weighted average

Handles invalid grade inputs safely

🧮 Grading System Used

| Grade | Grade Point |
| ----- | ----------- |
| A     | 9           |
| B     | 8           |
| C     | 7           |
| D     | 6           |
| F     | 4           |

📐 CGPA Formula
```CGPA = (Sum of (Grade Point × Credit Points)) / Total Credit Points```

🧪 Sample Input
```Enter number of courses: 3

Course 1
Enter Grade (A/B/C/D/F): A
Enter Credit Points: 4

Course 2
Enter Grade (A/B/C/D/F): B
Enter Credit Points: 3

Course 3
Enter Grade (A/B/C/D/F): C
Enter Credit Points: 2
```

📤 Sample Output
```Final CGPA: 8.0```

🛠 Technologies & Concepts Used

- Language: C++

- Core Concepts:

     - Functions

     - Switch-case

     - Loops

     - Conditional statements

     - Input validation

     - Arithmetic operations
 
🚀 How to Run the Program
```g++ cgpa_calculator.cpp -o cgpa```

2️⃣ Execute
```./cgpa```

📈 Possible Enhancements

- Store results in a file

- Support different grading scales

- Add GPA → CGPA semester-wise calculation

- Build a simple GUI version

- Add unit tests

👨‍💻 Author

Thilak Ram M
Internship Project – C++ Fundamentals
