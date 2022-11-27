#include "str_easy.h"
using namespace std;
string itc_even_place(string str){
int length = itc_len(str);
int c=0;
for(int i=0;i<length;i++){
if(i%2==0){
    cout<<str[i];
   }
}

