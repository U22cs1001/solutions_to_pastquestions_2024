#include <iostream>
#include <string>
using namespace std;

// Define a class to contain all the functions
class U22CS1001 {
public:
    // Question 2a: Check if a number is prime
    void checkPrime() {
        int num;
        bool isPrime = true;

        cout << "----------------------------------------" << endl;
        cout << "          Prime Number Checker          " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: ";
        cin >> num;

        // Edge case: numbers less than or equal to 1 are not prime
        if (num <= 1) {
            isPrime = false;
        } else {
            // Check divisibility from 2 to num/2
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        // Display the result
        if (isPrime) {
            cout << num << " is a prime number!" << endl;
        } else {
            cout << num << " is not a prime number!" << endl;
        }
        cout << endl;
    }

    // Question 2b: Find the sum of elements in an array
    void sumOfArray() {
        int n;

        cout << "----------------------------------------" << endl;
        cout << "      Sum of Elements in an Array      " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter the number of elements: ";
        cin >> n;

        int arr[n];
        cout << "Enter the elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        cout << "The sum of the array is: " << sum << endl;
        cout << endl;
    }

    // Question 3a: Sort an array using bubble sort
    void bubbleSortArray() {
        int n;

        cout << "----------------------------------------" << endl;
        cout << "           Bubble Sort Algorithm        " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter the number of elements: ";
        cin >> n;

        int arr[n];
        cout << "Enter the elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Perform bubble sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        // Display the sorted array
        cout << "After sorting, the array is:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
    }

    // Question 3b: Find the sum and average of 10 numbers
    void sumAndAverage() {
        const int n = 10;
        int arr[n];
        int sum = 0;

        cout << "----------------------------------------" << endl;
        cout << "      Sum and Average of 10 Numbers    " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter 10 numbers:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        double average = static_cast<double>(sum) / n;
        cout << "The sum of 10 numbers is: " << sum << endl;
        cout << "The average of 10 numbers is: " << average << endl;
        cout << endl;
    }

    // Question 4a: Compute the length of a string
    void stringLength() {
        char str[100];

        cout << "----------------------------------------" << endl;
        cout << "         Length of a Given String       " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a string: ";
        cin.ignore(); // Clear the input buffer
        cin.getline(str, 100);

        int length = 0;
        while (str[length] != '\0') {
            length++;
        }

        cout << "The length of the string is: " << length << endl;
        cout << endl;
    }

    // Question 4b: Linear search to find the position of a target value
    int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == target) {
                return i; // Return the index if found
            }
        }
        return -1; // Return -1 if not found
    }

    // Question 5a: Add two numbers using pointers
    int addUsingPointers() {
        int num1, num2;

        cout << "----------------------------------------" << endl;
        cout << "     Sum of Two Numbers Using Pointers" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        int* ptr1 = &num1;
        int* ptr2 = &num2;
        int sum = *ptr1 + *ptr2;

        cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
        cout << endl;
        return sum;
    }

    // Question 5b: Check if a number is a palindrome
    int isPalindrome() {
        int num;

        cout << "----------------------------------------" << endl;
        cout << "             Palindrome Checker         " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: ";
        cin >> num;

        int reversedNum = 0, originalNum = num;
        while (num != 0) {
            int lastDigit = num % 10;
            reversedNum = reversedNum * 10 + lastDigit;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            cout << originalNum << " is a palindrome." << endl;
        } else {
            cout << originalNum << " is not a palindrome." << endl;
        }
        cout << endl;
        return reversedNum;
    }

    // Question 6a: Student structure and average marks calculation
    struct Student {
        string name;
        int age;
        float marks;
    };

    void studentInfo() {
        Student student1, student2;

        cout << "----------------------------------------" << endl;
        cout << "         Student Information System     " << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter details for student 1:" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, student1.name);
        cout << "Age: ";
        cin >> student1.age;
        cout << "Marks: ";
        cin >> student1.marks;

        cout << "Enter details for student 2:" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, student2.name);
        cout << "Age: ";
        cin >> student2.age;
        cout << "Marks: ";
        cin >> student2.marks;

        // Display student information
        cout << "Information of Student 1:" << endl;
        cout << "Name: " << student1.name << endl;
        cout << "Age: " << student1.age << endl;
        cout << "Marks: " << student1.marks << endl;

        cout << "Information of Student 2:" << endl;
        cout << "Name: " << student2.name << endl;
        cout << "Age: " << student2.age << endl;
        cout << "Marks: " << student2.marks << endl;

        // Calculate and display average marks
        float averageMarks = (student1.marks + student2.marks) / 2.0;
        cout << "Average Marks: " << averageMarks << endl;
        cout << endl;
    }

    // Question 6b: Check if a number is positive/negative and even/odd
    void checkNumberProperties() {
        int num;

        cout << "----------------------------------------" << endl;
        cout << "  Positive/Negative and Even/Odd Checker" << endl;
        cout << "----------------------------------------" << endl;
        cout << "Enter a number: ";
        cin >> num;

        if (num == 0) {
            cout << "Zero" << endl;
        } else {
            if (num > 0) {
                cout << "Positive ";
            } else {
                cout << "Negative ";
            }
            if (num % 2 == 0) {
                cout << "Even" << endl;
            } else {
                cout << "Odd" << endl;
            }
        }
        cout << endl;
    }
};

int main() {
    U22CS1001 sol;

    // Call each function
    sol.checkPrime();          // Question 2a
    sol.sumOfArray();          // Question 2b
    sol.bubbleSortArray();     // Question 3a
    sol.sumAndAverage();       // Question 3b
    sol.stringLength();        // Question 4a

    // Question 4b: Linear Search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    int result = sol.linearSearch(arr, size, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }
    cout << endl;

    sol.addUsingPointers();    // Question 5a
    sol.isPalindrome();        // Question 5b
    sol.studentInfo();         // Question 6a
    sol.checkNumberProperties(); // Question 6b

    return 0;
}