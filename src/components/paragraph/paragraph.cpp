//base header
#include "./paragraph.h"

//feature headers
#include "./ol/index.h"
#include "./shift/index.h"
#include "./ul/index.h"
namespace Paragraph
{
    class IParagraphWrap
    {
        std::vector<IBase *> featureVector;
        IParagraphWrap(std::string &snippit)
        {
            IBase *ol = new Ol();
            IBase *shift = new Shift();
            IBase *ul = new Ul();
            featureVector = {ol, shift, ul};
        }
    };
}