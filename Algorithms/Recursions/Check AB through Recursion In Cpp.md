# Check AB

Send Feedback

#### Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:

```
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'

```

#### If all the rules are followed by the given string, return true otherwise return false.

##### Input format :

```
String S

```

##### Output format :

```
'true' or 'false'

```

##### Constraints :

```
1 <= |S| <= 1000
where |S| represents length of string S.

```

##### Sample Input 1 :

```
abb

```

##### Sample Output 1 :

```
true

```

##### Sample Input 2 :

```
abababa

```

##### Sample Output 2 :

```
false
```
## SOLUTION:



    #include <iostream>
    using namespace std;
    
    
    bool first=true;
    bool checkAB(char s[]) {
    	// Write your code here
    	if( s[0]=='\0' )
            return true;
        if( first )
        {
            first = false;
            if( s[0]!='a' ){ 
                return false;
            }
        }
        if( s[0]=='a' )
        {
            if( s[1]=='\0' || s[1]=='a' || (s[1]=='b' && s[2]=='b') )
                checkAB(s+1);
            else
                return false;
        }
        else if( s[0]=='b' && s[1]=='b' )
        {
            if( s[2]=='\0' || s[2]=='a' )
                checkAB(s+2);
            else 
                return false;
        }    
    }
    
    
    
    
    
    int main() {
        char input[100];
        bool ans;
        cin >> input;
        ans=checkAB(input);
        if(ans)
            cout<< "true" << endl;
        else
            cout<< "false" << endl;
    }

