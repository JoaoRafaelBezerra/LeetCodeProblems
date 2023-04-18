#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution { //Solução na força bruta
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};
class Solution2 { //Solução com sort
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());// Ordena o vetor em ordem crescente
        bool flag = false;
        
        for(int i =0;i<nums.size()-1;i++){// Percorre o vetor
            // Compara o elemento atual com o próximo
            if(nums[i] == nums[i+1]) return true;// Se houver dois elementos iguais, retorna true
        }
        return flag;// Se nenhum elemento for duplicado, retorna false
    }
};
class Solution3 { //Solução com set
public:
    bool containsDuplicate(vector<int>& nums) {
        // Cria um conjunto 'set' a partir do vetor 'nums'
        // O conjunto eliminará os elementos duplicados do vetor
        set<int> s(nums.begin(), nums.end());
        
        // Verifica se o tamanho do conjunto é menor que o tamanho do vetor original
        // Se for, há elementos duplicados no vetor, e a função retorna true
        return s.size() < nums.size();
    }
};
int main()
{
    Solution3 s;
    vector<int> vet = {1,2,3,1};
    s.containsDuplicate(vet);
    cout << (!s.containsDuplicate(vet)?"False":"True");

    return 0;
}
