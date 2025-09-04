#include <bits/stdc++.h>
using namespace std;

// Overloads for printing different types
template <typename T>
string to_string_custom(const T &x);

template <typename A, typename B>
string to_string_custom(const pair<A, B> &p)
{
    return "(" + to_string_custom(p.first) + ", " + to_string_custom(p.second) + ")";
}

template <typename T>
string to_string_custom(const vector<T> &v)
{
    string res = "{";
    for (int i = 0; i < (int)v.size(); i++)
    {
        if (i)
            res += ", ";
        res += to_string_custom(v[i]);
    }
    res += "}";
    return res;
}

template <typename T>
string to_string_custom(const set<T> &s)
{
    string res = "{";
    bool first = true;
    for (auto &x : s)
    {
        if (!first)
            res += ", ";
        res += to_string_custom(x);
        first = false;
    }
    res += "}";
    return res;
}

template <typename K, typename V>
string to_string_custom(const map<K, V> &m)
{
    string res = "{";
    bool first = true;
    for (auto &kv : m)
    {
        if (!first)
            res += ", ";
        res += to_string_custom(kv.first) + ": " + to_string_custom(kv.second);
        first = false;
    }
    res += "}";
    return res;
}

// Fallback for types that already have std::to_string
template <typename T>
string to_string_custom(const T &x)
{
    if constexpr (is_same_v<T, string>)
        return '"' + x + '"';
    else if constexpr (is_same_v<T, char>)
        return string(1, x);
    else
        return std::to_string(x);
}

// Variadic debug printer
void debug_out() { cerr << endl; }

template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T)
{
    cerr << " " << to_string_custom(H);
    debug_out(T...);
}

// Debug macro: prints variable names and values
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
