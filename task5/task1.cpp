#include <iostream>
#include <vector>
#include <tuple>

std::vector<std::tuple<int, int, int>> findPythagoreanTriples(int n) {
    std::vector<std::tuple<int, int, int>> triples;

    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) {
            int c_squared = a * a + b * b;
            int c = sqrt(c_squared);
            if (c * c == c_squared && c <= n) {
                triples.push_back(std::make_tuple(a, b, c));
            }
        }
    }

    return triples;
}

int main() {
    int n;
    std::cout << "Введіть максимальне значення n: ";
    std::cin >> n;

    std::vector<std::tuple<int, int, int>> triples = findPythagoreanTriples(n);

    std::cout << "Знайдені трійки (a, b, c), що задовольняють рівняння a^2 + b^2 = c^2:\n";
    for (const auto& triple : triples) {
        std::cout << "(" << std::get<0>(triple) << ", " << std::get<1>(triple) << ", " << std::get<2>(triple) << ")\n";
    }

    return 0;
}
