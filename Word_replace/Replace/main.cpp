#include <iostream>
#include <string>

int main()
{
    std::string txt;
    std::string word;
    getline(std::cin, txt);
    std::cin >> word;
    std::string spr {" ,;:.\"!?'\n"};

    for (auto & ch: word)
    {
        ch = std::tolower(ch);
    }

    int start = txt.find_first_not_of(spr);
    while (start != std::string::npos)
    {
        int end = txt.find_first_of(spr, start + 1);
        if (end == std::string::npos)
        {
            end = txt.length();
        }

        std::string tmpWord = txt.substr(start, end - start);
        bool flg = false;
        if (tmpWord.length() == word.length())
        {
            flg = true;

            for (int i {}; i < word.length(); ++i)
            {
                if (word[i] != std::tolower(tmpWord[i]))
                {
                    flg = false;
                    break;
                }
            }

            if (flg)
            {
                txt.replace(start, word.length(), word.length(), '*');
            }
        }

        start = txt.find_first_not_of(spr, end + 1);
    }

    std::cout << txt << std::endl;
}
