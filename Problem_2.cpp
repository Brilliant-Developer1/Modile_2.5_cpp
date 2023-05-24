// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

int main()
{

    int input;
    cin >> input;

    int *array = new int[input];
    for (int i = 0; i < input; i++)
    {
        cin >> array[i];
    }

    int input_2;
    cin >> input_2;

    int array_2[input_2];

    for (int i = 0; i < input; i++)
    {
        array_2[i] = array[i];
    }
    // array_2[5] = 6;
    // cout << array_2[5];
    delete[] array;
    for (int i = input; i < input_2; i++)
    {
        cin >> array_2[i];
    }

    for (int i = 0; i < input_2; i++)
    {
        cout << array_2[i] << " ";
    }

    return 0;
}