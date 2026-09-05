class Solution {
public:
    bool isPalindrome(string s) {
        for(char &c: s){
        if(c >= 'A' && c <= 'Z'){
            c += 32;
        }
    }
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else{
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;

        }
    }
    return true;
}
int main(){
    string s = "A man, a plan, a canal: Panama";
    if(isPalindrome(s)){
        cout << "true" << endl ;
    }
    
    else{

        cout << "false" << endl;
    }
return 0;
        
    }
};