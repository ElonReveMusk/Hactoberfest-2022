
# Return Permutations - String



#### Given a string S, find and return all the possible permutations of the input string.

##### Note 1 : The order of permutations is not important.

##### Note 2 : If original string contains duplicate characters, permutations will also be duplicates.

##### Input Format :

```
String S

```

##### Output Format :

```
All permutations (in different lines)

```

##### Sample Input :

```
abc

```

##### Sample Output :

```
abc
acb
bac
bca
cab
cba
```
## SOLUTION(BY FINDING OUT BD PAIRS FOR ABD, THAT IS DB AND BD AND AFTER THAT ADDING A IN FRONT OF IT.):

        #include <iostream>
        #include <string>
        using namespace std;
    #include <string>
    using namespace std;
    
    int returnPermutations(string input, string output[]){
       	/* Don't write main() function.
    	 * Don't read input, it is passed as function argument.
    	 * Print output as specified in the question
    	*/
        if(input.size()==0)
        {
           output[0]="";
            return 1;
        }
         string temp[10000];
        int n = 0;
        for(int i=0;i<input.size();i++)
        {
            string a = input.substr(0,i);
            string b= input.substr(i+1);
            string c = a+b;
            int z = returnPermutations(c,temp);
            for(int j=0;j<z;j++)
            {
                output[n] = input[i] + temp[j]; 
                n++;
            }
        }
        return n;
     }    
    
        int main(){
            string input;
            cin >> input;
            string output[10000];
            int count = returnPermutations(input, output);
            for(int i = 0; i < count && i < 10000; i++){
                cout << output[i] << endl;
            }
            return 0;
        }

## SOLUTION (CN APPROACH):

    #include <string>
    using namespace std;
    int returnPermutations(string input, string output[]){
    if(input.length() == 0){
    output[0] = "";
    return 1;
    }
    string smallOutput[10000];
    int smallSize = returnPermutations(input.substr(1), smallOutput);
    int k = 0;
    for(int i = 0; i < smallSize; i++){
    for(int j = 0; j <=smallOutput[i].length(); j++){
    output[k++] = smallOutput[i].substr(0,j) + input[0] + smallOutput[i].substr(j);
    }
    }
    return k;
    }


## SOLUTION(BY INSERTING A IN DIFF POS):

    #include <string>
    using namespace std;
    
    int returnPermutations(string input, string output[]){
       	/* Don't write main() function.
    	 * Don't read input, it is passed as function argument.
    	 * Print output as specified in the question
    	*/
        if(input.size() == 0){
            output[0] = "";
            return 1;
        }
        
        string temp[10000];
        int n = returnPermutations(input.substr(1) , temp);
        int k = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<=temp[i].length(); j++){//<=n 
            string a = temp[i].substr(0,j);
            string c = temp[i].substr(j);
            string d = a+input[0]+c;
            output[k++] = d;
            }
        }
     
        return k;
    }
