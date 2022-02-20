#include <iostream>
#include <string>
using namespace std;

// youtube video code
bool test_palindrome (string testForPalindrome);

int main ()
{
    string testForPalindrome = "";
    cout << "Please type in word to test for palindrome: ";
    cin >> testForPalindrome;
    // racecar size is 7 -> 6
    // racecar is size 7, because there are 7 characters in it.
    // r = 0, a = 1, c =2, e = 3, c = 4, a =5, r = 6

    if (test_palindrome(testForPalindrome))
    {
        cout << testForPalindrome << " is a palindrome.\n";
    }
    else
    {
        cout << testForPalindrome << " is not a palindrome.\n";
    }
    return 0;
}

bool test_palindrome (string testForPalindrome)
{
    bool it_is_a_palindrome = false;
    int lengthOfInput = int(testForPalindrome.size())-1;
    for (int j = 0; j <= lengthOfInput; j++)
    {
        if ((lengthOfInput - j ) == j)
        {
            break;
        }
        // item 0 is r
        // lengthOfInput -> 6 - 0 -> 6
        // item 1 is a
        // lengthOfInput -> 6 -1 -> 5
        // item 3 is e
        // lengthOfInput -> 6 - 3 -> 3
        if (testForPalindrome[j] == testForPalindrome[lengthOfInput-j])
        {
            it_is_a_palindrome = true;

        }
        else
        {
            it_is_a_palindrome = false;
            break;
        }
    }
    return it_is_a_palindrome;
}