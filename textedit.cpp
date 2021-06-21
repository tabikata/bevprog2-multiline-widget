#include "textedit.hpp"
#include "graphics.hpp"

using namespace genv;

TextEdit::TextEdit(Application* parent, int x, int y, int sx, int sy, std::string txt)
    : Widget(parent, x, y, sx, sy), text_(txt)
{}

void TextEdit::draw()
{
    gout << color(255, 255, 255) << move_to(_x, _y) << box(_size_x, _size_y)
            << color(0, 0, 0) << move_to(_x+5, _y+20) << text(text_);
}

void TextEdit::handle(event ev)
{
    if (ev.type == ev_key)
    {
        if (ev.keycode > 0 and ev.keycode < 256 and ev.keycode!=key_backspace)
        {
            text_ += ev.keycode;
        }
        else if (ev.keycode == key_backspace)
        {
            text_ = text_.substr(0, text_.length()-1);
        }
    }
}

std::string TextEdit::value()
{
    return text_;
}
