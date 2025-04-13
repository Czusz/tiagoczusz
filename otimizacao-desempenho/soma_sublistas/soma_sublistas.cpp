#include <iostream>
#include <vector>

using namespace std;

int soma_sublistas(const vector<int>& arr, int k) {
    int max_sum = 0, current_sum = 0;
    
    // Soma da primeira janela de tamanho k
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }
    max_sum = current_sum;
    
    // Move a janela para a direita, somando o novo elemento e subtraindo o elemento anterior
    for (int i = k; i < arr.size(); i++) {
        current_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, current_sum);
    }
    
    return max_sum;
}

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Soma máxima de sublista de tamanho " << k << ": " << soma_sublistas(arr, k) << endl;
    return 0;
}
