# Replace pi (recursive)


#### Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

##### Sample Input 1 :

```
xpix

```

##### Sample Output :

```
x3.14x

```

##### Sample Input 2 :

```
pipi

```

##### Sample Output :

```
3.143.14

```

##### Sample Input 3 :

```
pip

```

##### Sample Output :

```
3.14p
```

## SOLUTION:

    #include <iostream>
    using namespace std;
    
    // Change in the given string itself. So no need to return or print anything
    #include<cstring>
       void removePi(char input[] ,int  length){
        if(input[0] == '\0'){
            return;
        }
        
        if(input[0] == 'p' && input[1] == 'i'){
        input[0] = '3';
        input[1] = '.';
        for(int i = length + 2; i>1; i--){
            input[i] = input[i-2];
        }
            input[2] = '1';
            input[3] = '4';
        
         return removePi(input + 4, length + 2);
        }
        else{
        return removePi(input + 1 , length);
        }
    
    }
    void replacePi(char input[]) {
        int length = strlen(input);
        removePi(input, length);
    }
    
    
    
    
    int main() {
        char input[10000];
        cin.getline(input, 10000);
        replacePi(input);
        cout << input << endl;
    }

## SOLUTION (CN APPROACH):

    int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) {
    len++;
    }
    return len;
    }
    void replacePi(char input[], int start) {
    if(input[start] == '\0' || input[start+1] == '\0') {
    return;
    }
    replacePi(input, start+1);
    if(input[start] == 'p' && input[start+1] == 'i') {
    int len = length(input);
    input[len+2] = '\0';
    for(int i = len-1; i >= start+2; i--) {
    input[i+2] = input[i];
    }
    input[start] = '3';
    input[start+1] = '.';
    input[start+2] = '1';
    input[start+3] = '4';
    }
    }
    void replacePi(char input[]) {
    replacePi(input, 0);
    }
