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

    for (size_t i{}; i < secret.length(); ++i)
    {
        size_t pos_in_alphabet = ALPHABET.find(secret.at(i));

        if (pos_in_alphabet == string::npos)
            continue;

        secret.at(i) = KEYS.at(pos_in_alphabet);
    }

    cout << endl
         << secret << endl;

    cout << "\nDecrypting message...\n";

    for (size_t i{}; i < secret.length(); ++i)
    {
        size_t pos_in_keys = KEYS.find(secret.at(i));

        if (pos_in_keys == string::npos)
            continue;

        secret.at(i) = ALPHABET.at(pos_in_keys);
    }

    cout << endl
         << secret << endl;

    return 0;
}