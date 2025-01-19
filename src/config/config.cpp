// base Header
#include "./config.h"

// feature Header
#include "../components/wrapperAbstract.h"
#include "../components/font/font.h"
#include "../components/paragraph/paragraph.h"
#include "../components/space/space.h"
#include "../components/styles/styles.h"

// libraries
#include <string>

Config::Config(std::string &snippit)
{
    WrapperAbstractBase *font = new Font::IFontWrap();
    WrapperAbstractBase *paragraph = new Paragraph::IParagraphWrap();
    WrapperAbstractBase *space = new Space::ISpaceWrap();
    WrapperAbstractBase *styles = new Styles::IStylesWrap();
    baseVector = { font,
                   paragraph,
                   space,
                   styles };
}