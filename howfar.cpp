/*
GitHub :https://github.com/niirmaaltwaatii/cpp

Question :-

Task: 
Evaluate how many blocks you will have to walk if you are given a representation of your street where H represents your house, P represents the pond, and every B represents a block in between the two.

Input Format: 
A string of letters representing your house, the pond, and blocks on your street.

Output Format: 
An integer value that represents the number of blocks between your house and the pond.

Sample Input: 
BBHBBBBPBBB

Sample Output: 
4

*/

#include <iostream>
using namespace std;

int bCount(string map) {
    int blocks = 0;
    int houseIndx = map.find('H');
    int pondIndx = map.find('P');
    
    if(pondIndx < houseIndx ){
        for(int i = pondIndx+1 ; i <= houseIndx-1 ; i++)
        blocks += 1;
    }
    if(pondIndx > houseIndx ){
    for(int i = houseIndx+1 ; i <= pondIndx-1 ; i++)
        blocks += 1;
    }
    
    return blocks;
}

int main() {
    string map;
    cin >> map;
    cout << bCount(map);
    return 0;
}
