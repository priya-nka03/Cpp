#include <iostream>
#include <string>
#include <algorithm> // for reverse()
#include <cctype>    // for toupper(), tolower()
using namespace std;

int main() {
    // 1️ Declaration & Initialization
    string s1 = "Hello";
    string s2("World");
    cout << "String 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;

    // 2️ Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenated: " << s3 << endl;

    // 3️ Input from user
    string userInput;
    cout << "\nEnter a sentence: ";
    getline(cin, userInput);
    cout << "You entered: " << userInput << endl;

    // 4️ Length
    cout << "\nLength of input: " << userInput.length() << endl;

    // 5️ Accessing characters
    cout << "First character: " << userInput[0] << endl;
    cout << "Last character: " << userInput[userInput.length() - 1] << endl;

    // 6️ Append
    userInput.append(" added text");
    cout << "After append: " << userInput << endl;

    // 7️ Substring
    cout << "Substring (0,5): " << userInput.substr(0, 5) << endl;

    // 8️ Compare
    string a = "apple", b = "banana";
    if (a == b)
        cout << "\nStrings are equal" << endl;
    else if (a > b)
        cout << "String a comes after b" << endl;
    else
        cout << "String a comes before b" << endl;

    // 9️ Insert & Erase
    string s = "HelloWorld";
    s.insert(5, " ");
    cout << "\nAfter insert: " << s << endl;
    s.erase(5, 1);
    cout << "After erase: " << s << endl;

    // 10 Replace
    string str = "I like apples";
    str.replace(7, 6, "mangoes");
    cout << "After replace: " << str << endl;

    // 1️1️ Find
    string text = "This is a test";
    cout << "\nFirst occurrence of 'is': " << text.find("is") << endl;
    cout << "Last occurrence of 'is': " << text.rfind("is") << endl;

    // 1️⃣2️⃣ Reverse
    string rev = "reverse";
    reverse(rev.begin(), rev.end());
    cout << "\nReversed string: " << rev << endl;

    // 1️⃣3️⃣ Convert to Uppercase and Lowercase
    string word = "ConvertMe";
    for (char &c : word) c = toupper(c);
    cout << "Uppercase: " << word << endl;
    for (char &c : word) c = tolower(c);
    cout << "Lowercase: " << word << endl;

    // 1️⃣4️⃣ String to Integer & Integer to String
    string numStr = "123";
    int num = stoi(numStr);
    cout << "\nString to int: " << num + 10 << endl;

    int val = 456;
    string strNum = to_string(val);
    cout << "Int to string: " << strNum + "7" << endl;

    // 1️⃣5️⃣ Reverse using loop (without reverse function)
    string name = "Priyanka";
    string reversed = "";
    for (int i = name.length() - 1; i >= 0; i--) {
        reversed += name[i];
    }
    cout << "\nManual reverse: " << reversed << endl;

    // 1️⃣6️⃣ Palindrome Check
    string p = "madam";
    string temp = p;
    reverse(temp.begin(), temp.end());
    if (p == temp)
        cout << "Palindrome ✅" << endl;
    else
        cout << "Not Palindrome ❌" << endl;

    // 1️⃣7️⃣ Count vowels, consonants, digits, and spaces
    string data = "Hello 123 world!";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (char c : data) {
        c = tolower(c);
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(c)) digits++;
        else if (isspace(c)) spaces++;
    }
    cout << "\nVowels: " << vowels;
    cout << "\nConsonants: " << consonants;
    cout << "\nDigits: " << digits;
    cout << "\nSpaces: " << spaces << endl;

    // 1️⃣8️⃣ Remove spaces from string
    string removeSpace = "Remove all spaces here";
    removeSpace.erase(remove(removeSpace.begin(), removeSpace.end(), ' '), removeSpace.end());
    cout << "\nAfter removing spaces: " << removeSpace << endl;

    // 1️⃣9️⃣ Sort characters alphabetically
    string sortStr = "dcba";
    sort(sortStr.begin(), sortStr.end());
    cout << "Sorted string: " << sortStr << endl;

    return 0;
}
