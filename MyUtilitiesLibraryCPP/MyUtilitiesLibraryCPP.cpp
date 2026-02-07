#include <iostream>
#include "clsString.h"
#include "clsDate.h"
#include "clsGenericUtilities.h"
#include "clsInputValidate.h"

using namespace std;

int main() {

    // --- clsString ---
    string text = "Yazan Awamleh";
    vector<string> words = clsString::Split(text, " ");
    cout << "clsString Split: ";
    for (auto& w : words) cout << w << "|";
    cout << endl;

    // --- clsDate ---
    clsDate today;
    cout << "Today: " << today.DateToString() << endl;

    clsDate someDate(15, 3, 2025);
    cout << "Some Date: " << someDate.DateToString() << endl;
    cout << "Is Leap Year? " << (someDate.isLeapYear() ? "Yes" : "No") << endl;

    // Add 5 days
    someDate.AddDays(5);
    cout << "After 5 days: " << someDate.DateToString() << endl;

    // --- clsGenericUtil ---
    cout << "Random Key: " << clsGenericUtilities::GenerateKey() << endl;

    int arr[10];
    clsGenericUtilities::FillArrayWithRandomNumbers(arr, 10, 1, 100);
    cout << "Random Numbers: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    // Shuffle numbers
    clsGenericUtilities::ShuffleArray(arr, 10);
    cout << "Shuffled Numbers: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;

    // --- clsInputValidate ---
    cout << "Enter a number between 1 and 10: ";
    int num = clsInputValidate::ReadNumberBetween(1, 10);
    cout << "You entered: " << num << endl;

    cout << "Enter a valid string: ";
    string userInput = clsInputValidate::ReadString();
    cout << "You typed: " << userInput << endl;

    // Date validation
    clsDate inputDate(1, 1, 2020);
    cout << "Input date " << inputDate.DateToString()
        << " is valid? " << (clsInputValidate::IsValidateDate(inputDate) ? "Yes" : "No") << endl;

    return 0;
}
