#ifndef TEXTEDIT_HPP
#define TEXTEDIT_HPP

#include "widgets.hpp"
#include "graphics.hpp"

class TextEdit: public Widget
{
protected:
    std::string text_;

public:
    TextEdit(Application*, int, int, int, int, std::string);
    virtual void draw() override;
    virtual void handle(genv::event) override;
    virtual std::string value();
};

#endif // TEXTEDIT_HPP
