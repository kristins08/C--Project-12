#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    // DO NOT MODIFY THIS CODE!!!
    int m, n;
    cin >> m;
    cin >> n;
    int values[m][n];
    copy_n(istream_iterator<int>(cin), m * n, values[0]);
    // END DO NOT MODIFY
    // TODO Read in value to find
    // TODO Find the number of occurrences of that value within the 2dArray `values'
    /* 2dArray `values' has dimensions `m' and `n'
     * Ex.
     * m = 2
     * n = 3
     * values = {
     *     {15, 20, 18},
     *     {20, 32, 54}
     * }
     *
     * If the value `20' were entered
     * Your program should produce the output 2
     */

    //Your code goes Here
    int countNumber;
    cin >> countNumber;
    int occurences = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(countNumber == values[i][j]){
                occurences++;
            }
        }
    }
    
    cout<< countNumber << " occurs " << occurences << " times." << endl;
    
    return 0; 
}    //end of main function

