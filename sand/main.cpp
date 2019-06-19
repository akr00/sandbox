#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> ints;
    stringstream ss(str);

    int runs = (str.length() +1)/2;
    cout << runs << endl;
    for(int i =0;i< runs; i++){
        string temp;
        if ( i = runs-1){
            getline(ss, temp);
        } else{
            getline(ss, temp, ',');
        }
        int in = stoi(temp);
        ints.push_back(in);
    }




    return ints;
    //
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}