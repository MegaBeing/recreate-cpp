#ifndef STYLES_H
#define STYLES_H

// defined headers
#include "../featureAbstract.h"
#include "../wrapperAbstract.h"

// libraries
#include <vector>
#include <string>
#include <utility>

namespace Styles
{

    class IBase : public FeatureAbstractBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override;

    public:
        std::string implementor(std::string &snippet) override;
    };

    class IStylesWrap : public WrapperAbstractBase
    {
    protected:
        std::vector<IBase *> featureVector;
    };

}

#endif