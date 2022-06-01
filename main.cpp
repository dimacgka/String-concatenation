#include <iostream>
#include <cstring>

using namespace std;

char *stringconcat(char *str1, char *str2){
    int size_str1 = strlen(str1); 
    int size_str2 = strlen(str2); 
    int size_str3 = size_str1 + size_str2;
    char *str3 = new char[size_str3 + 1]; 
    int i = 0;
    while (i != size_str3){
      if (i < size_str1){
        str3[i] = str1[i];
      }
      else
      {
        str3[i] = str2[i - size_str1];
      }
      i++;
    }
    str3[size_str3] = '\0';

    return str3;
  }


int main() {
    cout << "Enter the first string" << endl;
    char str1[100]; 
    cin.getline(str1, 100, '\n');

    cout << "Enter the second string" << endl;
    char str2[100];
    cin.getline(str2, 100, '\n'); 

    char *str3 = stringconcat(str1, str2);
    int i = 0;
    while(str3[i] !='\0'){
      cout << str3[i];
      i++;  
    }
    
    
    return 0;
} 