#include <stdio.h>

// Function to display a question and get the user's answer
int askQuestion(const char *question, const char *option1, const char *option2, const char *option3) 
{
    int userAnswer;

    printf("%s\n", question);
    printf("1. %s\n", option1);
    printf("2. %s\n", option2);
    printf("3. %s\n", option3);
    printf("Enter your answer (1, 2, or 3): ");
    scanf("%d", &userAnswer);

    return userAnswer;
}

// Function to check the user's answer
int checkAnswer(int userAnswer, int correctAnswer) 
{
    return userAnswer == correctAnswer;
}

int main() 
{
    int score = 0;

    printf("Welcome to the Computer Science Quiz!\n");

    // Question 1
    int q1 = askQuestion("What does CPU stand for?", "Central Processing Unit", "Computer Personal Unit", "Central Processor Unit");
    if (checkAnswer(q1, 1)) 
	{
        printf("Correct!\n");
        score++;
    } else 
	{
        printf("Incorrect. The correct answer is Central Processing Unit.\n");
    }

    // Question 2
    int q2 = askQuestion("Which programming language is known for its simplicity and readability?", "C++", "Python", "Java");
    if (checkAnswer(q2, 2)) 
	{
        printf("Correct!\n");
        score++;
    } else 
	{
        printf("Incorrect. The correct answer is Python.\n");
    }

    // Question 3
    int q3 = askQuestion("What is the purpose of an operating system?", "Run applications", "Manage hardware resources", "Both A and B");
    if (checkAnswer(q3, 3)) 
	{
        printf("Correct!\n");
        score++;
    } else 
	{
        printf("Incorrect. The correct answer is Both A and B.\n");
    }

    // Display final score
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}
