#ifndef FEATURE_ABSTRACT_H
#define FEATURE_ABSTRACT_H

#include <bits/stdc++.h>
using namespace std;

class FeatureAbstractBase {
protected:
    virtual vector<pair<int, int>> extractor(string &snippet) = 0;
public:
    virtual string implementor(string &snippet) = 0;
    virtual ~FeatureAbstractBase() = default; 
};

#endif
