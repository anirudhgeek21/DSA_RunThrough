#include <iostream>
using namespace std;

string sortVowels(string s) {
        vector<int> pos;
        vector<char> vowel;
        for (int i=0;i<s.size();i++){
            if (s[i]=='a' || s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                pos.push_back(i);
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        for(int i=0;i<pos.size();i++){
            s[pos[i]]= vowel[i];
        }
        return s;
    }