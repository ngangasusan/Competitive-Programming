class Solution {
public:

    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;

        for(int i =1; i<=n; i++)
        {
            bool div3 = i%3;
            bool div5 = i%5;
            
            if(!div3&&!div5)
            {
                ans.push_back("FizzBuzz");
            }
            else if(!div3)
            {
                ans.push_back("Fizz");
            }
            else if(!div3)
            {
                ans.push_back("Buzz");
            }
            else
            {
                ans.push_back(to_string(i));
            }
            
        }  
        return ans;
    }
};
