std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { //Corrected: Loop until i is strictly less than vec.size()
    std::cout << vec[i] << std::endl;
}

std::vector<int> vec2 = {1,2,3};
for(int i = vec2.size()-1; i >= 0; --i) { // This is okay
    std::cout << vec2[i] << std::endl;
}