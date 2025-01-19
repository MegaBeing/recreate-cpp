#ifndef PARAGRAPH_H
#define PARAGRAPH_H

// defined headers
#include "../featureAbstract.h"
#include "../wrapperAbstract.h"

// libraries
#include <vector>
#include <string>
#include <utility>

namespace Paragraph
{

    class IBase : public FeatureAbstractBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override;

    public:
        std::string implementor(std::string &snippet) override;
    };

    class IParagraphWrap : public WrapperAbstractBase
    {
    protected:
        std::vector<IBase *> featureVector;
    };

}
#endif