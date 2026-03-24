#ifndef VIEWMENU_H
#define VIEWMENU_H

#include "ui/MenuBar/basemenu.h"

class ViewMenu : public BaseMenu
{
    Q_OBJECT
private:
    QAction* m_wordWrap;
public:
    ViewMenu();
};

#endif // VIEWMENU_H
