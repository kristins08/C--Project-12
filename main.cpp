#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    int values[m][n];
    copy_n(istream_iterator<int>(cin), m * n, values[0])

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
}    

