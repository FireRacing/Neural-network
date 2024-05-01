#include <iostream>
#include <fstream>
#include <vector>
#include <tools.hpp>

using namespace std;

struct hidden_layer{
vector<int> layer;
};

class neural_network{
private:

public:
    vector <int> input_layer;
    void establish_neural_network (int number_of_hidden_layers, int length_of_input_layer)
    {
        hidden_layer[number_of_hidden_layers];
        for (int i = 0; i < length_of_input_layer)
            input_layer.push_back(0);
    }
};
