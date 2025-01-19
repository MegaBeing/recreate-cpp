#ifndef WRAPPER_ABSTRACT_H
#define WRAPPER_ABSTRACT_H
#include "./featureAbstract.h"
#include <vector>
#include <string>

class WrapperAbstractBase {
protected:
    std::vector<FeatureAbstractBase*> featureVector;
public:
    virtual ~WrapperAbstractBase();
};

#endif
