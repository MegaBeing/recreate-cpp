#include "../font.h"
#pragma once
namespace Font
{
    class Bold : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override;

    public:
        std::string implementor(std::string &snippet) override;
    };
}
