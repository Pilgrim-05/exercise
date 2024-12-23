#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string txt;
    char ch;
    getline(std::cin, txt);
    std::cin >> ch;

    std::string separ{" ,;:.\"!?'\n"};

    std::vector<std::string> v;

    int start = txt.find_first_not_of(separ);

    while(start != std::string::npos)
    {
        int end = txt.find_first_of(separ, start + 1);

        std::string word = txt.substr(start, end - start);

        if(std::tolower(ch) == std::tolower(word[0]))
            v.push_back(word);

        start =   txt.find_first_not_of(separ, end +1);
    }

    for(const auto &wrd: v)
        std::cout << wrd << std::endl;

}
