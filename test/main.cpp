#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int q;
    cin >> n >> q;

    vector <vector<int>> v(n);

    int element_count;
    for (int i = 0; i<n; i++){
       cin >> element_count;
       vector<int> temp(element_count);
       for(int j = 0; j< element_count; j++){
           int add;
           cin >> add;
           temp[j] = add;
       }
       v[i] = temp;

    }

   /* for(vector<int> row: v){
        for(int val: row){
            cout << val << " " << flush;
        }
        cout << endl;
    }
*/
    int chosen_vec;
    int chosen_element;

   for (int k =0; k<q; k++){
        cin >> chosen_vec >> chosen_element;
        cout << v[chosen_vec][chosen_element] << endl;

   }
    return 0;
}