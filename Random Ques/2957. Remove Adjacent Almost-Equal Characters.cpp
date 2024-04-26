#include <iostream>
using namespace std;

int removeAlmostEqualCharacters(string word) {
        int n = word.size();
        int opt = 0;

        for (int i=0; i<n-1; i++) {
            if (word[i]==word[i+1]|| abs(word[i]-word[i+1])==1) {
                opt++;
                i++; 
            }
        }

        return opt;
    }