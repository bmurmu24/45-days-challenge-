class Solution {
public:
    string intToRoman(int num) {
                string M[] = {"", "M", "MM", "MMM"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
       
        string roman = M[num / 1000];
      
        roman += C[(num % 1000) / 100];
    
        roman += X[(num % 100) / 10];
   
        roman += I[num % 10];
        
        return roman;
    }
};