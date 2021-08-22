#ifndef ZC_GUI_WINDOW_H
#define ZC_GUI_WINDOW_H

#include "widget.h"
#include <memory>
#include <string>

namespace gui
{

class Window: public Widget
{
public:
    Window();
    void setTitle(const char* newTitle);
    void setContent(std::shared_ptr<Widget> newContent);
    template<typename T>
    void onClose(T m)
    {
        closeMessage=static_cast<int>(m);
    }

private:
    std::shared_ptr<Widget> content;
    std::string title;
    int closeMessage;

    void arrange(int contX, int contY, int contW, int contH) override;
    void realize(DialogRunner& runner) override;
    int getMessage() override;
};

}

#endif
