🚀 Study Planner Optimization (0/1 Knapsack - Dynamic Programming)






📌 Overview

This project is a smart study planner that helps students maximize their exam scores under time constraints.

It applies the 0/1 Knapsack algorithm to select the most valuable topics while staying within the available study time.

👉 Instead of randomly studying, this tool gives a data-driven strategy to score higher.

🎯 Key Features
✅ Optimal topic selection using Dynamic Programming
✅ Maximizes marks within limited time
✅ Efficient and scalable solution
✅ Clean and modular C++ implementation
🧠 Core Idea

Each topic has:

Time required
Marks (value)

We must choose a subset such that:

Total time ≤ available time
Total marks is maximum

⚙️ Algorithm Used
🔹 0/1 Knapsack (Dynamic Programming)

We build a DP table:

dp[i][t] = maximum marks using first i topics within time t

Recurrence:
dp[i][t] = max(
    dp[i-1][t], 
    marks[i-1] + dp[i-1][t - time[i-1]]
)

🏗️ Project Structure
📁 Study-Planner
 ├── main.cpp
 └── README.md

▶️ How to Run
Step 1: Compile
g++ main.cpp -o planner

Step 2: Run
./planner

📥 Sample Input
Enter number of topics: 4  
Time: 1 3 4 5  
Marks: 10 40 50 70  
Total Time: 7

📤 Sample Output
Maximum marks you can achieve: 80

📊 Complexity
Type	Complexity
Time Complexity	O(n × T)
Space Complexity	O(n × T)

🔥 Why This Project Matters
Demonstrates problem-solving skills
Shows understanding of Dynamic Programming
Applies theory to a real-world scenario (exam planning)
Useful for coding interviews + placements

🚀 Future Enhancements
🔹 Space optimization using 1D DP
🔹 Track selected topics (not just marks)
🔹 Add GUI or web interface
🔹 Convert into mobile app for students

🎓 Use Cases
Exam preparation strategy
Time management systems
Resource optimization problems

👨‍💻 Author

Harsha Kotha
B.Tech Student | Aspiring AI/ML Engineer