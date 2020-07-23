/*************************************************************************
 * AUTHOR           :  David Shin
 * Project          :  Cipher
 ************************************************************************/
#include <iostream>

using namespace std;

/*************************************************************************
* Project - Cipher
* _________________________________________________________________________
* This program asks the user to select an operation and executes
* accordingly.
* _________________________________________________________________________
* INPUT:
*    cryption      :  Asks for either encryption or decryption
*    map           :  Asks for default_map or personal map
*    word          :  Asks for the word to get encrypted or decrypted
*__________________________________________________________________________
*************************************************************************/
int main(int argc, char *argv[])
{
    string cryption, map, word, default_map;
    int num;
    string default_map = "zyxwvutsrqponmlkjihgfedcba";

    cout << "What is the method (encryption or decryption)? \n";
    //  INPUT - Initializes cryption
    cin >> cryption;

    if(cryption == "encryption")
    {
        cout << "What is the translation map (type 'default' to "
             << "use default): \n";
        //  INPUT - Initializes map
        cin >> map;

        if(map == "default")
        {
            cout << "What is the single word to translate: \n";
            //  INPUT - Initializes word
            cin >> word;

            for(num = 0; num < word.size(); num++)
            {

                if(word.at(num) >= 97 && word.at(num) <= 122)
                {
                    //  Used to output once
                    if(num == 0)
                    {
                        cout << "Encrypted word: ";
                    }
                    //  CALC & OUT - calculates the ASCII value and finds
                    //               the letter accordingly
                    cout << default_map.at(word.at(num) - 97);


                }
                else
                {
                    cout << "Error: encryption cannot be performed.";
                    num = word.size() + 1;
                }
            }
            cout << endl;

        }
        else
        {
            if(map.size() == 26)
            {
                cout << "What is the single word to translate: \n";
                //  INPUT - Initializes word
                cin >> word;
                for(num = 0; num < word.size(); num++)
                {
                    if(word.at(num) >= 97 && word.at(num) <= 122)
                    {
                        if(num == 0)
                        {
                            cout << "Encrypted word: ";
                        }
                        //  CALC & OUT - calculates the ASCII value and
                        //               finds the letter accordingly
                        cout << map.at(word.at(num) - 97);
                    }
                    else
                    {
                        cout << "Error: encryption cannot be performed.";
                        num = word.size() + 1;
                    }
                }
                cout << endl;
            }
            else
            {
                cout << "Error: invalid translation map size.\n";
            }
        }
    }
    else if (cryption == "decryption")
    {
        cout << "What is the translation map (type 'default' to "
             << "use default): \n";
        //  INPUT - Initializes map
        cin >> map;

        if(map == "default")
        {
            cout << "What is the single word to translate: \n";
            //  INPUT - Initializes word
            cin >> word;
            for(num = 0; num < word.size(); num++)
            {
                if(default_map.find(word.at(num)) != string::npos)
                {
                    if(num == 0)
                    {
                        cout << "Decrypted word: ";
                    }
                    //  CALC & OUT - calculates the ASCII value and
                    //               finds the letter accordingly
                    cout << default_map.at(word.at(num) - 97);
                }
                else
                {
                    cout << "Error: decryption cannot be performed.";
                    num = word.size() + 1;
                }
            }
            cout << endl;
        }
        else
        {
            if(map.size() == 26)
            {
                cout << "What is the single word to translate: \n";
                cin >> word;
                for(num = 0; num < word.size(); num++)
                {
                    if(map.find(word.at(num)) != string::npos)
                    {
                        if(num == 0)
                        {
                            cout << "Decrypted word: ";
                        }
                        //  CALC & OUT - calculates the ASCII value and
                        //               finds the letter accordingly
                        cout << map.at(word.at(num) - 97);
                    }
                    else
                    {
                        cout << "Error: decryption cannot be performed.";
                        num = word.size() + 1;
                    }
                }
                cout << endl;
            }
            else
            {
                cout << "Error: invalid translation map size.\n";
            }
        }
    }
    else
    {
        cout << "Error: invalid method choice." << endl;
    }
}



