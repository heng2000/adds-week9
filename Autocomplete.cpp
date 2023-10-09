#include "Autocomplete.h"
// return the known words that start with partialWord
vector<string> Autocomplete::getSuggestions(string partialWord)
{
    vector<string> vector_letter;
    for(size_t j=0;j<letters.size();j++){
        size_t number_index=0;
        if(partialWord.length()<=letters[j].length()){
            while(number_index<=partialWord.length()-1 && letters[j][number_index]==partialWord[number_index]){
                if(number_index>=partialWord.length()-1){
                    vector_letter.push_back(letters[j]);
                }
                number_index++;
            }
        }
    }
    return vector_letter;
}

void Autocomplete::insert(string word)
{
    letters.push_back(word);
    return;
}
