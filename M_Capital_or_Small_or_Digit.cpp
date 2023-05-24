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

#include <stdio.h>

using namespace std;

int main()
{

    char input;
    cin >> input;

    // cout << isdigit(input);
    // isdigit(input) ? cout << "IS DIGIT" :
    // isupper(input) ? cout << "ALPHA" <<endl << cout << "IS CAPITAL": cout << "ALPHA";

    if (isdigit(input))
    {
        cout << "IS DIGIT";
    }
    else
    {
        if (isupper(input))
        {
            cout << "ALPHA" << endl
                 << "IS CAPITAL";
        }
        else
        {
            cout << "ALPHA" << endl
                 << "IS SMALL";
        }
    }

    return 0;
}