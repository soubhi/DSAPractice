/*
Hint : BITSAND with 1
suppose n = 1000100010010
Performing an AND with 1 acts as a mask and helps us detect 1's in the given integer
n & 1 would be --->
1000100010010 & 1 = 0
Then right shift n by 1 bit (n >> 1) resulting in 0100010001001
repeat the process
increment count whenever the result of the BITSAND is 1
*/
int hammingWeight(uint32_t n) {
        int count = 0;
        for (int i = 0; i < 32; i++){
            if (n & 1 == 1) count ++;
            n = n >> 1; 
        } 
        return count;
    }
