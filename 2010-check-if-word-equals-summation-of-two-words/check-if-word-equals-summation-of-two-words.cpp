class Solution {
public:
    int value(string word){
        int num=0;
        for(int i=0;i<word.length();i++){
            int digit=word[i]-'a';
            num=num*10+digit;
        }
        return num;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int n1=value(firstWord);
        int n2=value(secondWord);
        int n3=value(targetWord);
        return n1+n2==n3;
    }
};