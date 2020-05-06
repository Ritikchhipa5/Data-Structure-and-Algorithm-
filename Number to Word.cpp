#include<iostream>
#include<string>
#define IOS ios_base::sync_with_stdio(false) //for fast run
using namespace std;
void intToWord(int);
string word(int,string,string[],string[]);

int main(){
    IOS;
    int t,i,j=0;
    char a[50], b[50];
    scanf("%d", &t);  //Test Case
     while(t--)
     {
        scanf("%d", &i);
        intToWord(i);
        printf("\n");
     }
     return 0;
}



void intToWord(int num){
    string n=to_string(num);
    string str="";
    int size=n.length(); // length of number 

    string ones[]={" ","one ","two ","three ","four ","five ","six ","seven ","eight ","nine ","ten ","eleven ","twelve ",
                    "thirteen ","fourteen ","fifteen ","sixteen ","seventeen ","eightteen ","nintey "};

    string tens[]={"","","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};

    if(size>0){
    //    str += word((num/10000000),"core ",ones,tens);//core
       str += word(((num/100000)%100),"lakh ",ones,tens);//lakhs
       str += word(((num/1000)%100),"thousand ",ones,tens); //for tens thousand and thousand 
       str += word(((num/100)%10),"hundered ",ones,tens);//hundered
       str +=word((num%100),"",ones,tens);
         }
    cout<<str;
}

string word(int n,string str,string ones[],string tens[]){
    string s="";
    if(n<19)
         s+=ones[n];
    else
         s+=tens[n/10]+ones[n%10];
    
    if(n)
        s+=str;
    return s;
}
