#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    constexpr int N = 1000000;
    
    // Инициализация вектора и списка
    std::vector<int> vec(N);
    std::list<int> lst(N);

    // Инициализация таймера
    auto start_vec = std::chrono::steady_clock::now();
    for (int i = 0; i < N; ++i) {
        vec.push_back(i);
    }
    auto end_vec = std::chrono::steady_clock::now();
    std::cout << "Time taken by std::vector: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_vec - start_vec).count() << " milliseconds" << std::endl;

    auto start_lst = std::chrono::steady_clock::now();
    for (int i = 0; i < N; ++i) {
        lst.push_back(i);
    }
    auto end_lst = std::chrono::steady_clock::now();
    std::cout << "Time taken by std::list: " << std::chrono::duration_cast<std::chrono::milliseconds>(end_lst - start_lst).count() << " milliseconds" << std::endl;

    return 0;
}
