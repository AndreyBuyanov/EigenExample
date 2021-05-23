#include <iostream>

#include <Eigen/Dense>

int main (int argc, char *argv[]){
    Eigen::MatrixXf m(2, 2);
    m << 1, 2, 3, 4;
    Eigen::VectorXf v(2);
    v << -1, 1;
    auto r = m * v;
    std::cout << r(0) << " " << r(1) << std::endl;
    return 0;
}
