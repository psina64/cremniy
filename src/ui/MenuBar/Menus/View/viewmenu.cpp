#include "viewmenu.h"
#include "ui/MenuBar/menufactory.h"

static bool registered = [](){
    MenuFactory::instance().registerMenu("3", [](){
        return new ViewMenu();
    });
    return true;
}();

ViewMenu::ViewMenu() : BaseMenu("View") {
    m_wordWrap = new QAction("Word Wrap", this);
    m_wordWrap->setCheckable(true);
    m_wordWrap->setChecked(true);
    this->addAction(m_wordWrap);
}
