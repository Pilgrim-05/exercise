#include <iostream>
#include <string>
#include <set>

int main()
{
    std::string word1;
    std::string word2;
    std::cin >> word1;
    std::cin >> word2;

    bool flag = false;

    std::multiset<char> wr1;
    std::multiset<char> wr2;

    if(word1.length() == word2.length())
    {
        for(int i{}; i < word1.length(); ++i)
        {
            wr1.insert(std::tolower(word1[i]));
            wr2.insert(std::tolower(word2[i]));
        }

        if(wr1 == wr2)
        {
            flag = true;
        }
    }

   if(flag) std::cout << "This is an anagram" << std::endl;
   else std::cout << "This is not an anagram" << std::endl;

}
