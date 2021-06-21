#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "widgets.hpp"

class Application
{
protected:
    std::vector<Widget *> widgets;

public:
    Application();
    virtual ~Application(){} //virtuális destruktor, oda amibõl lehet h le fogunk származtatni
    void event_loop();
    void registerWidget(Widget *);
    virtual void action(std::string) = 0;
};

#endif // APPLICATION_HPP
