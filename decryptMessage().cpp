#include <iostream>
#include <string>

using namespace std;

// Function to decrypt a message using the Caesar cipher and a given key
string decryptMessage(const string& message, int key) {
    string decryptedMessage = "";

    for (char c : message) {
        if (isalpha(c)) {
            char base = (isupper(c)) ? 'A' : 'a';
            decryptedMessage += (c - key - base + 26) % 26 + base;
        } else {
            decryptedMessage += c;
        }
    }

    return decryptedMessage;
}

// Function to perform a brute-force attack on the Caesar cipher
void bruteForceAttack(const string& encryptedMessage) {
    for (int key = 1; key <= 25; ++key) {
        cout << "Key " << key << ": " << decryptMessage(encryptedMessage, key) << endl;
    }
}

int main() {
    // Messages to be decrypted
    string message1 = "bhvvncarl nwlahycrxw rb jubx twxfw jb lxwenwcrxwju nwlahycrxw xa bnlanc tnh nwlahycrxw";
    string message2 = "u mnlyug wcjbyl yhwlsjnm u xcacnuf xunu mnlyug ihy vcn il ihy vsny un u ncgy";
    string message3 = "f gqthp hnumjw uwthjxxjx f gqthp tk uqfnsyjcy fx f xnslqj zsny uwtizhnsl f hnumjwyjcy gqthp tk ymj xfrj qjslym";
    string message4 = "mekyyqfduo odkbfasdmbtk geqe fia dqxmfqp wqke, m bgnxuo wqk mzp m bduhmfq wqk";

    // Perform brute-force attack on each message
    cout << "Decrypted Message 1:" << endl;
    bruteForceAttack(message1);

    cout << "\nDecrypted Message 2:" << endl;
    bruteForceAttack(message2);

    cout << "\nDecrypted Message 3:" << endl;
    bruteForceAttack(message3);

    cout << "\nDecrypted Message 4:" << endl;
    bruteForceAttack(message4);

    return 0;
}
