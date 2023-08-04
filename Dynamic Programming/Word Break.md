# WORD BREAK

## QUESTION
Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

```
Input: s = "leetcode", wordDict = ["leet","code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".
```

## QUESTION LINK
https://leetcode.com/problems/word-break/description/

## EXPLANATION
Lets take a look at s=leetcode <br>
take a iterator i=0 <br>
store in temp, i=0 temp = l <br>
check if it exists in dictionary, if no <br>
update iterator, temp = le <br>
until it is found in dictionary.

## APPROACH 1 : RECURSION
A set data structure is created to store the words from the wordDict. A set is used to ensure uniqueness, and it allows for faster lookup compared to other data structures like vectors or lists. 

 The base condition for the recursion is when the index reaches the end of the string s. If this happens, it means we have successfully segmented the entire string, and we return 1 to indicate success.

 The code checks if the temp string formed so far is a valid word in the dictionary. If it is found in the set, it means the substring temp is a valid word.

 If the substring temp is a valid word, the function makes a recursive call to itself with the new index as i+1 (to start looking for a new word from the next character in the string s). If this recursive call returns 1, it means the rest of the string can be segmented successfully using words from the dictionary, and we return 1 to indicate success.
 
```
bool wordBreak(string s, vector<string>& wordDict) {

        //using recursion

        set<string> set;

        for(auto i:wordDict)
        {
            set.insert(i);
        }

        //starting from index 0 in string s;
        return solve(0,s,set);
    }

    int solve(int index, string s, set<string>set)
    {
        //base condition when index has traversed the whole string
        if(index==s.size())
        return 1;

            string temp;
        for(int i=index;i<s.size();i++)
        {
            temp+=s[i];

            if(set.find(temp)!=set.end())
            {
                if(solve(i+1,s,set))
                return 1;
            }
        }

        return 0;
    }
```

## APPROACH 2 : TOP DOWN APPROACH
This code is an optimized version of the previous solution using dynamic programming with memoization to avoid redundant computations.

int dp[301]; : An array dp is declared to store the results of subproblems. The size of the array is set to 301, which is one more than the maximum possible index in the input string s. The array will be used to store the results of whether a substring starting from a particular index can be segmented or not.

memset(dp,-1,sizeof dp); : The dp array is initialized with -1, indicating that no computation has been done for any subproblem yet. The -1 value is used as a flag to check if the result of a subproblem has been computed or not.

if(dp[index]!=-1) return dp[index];: Before proceeding with the recursive calls, the function checks if the result of the current subproblem (i.e., whether the substring starting from the current index can be segmented) has already been computed and stored in the dp array. If the value is not -1, it means the result is already known, and the function returns that result instead of re-computing it.

if(solve(i+1, s, set)) return dp[index]=1;: If the substring temp is a valid word, the function makes a recursive call to itself with the new index as i+1 (to start looking for a new word from the next character in the string s). If this recursive call returns 1, it means the rest of the string can be segmented successfully using words from the dictionary, and we return 1 to indicate success. Additionally, the result of this subproblem is stored in the dp array for future reference.


```
int dp[301];
    bool wordBreak(string s, vector<string>& wordDict) {

        memset(dp,-1,sizeof dp);
        set<string> set;

        for(auto i:wordDict)
        {
            set.insert(i);
        }

        //starting from index 0 in string s;
        return solve(0,s,set);
    }

    int solve(int index, string s, set<string>set)
    {
        //base condition when index has traversed the whole string
        if(index==s.size())
        return 1;

        if(dp[index]!=-1)
        return dp[index];

            string temp;
        for(int i=index;i<s.size();i++)
        {
            temp+=s[i];

            if(set.find(temp)!=set.end())
            {
                if(solve(i+1,s,set))
                return dp[index]=1;
            }
        }

        return dp[index]=0;
    }
```

## APPROACH 3 : BOTTOM UP APPROACH
