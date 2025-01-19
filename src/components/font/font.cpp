// base header
#include "./font.h"

// feature headers
#include "./bold/index.h"
#include "./italic/index.h"
#include "./underline/index.h"
namespace Font
{
    class IFontWrap
    {
        std::vector<IBase *> featureVector;
        IFontWrap(std::string &snippit)
        {
            IBase *bold = new Bold();
            IBase *italic = new Italic();
            IBase *underline = new Underline();
            featureVector = {bold, italic, underline};
        }
    };
}