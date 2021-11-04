#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

string highestScoringWord(string str) {
    stringstream ss(str);
    string word;
    vector<string> vect;
    vector<int> count;
    int index = 0;
    int max = 0;

    while(ss >> word) {
        int score = 0;
        for(int i = 0; i < word.size(); i++) {
            score += int(word[i]) - 96;
        }
        vect.push_back(word);
        count.push_back(score);
    }

    for(int i = 0; i < count.size(); i++) {
        if(count[i] > max) {
            max = count[i];
            index = i;
        }
    }
    return vect[index];
}