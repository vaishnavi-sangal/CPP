class Solution {
public:
   bool checkValidString(string s){
    stack<int> asterisk;  // this only contsins the indexes of *
    stack<int> validPar;  // this only contains the indexes of ( brackets

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            validPar.push(i);
        }
        else if(s[i] == '*'){
            asterisk.push(i);
        }
        else if(s[i] == ')'){
            if(!validPar.empty()){
                validPar.pop();
            }
            else if(!asterisk.empty()){
                asterisk.pop();
            }
            else{
                return false;
            }
        }
    }

    // we have extra ( brakcets which we have to balance by converting them to ).
    // to be able to convert, then index of astrix must be more than index of (
    while(!validPar.empty() && !asterisk.empty()){
        if(validPar.top() > asterisk.top()){
            return false;
        }

        validPar.pop();
        asterisk.pop();
    }

    // after removing all the (, there should be no more ( brackets remaining
    return validPar.empty();
}

        
    
};