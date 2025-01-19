#include "../font.h"

namespace Font
{
    class Underline : public IBase
    {
    protected:
        std::vector<std::pair<int, int>> extractor(std::string &snippit) override;

    public:
        std::string implementor(std::string &snippit) override;
    };
}