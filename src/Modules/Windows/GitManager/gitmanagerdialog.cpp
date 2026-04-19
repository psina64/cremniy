#include "gitmanagerdialog.h"

#include <QGuiApplication>
#include <QVBoxLayout>

#include "core/modules/ModuleManager.h"

static QString displayName() {
    return QCoreApplication::translate("GitManager", "Git");
};

static bool registered = []() {
    ModuleManager::instance().registerModule<WindowBase>(
        &displayName, "", []() { return new GitManagerDialog(); });
    return true;
}();

GitManagerDialog::GitManagerDialog(QWidget *parent) {
    setWindowTitle(tr("Git"));
    setModal(false);
    setMinimumWidth(620);
    setMinimumHeight(620);

    auto *root = new QVBoxLayout(this);
    root->setSpacing(8);
    root->setContentsMargins(10, 10, 10, 10);
}
