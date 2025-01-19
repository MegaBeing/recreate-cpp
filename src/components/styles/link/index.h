#include "../styles.h"
#pragma once
namespace Styles
{
    class Link : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override;

    public:
        std::string implementor(std::string &snippet) override;
    };
}
