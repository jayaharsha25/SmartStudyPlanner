📘 Study Planner using Dynamic Programming (0/1 Knapsack)
📌 Overview

This project helps you maximize your exam score based on limited study time.
It uses the 0/1 Knapsack algorithm to decide which topics to study for the best possible marks.

🚀 Problem Statement

You are given:

n topics
Time required for each topic
Marks you can score from each topic
Total available study time

Your goal is to select topics such that:

Total time does not exceed available time
Total marks are maximized
💡 Approach

This problem is solved using Dynamic Programming.

We create a 2D table dp[i][t] where:

i = number of topics considered
t = available time
Logic:
If we don’t pick a topic → take previous result
If we pick a topic → add its marks and reduce time
🧠 Formula Used
dp[i][t] = max(
    dp[i-1][t],
    marks[i-1] + dp[i-1][t - time[i-1]]
)
🛠️ Technologies Used
C++
STL (vector)
▶️ How to Run
Compile the code:
g++ program.cpp -o program
Run the executable:
./program
📥 Input Format
Number of topics
Time required for each topic
Marks for each topic
Total available study time
📤 Output
Maximum marks achievable within given time
📌 Example
Input:
Enter number of topics: 3  
Enter time required: 2 3 4  
Enter marks: 40 50 60  
Enter total time: 5
Output:
Maximum marks you can achieve: 90
📊 Time & Space Complexity
Time Complexity: O(n × totalTime)
Space Complexity: O(n × totalTime)
🎯 Use Case
Exam preparation planning
Time management optimization
Resource allocation problems