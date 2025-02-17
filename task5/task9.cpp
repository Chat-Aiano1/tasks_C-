// Підключені бібліотеки

#include <iostream> //Для операцій вводу/виводy
#include <string> // Для використання класу std::string
#include <bitset> // Для перетворення символів у двійкові представлення.
#include <vector> // Включена, але не використовується в наданому коді.

using namespace std;

string encodeText(const string& text, const string& hiddenMessage)
{
	string result = text;
	size_t spacePos = result.find(' ');

	for (char ch : hiddenMessage) {
	    bitset<8> bits(ch);

	    for (int i = 7; i >= 0; --i) {
		size_t nextSpacePos = result.find(' ', spacePos + 1);

		if (bits[i] == 0) {
		} else {

		   result.insert(nextSpacePos, " ");
	        }

		spacePos = result.find(' ', spacePos + 1);
            }
       }

       return result;
}

/*

int main() {
    string text = "this is a Stenography text";
    string hiddenMessage = "null";

    cout << "original text: " << text << endl;
    string encodedText = encodeText(text, hiddenMessage);
    cout << "crypt text: " << encodedText << endl;
    return 0;
}

*/

int main() {
    string text = "this is a Stenography text";
    string hiddenMessage = "null";

    cout << "Original text: " << text << endl;

    string encodedText = encodeText(text, hiddenMessage);
    cout << "Encoded text: " << encodedText << endl;

    return 0;
}

