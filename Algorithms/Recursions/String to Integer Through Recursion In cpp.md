# String to Integer

#### Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

##### Input format :

```
Numeric string S (string, Eg. "1234")

```

##### Output format :

```
Corresponding integer N (int, Eg. 1234)

```

##### Constraints :

```
0 <= |S| <= 9
where |S| represents length of string S.

```

##### Sample Input 1 :

```
00001231

```

##### Sample Output 1 :

```
1231

```

##### Sample Input 2 :

```
12567

```

##### Sample Output 2 :

```
12567
```

## SOLUTION:

    #include <iostream>
    using namespace std;
    
    #include<cstring>
    int ans(char input[] , int lenght, int start){
        if( lenght == start){
            int ans = input[start] - 48;
            return ans;;
        }
        
        int value = ans(input , lenght - 1, start);
        int ans = input[lenght] - 48;
        return (value*10) + ans;
    }
    int stringToNumber(char input[]) {
        // Write your code here
        int start = 0;
        for(int i = 0; input[i] == 0; i++){
            start++;
        }
        int lenght = strlen(input);
        return ans(input + start, lenght - 1 , start);
    
    }
    
    
    
    
    int main() {
        char input[50];
        cin >> input;
        cout << stringToNumber(input) << endl;
    }

## SOLUTION (2nd APPROACH):
     /*
        Time Complexity : O(n)
        Space Complexity : O(n)
        where n is size of input array
        */
        int length(char input[])
        {
        int len = 0;
        for (int i = 0; input[i] != '\0'; i++)
        {
        len++;
        }
        return len;
        }
        int stringToNumber(char input[], int last)
        {
        if (last == 0)
        {
        return input[last] - '0';
        }
        int smallAns = stringToNumber(input, last - 1);
        int a = input[last] - '0';
        return smallAns * 10 + a;
        }
        int stringToNumber(char input[])
        {
        int len = length(input);
        return stringToNumber(input, len - 1);
        }
       int main() {
            char input[50];
            cin >> input;
            cout << stringToNumber(input) << endl;
        }
