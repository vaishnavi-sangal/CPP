 // Time Complexity : O(N) where N is the number of elements in data
// Space Complexity: O(1) 
class Solution {
public:
    bool validUtf8(vector<int>& data) { // [110xxxxx, 10xxxxxx] -> data 
                                        //    |
                                        // data[0] = no of Byte -> 2 so there was n - 1 => 2 -1 = 1 remaning byte ... if 1 remaning bytes first 2 MSB is '1 0' then it is valid UTF-8
                                        // data[1] = 2 MSB was '1 0' so true otherWise fasle
        
        int checkNext = 0;
       // Iterate each data and perform the following logic
        for(auto it: data){
            if(checkNext == 0){
                // // case 1: there is no remaining segement left....
                /*
                    then it means we should check the first segement of UTF-8 octet sequence
                    // i.e. 0xxxxxxx (for no of. bytes = 1)
                    // i.e. 110xxxxx (for no of. bytes = 2)
                    // i.e. 1110xxxx (for no of. bytes = 3)
                    // i.e. 11110xxx (for no of. bytes = 4)
                */
                if(it >> 5 == 0b110) checkNext = 1;  // 2 // e.g (110xxxxx >> 5) becomes 110 (in binary format)
                // if it is 0b110, 
                
                else if(it >> 4 == 0b1110) checkNext = 2; // 3 // e.g (1110xxxx >> 4) becomes 1110 (in binary format)
                    // if it is 0b1110, 
                
                else if(it >> 3 == 0b11110) checkNext = 3; // 4 // // e.g (11110xxx >> 7) becomes 11110 (in binary format)
                    // if it is 0b11110, 
                
                else if(it >> 7) return false;// e.g (1xxxxxxx >> 7) becomes 11110 (in binary format)
                    // if it is 0b11110,  // why false, e.g -> 128 ----> 10000000 -- > 128 >> 7 == 1 this was not valid so return false.
                    // But if 01xxxxxx --> is give then >> of 7 is 0 which is valid case for case 1.
            }
            else{
                // case 2: check 10xxxxxx
                // if we enter this part that means there was 1, 2, 3 next remaining byte whichs 2 msb bit may or may not contain '1 0'
                // based on the table in problem statement, we know what's left is just `10xxxxxx`
                // therefore, we shift 'x' 6 bits to the right
                // i.e making the first (8 - 6) = 2 bits left
                // e.g (10xxxxxx >> 6) becomes 10 (in binary format)
                // if the first 2 bits are not 10 (in binary format), then it is not valid
                if(it >> 6 != 0b10) return false;
                // otherwise, this segement is ok so we decrease remaining segment 'CheckNext' by 1
                checkNext--;
            }
            
        }
        // at the end, checkNext will be 0 then data arry will be the valid Utf-8 otherWise not Valid  
        return checkNext == 0;
        
    }
};