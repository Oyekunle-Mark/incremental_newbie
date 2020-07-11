#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string ALPHABET{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string KEYS{"zaertyuiopqsdfghjklmwxcvbnQWERTYUIOPASDFGHJKLZXCVBNM"};

    string secret{};
    cout << "Enter your secret message: ";
    getline(cin, secret);

    cout << "\nEncryping message...\n";

    cout << endl
         << secret << endl;

    cout << "\nDecrypting message...\n";

    cout << endl
         << secret << endl;

    return 0;
}