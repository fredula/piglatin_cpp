//
//  main_1.cpp
//  Ass_7
//
//  Created by Fred Naude on 2016/08/15.
//  Copyright (c) 2016 Fred Naude. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void convertToPigLatin(char* first) {
    
    string firstName;

    if(first[0] == 'a' || first[0] == 'e' || first[0] == 'i' || first[0] == 'o' || first[0] == 'u') {
        first = strcat(first, "way");
        first[0] = toupper(first[0]);
    }else{
        char firstChar = first[0];
        int i;
        for(i = 0; first[i] != '\0'; i++) {
            first[i] = first[i+1];
        }
        strncat(first, &firstChar, 1);
        first = strcat(first, "ay");
        first[0] = toupper(first[0]);
    }
}

void convertToLower(char* cString) {
    for(int i = 0; cString[i] != '\0'; i++) {
        cString[i] = tolower(cString[i]);
    }
}

int main() {
    char first[20];
    char last[20];
    string finalString;
    
    cout << "Please enter your first name" << endl;
    cin.getline(first, 20);
    cout << "Please enter your last name" << endl;
    cin.getline(last, 20);
    
    convertToLower(first);
    convertToLower(last);
    convertToPigLatin(first);
    convertToPigLatin(last);
    
    finalString = strcat(strcat(first, " "), last);
    cout << "Name in pig latin : " << finalString << endl;
    
    return 0;
}
