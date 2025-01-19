#include "../paragraph.h"
#pragma once
namespace Paragraph
{
    class Shift : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippet) override;

    public:
        std::string implementor(std::string &snippet) override;
    };
}
