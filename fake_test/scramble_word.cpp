#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// List of words
vector<string> word_list = {"python", "developer", "programming", "algorithm", "function", 
                            "variable", "debugging", "compiler", "codechef", "machine", 
                            "bitcoin", "operation"};

// Function to scramble a word randomly
string scramble_word(string word) {
    // Shuffle all letters using random_shuffle()
    random_shuffle(word.begin(),word.end());
    // Return the scrambled word
    return word;
}

// Main game function
void play_game() {
    // Seed the random number generator with the current time to ensure randomness for each program run
    srand(time(0));

    // Use 'rand()' to generate a random number, and apply the modulus operator '%' to ensure the result is within the bounds of word_list.size().
    int index = rand()%word_list.size();


    string original_word = word_list[index];
    string scrambled = scramble_word(original_word);

    cout << "\nWelcome to the Word Scramble Game!" << endl;
    cout << "Original word: " << original_word << endl;
    cout << "Scrambled word: " << scrambled << endl;
}

int main() {
    // Run the game
    play_game();
    return 0;
}
