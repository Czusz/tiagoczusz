#include <iostream>
#include <vector>

using namespace std;

int busca_binaria(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    
    return -1;  // Elemento não encontrado
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int x = 5;
    int result = busca_binaria(arr, x);
    
    if (result != -1)
        cout << "Elemento encontrado no índice " << result << endl;
    else
        cout << "Elemento não encontrado" << endl;
    
    return 0;
}
