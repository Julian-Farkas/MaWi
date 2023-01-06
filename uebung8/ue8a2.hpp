#include <vector>
#include <iostream>

void printVector( const std::vector<double>& v)
{
    for (double i : v) std::cout << i << " ";
    std::cout << std::endl;
}

double max( std::vector<double>& v)
{
    double max = 0.0;

    for (double i : v)
    {
        if (i > max) max = i;
    }

    return max;
}

double min( std::vector<double>& v)
{
    double min = v[0];

    for (double i : v)
    {
        if (i < min) min = i;
    }

    return min;
}

double scalarProdukt( std::vector<double>& v1, std::vector<double>& v2)
{
    double sum = 0.0;

    for (int i = 0; i < v1.size(); ++i)
    {
        sum += v1[i] + v2[i];
    }

    return sum;
}

//nochmal nachfragen, wegen "ineffizienz" (?)
std::vector<double> product( std::vector<double>& v, double d)
{
    std::vector<double> productV;
    for (int i = 0; i < v.size(); ++i)
    {
        productV.push_back(v[i] * d);
    }

    return productV;
}