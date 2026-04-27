// You are given a string s consisting of lowercase English characters.

// Rearrange only the vowels in the string so that they appear in non-increasing order of their frequency.

// If multiple vowels have the same frequency, order them by the position of their first occurrence in s.

// Return the modified string.

// Vowels are 'a', 'e', 'i', 'o', and 'u'.

// The frequency of a letter is the number of times it occurs in the string.

//  

// Example 1:

// Input: s = "leetcode"

// Output: "leetcedo"

// Explanation:​​​​​​​

// Vowels in the string are ['e', 'e', 'o', 'e'] with frequencies: e = 3, o = 1.
// Sorting in non-increasing order of frequency and placing them back into the vowel positions results in "leetcedo".
// Example 2:

// Input: s = "aeiaaioooa"

// Output: "aaaaoooiie"

// Explanation:​​​​​​​

// Vowels in the string are ['a', 'e', 'i', 'a', 'a', 'i', 'o', 'o', 'o', 'a'] with frequencies: a = 4, o = 3, i = 2, e = 1.
// Sorting them in non-increasing order of frequency and placing them back into the vowel positions results in "aaaaoooiie".
// Example 3:

// Input: s = "baeiou"

// Output: "baeiou"

// Explanation:

// Each vowel appears exactly once, so all have the same frequency.
// Thus, they retain their relative order based on first occurrence, and the string remains unchanged.
//  

// Constraints:

// 1 <= s.length <= 105
// s consists of lowercase English letters

// Note: Please do not copy the description during the contest to maintain the integrity of your submissions.


#include<bits/stdc++.h>
using namespace std;

string sortVowels(string s){

    // freq → stores frequency of each vowel
    unordered_map<char,int> freq;

    // first → stores first occurrence index of each vowel
    unordered_map<char,int> first;

    // stores indices of vowels in original string
    vector<int> vowelIdx;

    // Step 1: traverse string
    for(int i = 0; i < s.size(); i++){

        // check if current char is vowel
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){

            // store index
            vowelIdx.push_back(i);

            // count frequency
            freq[s[i]]++;

            // store first occurrence only once
            if(first.find(s[i]) == first.end()){
                first[s[i]] = i;
            }
        }
    }

    // Step 2: extract unique vowels
    vector<char> unique;
    for(auto &it : freq){
        unique.push_back(it.first);
    }

    // Step 3: sort vowels using lambda comparator
    sort(unique.begin(), unique.end(), [&](char a, char b){

        // higher frequency first
        if(freq[a] != freq[b]){
            return freq[a] > freq[b];
        }

        // if same frequency → earlier occurrence first
        return first[a] < first[b];
    });

    // Step 4: build sorted vowel list
    vector<char> sorted;
    for(char ch : unique){
        for(int i = 0; i < freq[ch]; i++){
            sorted.push_back(ch);
        }
    }

    // Step 5: place sorted vowels back into string
    for(int i = 0; i < vowelIdx.size(); i++){
        s[vowelIdx[i]] = sorted[i];
    }

    return s;
}

int main(){
    string s = "leetcode";
    string ans = sortVowels(s);
    cout << ans << endl;
    return 0;
}