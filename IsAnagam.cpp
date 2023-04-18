#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{//Solução com sort
  public:
    bool isAnagram(string a, string  b){
        sort(a.begin(), a.end());// Ordena a string a em ordem alfabética
        sort(b.begin(), b.end());// Ordena a string b em ordem alfabética
        
        if(a == b){// Compara as duas strings ordenadas
            return true;
        }else return false;
    }
};

int main()
{
    Solution s;
    string a = "anagram";
    string b = "nagaram";
    cout << (s.isAnagram(a,b)?"True":"False");
    return 0;
}
