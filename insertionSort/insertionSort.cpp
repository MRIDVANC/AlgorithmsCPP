#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& in_array) {
    for (size_t i = 1; i < in_array.size(); i++) {
        int current_value = in_array[i];
        size_t position = i; // size_t olarak değiştirildi

        while (position > 0 && in_array[position - 1] > current_value) {
            in_array[position] = in_array[position - 1];
            position = position - 1;
        }

        in_array[position] = current_value;
    }
}

int main() {
    std::vector<int> dizi(5);

    std::cout << "5 adet sayı giriniz:" << std::endl;
    for (int& num : dizi) {
        std::cin >> num;
    }

    insertion_sort(dizi);

    std::cout << "Sıralanmış Dizi:" << std::endl;
    for (int num : dizi) {
        std::cout << num << " ";
    }

    return 0;
}
