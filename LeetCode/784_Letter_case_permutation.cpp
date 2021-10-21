//Question Link - https://leetcode.com/problems/letter-case-permutation/

class Solution {
public:
    vector<string> result;
    void getEachPermutation(string input, string output)
    {      
          if(input.length()==0)
          {
              result.push_back(output);
              return;
          }
          if(isdigit(input[0]))
          {
              output.push_back(input[0]);
              input.erase(0,1);
              getEachPermutation(input, output);
          }
          else
          {
               string output1 = output + (char)tolower(input[0]);
               string output2 = output + (char)toupper(input[0]);
               input.erase(0,1);
               getEachPermutation(input, output1);
               getEachPermutation(input, output2);
          }
           
    }
    vector<string> letterCasePermutation(string s) {
        string output = "";
        getEachPermutation(s,output);        
        return result;
    }
};