std::vector<int> vec = {1, 2, 3, 4, 5};

for (size_t i = 0; i < vec.size(); ++i) { // Corrected iteration
  std::cout << vec[i] << " ";
}

std::cout << std::endl;

//Alternatively, using iterators:
for (int x : vec) {
    std::cout << x << " ";
}
std::cout << std::endl;