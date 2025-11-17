#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <algorithm> // For std::max, though manual max finding is easy too

// Define the size of the class
const int NUM_STUDENTS = 20;

// 1. Define the student structure
struct studentType {
    std::string studentFName;
    std::string studentLName;
    int testScore; // Between 0 and 100
    char grade;
};

// Function prototypes
void readStudentData(std::ifstream& inFile, studentType studentList[], int arraySize);
void assignGrade(studentType studentList[], int arraySize);
int findHighestScore(const studentType studentList[], int arraySize);
void printStudentData(std::ofstream& outFile, const studentType studentList[], int arraySize);
void printHighestScoreStudents(std::ofstream& outFile, const studentType studentList[], int arraySize, int highestScore);


/**
 * @brief Reads student data from the input file into the array.
 * @param inFile The input file stream object.
 * @param studentList Array of studentType structs.
 * @param arraySize The size of the array (NUM_STUDENTS).
 */
void readStudentData(std::ifstream& inFile, studentType studentList[], int arraySize) {
    std::cout << "Attempting to read data from Ch9_Ex2Data.txt...\n";
    for (int i = 0; i < arraySize; ++i) {
        // Read First Name, Last Name, and Test Score
        // The data file format is: FName LName Score
        if (inFile >> studentList[i].studentFName >> studentList[i].studentLName >> studentList[i].testScore) {
            // Data successfully read
        } else {
            // Handle error or EOF if the file has fewer students than expected
            std::cerr << "Error reading data for student " << i + 1 << ". Stopping read.\n";
            return;
        }
    }
    std::cout << "Data read successfully.\n";
}

/**
 * @brief Assigns the relevant letter grade to each student based on the score.
 * Grade Scale: 90-100 (A), 80-89 (B), 70-79 (C), 60-69 (D), Below 60 (F).
 * @param studentList Array of studentType structs.
 * @param arraySize The size of the array (NUM_STUDENTS).
 */
void assignGrade(studentType studentList[], int arraySize) {
    for (int i = 0; i < arraySize; ++i) {
        int score = studentList[i].testScore;
        if (score >= 90) {
            studentList[i].grade = 'A';
        } else if (score >= 80) {
            studentList[i].grade = 'B';
        } else if (score >= 70) {
            studentList[i].grade = 'C';
        } else if (score >= 60) {
            studentList[i].grade = 'D';
        } else {
            studentList[i].grade = 'F';
        }
    }
}

/**
 * @brief Finds the highest test score in the class.
 * @param studentList Array of studentType structs.
 * @param arraySize The size of the array (NUM_STUDENTS).
 * @return The maximum test score.
 */
int findHighestScore(const studentType studentList[], int arraySize) {
    if (arraySize == 0) {
        return 0; // Return 0 for an empty class
    }

    int maxScore = studentList[0].testScore;
    for (int i = 1; i < arraySize; ++i) {
        if (studentList[i].testScore > maxScore) {
            maxScore = studentList[i].testScore;
        }
    }
    return maxScore;
}

/**
 * @brief Prints the names, scores, and grades of all students to the output file.
 * @param outFile The output file stream object.
 * @param studentList Array of studentType structs.
 * @param arraySize The size of the array (NUM_STUDENTS).
 */
void printStudentData(std::ofstream& outFile, const studentType studentList[], int arraySize) {
    outFile << "------------------------------------------\n";
    outFile << "Student Grades Report\n";
    outFile << "------------------------------------------\n";
    outFile << std::left << std::setw(25) << "Student Name" << "Score" << " Grade\n";
    outFile << std::string(42, '-') << "\n";

    for (int i = 0; i < arraySize; ++i) {
        // Format the name: Last Name, First Name (left justified, width 25)
        std::string fullName = studentList[i].studentLName + ", " + studentList[i].studentFName;

        outFile << std::left << std::setw(25) << fullName
                << std::right << std::setw(5) << studentList[i].testScore
                << std::setw(6) << studentList[i].grade << "\n";
    }
    outFile << std::string(42, '-') << "\n\n";
}

/**
 * @brief Finds and prints the names of all students who achieved the highest test score.
 * @param outFile The output file stream object.
 * @param studentList Array of studentType structs.
 * @param arraySize The size of the array (NUM_STUDENTS).
 * @param highestScore The highest score found in the class.
 */
void printHighestScoreStudents(std::ofstream& outFile, const studentType studentList[], int arraySize, int highestScore) {
    outFile << "------------------------------------------\n";
    outFile << "Highest Score: " << highestScore << "\n";
    outFile << "Students with the Highest Score:\n";
    outFile << "------------------------------------------\n";

    for (int i = 0; i < arraySize; ++i) {
        if (studentList[i].testScore == highestScore) {
            // Print name in "Last Name, First Name" format
            outFile << studentList[i].studentLName << ", " << studentList[i].studentFName << "\n";
        }
    }
    outFile << "------------------------------------------\n";
}


/**
 * @brief Main function. Only contains file setup and function calls.
 */
int main() {
    // Declare variables
    studentType studentList[NUM_STUDENTS];
    int highestScore = 0;

    // Open input and output files
    std::ifstream inFile("Ch9_Ex2Data.txt");
    std::ofstream outFile("Ch9_Ex2Out.txt");

    // Check if files opened successfully
    if (!inFile.is_open()) {
        std::cerr << "Error: Could not open the input file Ch9_Ex2Data.txt. \n";
        std::cerr << "Please ensure the file exists with the required data.\n";
        return 1;
    }
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open the output file Ch9_Ex2Out.txt.\n";
        return 1;
    }

    // Function calls as per requirement
    readStudentData(inFile, studentList, NUM_STUDENTS);
    assignGrade(studentList, NUM_STUDENTS);

    // Get and print student data
    printStudentData(outFile, studentList, NUM_STUDENTS);

    // Find and print the highest score information
    highestScore = findHighestScore(studentList, NUM_STUDENTS);
    printHighestScoreStudents(outFile, studentList, NUM_STUDENTS, highestScore);

    // Close files
    inFile.close();
    outFile.close();

    std::cout << "Processing complete. Results saved to Ch9_Ex2Out.txt.\n";
    return 0;
}