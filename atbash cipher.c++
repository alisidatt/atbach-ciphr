// Atbash cipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void atbash_cipher();

int main()
{
    bool end_program = true;
    int i;
    cout << "Welcome to atbash cipher programe\n\n";
    cout << "Enter 1 if you want to cipher or discipher \n" << "Enter 0 if you want exit\n";
    while (end_program)
    {
        cin >> i;
        if (i == 1)
        {
            atbash_cipher();
        }
        else if (i == 0)
        {
            end_program = false;
        }


    }

}

void atbash_cipher()
{
    string str1, str2;
    char convert = 0;
    cout << "Enter the phrase you want to cipher or discipher\n";
    cin.clear();
    cin.sync();
    getline(cin, str1);

    for (int i = 0; i < str1.length(); i++)
    {
        if (isupper(str1[i]))
        {
            if (str1[i] == ' ')
            {
                convert = ' ';
                str2.push_back(convert);
            }
            else
            {
                char converter = -1 * ((str1[i] - 65) + 1);
                while (converter < 0)
                {
                    converter += 26;
                }
                convert = (converter % 26) + 65;
                str2.push_back(convert);
            }

        }
        else
        {
            if (str1[i] == ' ')
            {
                convert = ' ';
                str2.push_back(convert);
            }
            else
            {
                char converter = -1 * ((str1[i] - 97) + 1);
                while (converter < 0)
                {
                    converter += 26;
                }
                convert = (converter % 26) + 97;
                str2.push_back(convert);
            }

        }
    }
    cout << str2 << "\n";
