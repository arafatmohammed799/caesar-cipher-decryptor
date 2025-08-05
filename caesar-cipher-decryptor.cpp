#include <iostream>
#include <string>
using namespace std;
// calling the function
string CipherDecryption(string Text, int Key) {
  string DecryptedText = "";
  for (char &c : Text) {
    // using ASCII table to shift the characters
    // using isaalnum() to check if the character is an alphabet or a number
    if (isalpha(c)) {
      char base = (isupper(c)) ? 'A' : 'a';
      DecryptedText += char(c - Key - base + 26) % 26 + base;
    } else {
      DecryptedText += c;
    }
  }
  return DecryptedText;
}
void bruteForceDecrypt(string CipherText) {
  for (int key = 0; key < 26; ++key) {
    cout << "Key" << key << ": " << CipherDecryption(CipherText, key) << endl;
  }
}
int main() {
  string messages[] = {
      "bhvvncarl nwlahycrxw rb jubx twxfw jb lxwenwcrxwju nwlahycrxw xa bnlanc "
      "tnh nwlahycrxw",
      "u mnlyug wcjbyl yhwlsjnm u xcacnuf xunu mnlyug ihy vcn il ihy vsny un u "
      "ncgy",
      "f gqthp hnumjw uwthjxxjx f gqthp tk uqfnsyjcy fx f xnslqj zsny "
      "uwtizhnsl f hnumjwyjcy gqthp tk ymj xfrj qjslym",
      "mekyyqfduo odkbfasdmbtk geqe fia dqxmfqp wqke, m bgnxuo wqk mzp m "
      "bduhmfq wqk"};
  // using for loop to decrypt the messages
  for (int key = 1; key <= 25; key++) {
    cout << "Key " << key << ":" << endl;
    for (string message : messages) {
      cout << CipherDecryption(message, key) << endl;
    }
    cout << endl;
  }

  return 0;
}

// First I have called the function CipherDecryption to decrypt the cipher text.
// Than I have used the for loop to decrypt the text using the key. After that I
// have used the brute force to decrypt the text. so the output will be the
// decrypted text. Than I have used the for loop to decrypt the text using the
// key. After that I have used the brute force to decrypt the message. so the
// output will be the decrypted text.
