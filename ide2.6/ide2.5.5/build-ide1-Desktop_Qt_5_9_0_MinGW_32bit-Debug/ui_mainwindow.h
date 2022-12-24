/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionxianjian;
    QAction *actioniuhh;
    QAction *actionsde;
    QAction *actionderf;
    QAction *actionAD;
    QAction *actionAD_2;
    QAction *actionADA;
    QAction *actionhjjj;
    QAction *actionde;
    QAction *actiongj;
    QAction *actiongj_2;
    QAction *actiongy;
    QAction *actionhui;
    QAction *actionjui;
    QAction *actionfgh;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionShear;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionUndo;
    QAction *actionRenew;
    QAction *actionRun;
    QAction *actionjjj;
    QAction *actionsw;
    QAction *actionss;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_R;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionxianjian = new QAction(MainWindow);
        actionxianjian->setObjectName(QStringLiteral("actionxianjian"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../picture/\345\276\256\344\277\241\345\233\276\347\211\207_20220827173454.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionxianjian->setIcon(icon);
        actioniuhh = new QAction(MainWindow);
        actioniuhh->setObjectName(QStringLiteral("actioniuhh"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../picture/\345\276\256\344\277\241\345\233\276\347\211\207_20220827173536.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actioniuhh->setIcon(icon1);
        actionsde = new QAction(MainWindow);
        actionsde->setObjectName(QStringLiteral("actionsde"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../picture/\344\277\235\345\255\230.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionsde->setIcon(icon2);
        actionderf = new QAction(MainWindow);
        actionderf->setObjectName(QStringLiteral("actionderf"));
        actionAD = new QAction(MainWindow);
        actionAD->setObjectName(QStringLiteral("actionAD"));
        actionAD->setIcon(icon2);
        actionAD_2 = new QAction(MainWindow);
        actionAD_2->setObjectName(QStringLiteral("actionAD_2"));
        actionADA = new QAction(MainWindow);
        actionADA->setObjectName(QStringLiteral("actionADA"));
        actionhjjj = new QAction(MainWindow);
        actionhjjj->setObjectName(QStringLiteral("actionhjjj"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../picture/\346\222\244\351\224\200.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionhjjj->setIcon(icon3);
        actionde = new QAction(MainWindow);
        actionde->setObjectName(QStringLiteral("actionde"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../picture/\346\201\242\345\244\215.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionde->setIcon(icon4);
        actiongj = new QAction(MainWindow);
        actiongj->setObjectName(QStringLiteral("actiongj"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../picture/\345\211\252\345\210\207.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actiongj->setIcon(icon5);
        actiongj_2 = new QAction(MainWindow);
        actiongj_2->setObjectName(QStringLiteral("actiongj_2"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../picture/\345\244\215\345\210\266.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actiongj_2->setIcon(icon6);
        actiongy = new QAction(MainWindow);
        actiongy->setObjectName(QStringLiteral("actiongy"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../picture/\347\262\230\350\264\264.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actiongy->setIcon(icon7);
        actionhui = new QAction(MainWindow);
        actionhui->setObjectName(QStringLiteral("actionhui"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../picture/\346\237\245\346\211\276.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionhui->setIcon(icon8);
        actionjui = new QAction(MainWindow);
        actionjui->setObjectName(QStringLiteral("actionjui"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("../picture/\346\233\277\346\215\242.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionjui->setIcon(icon9);
        actionfgh = new QAction(MainWindow);
        actionfgh->setObjectName(QStringLiteral("actionfgh"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setIcon(icon2);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setIcon(icon7);
        actionShear = new QAction(MainWindow);
        actionShear->setObjectName(QStringLiteral("actionShear"));
        actionShear->setIcon(icon5);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionFind->setIcon(icon8);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QStringLiteral("actionReplace"));
        actionReplace->setIcon(icon9);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionUndo->setIcon(icon3);
        actionRenew = new QAction(MainWindow);
        actionRenew->setObjectName(QStringLiteral("actionRenew"));
        actionRenew->setIcon(icon4);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName(QStringLiteral("actionRun"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("../picture/\350\277\220\350\241\214.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRun->setIcon(icon10);
        actionjjj = new QAction(MainWindow);
        actionjjj->setObjectName(QStringLiteral("actionjjj"));
        actionjjj->setIcon(icon10);
        actionsw = new QAction(MainWindow);
        actionsw->setObjectName(QStringLiteral("actionsw"));
        actionss = new QAction(MainWindow);
        actionss->setObjectName(QStringLiteral("actionss"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("../../ide2.3.3/picture/\347\274\226\350\257\221.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionss->setIcon(icon11);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 17));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_R = new QMenu(menuBar);
        menu_R->setObjectName(QStringLiteral("menu_R"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_R->menuAction());
        menu_F->addAction(actionxianjian);
        menu_F->addAction(actioniuhh);
        menu_F->addSeparator();
        menu_F->addAction(actionAD);
        menu_F->addAction(actionAD_2);
        menu_F->addSeparator();
        menu_F->addAction(actionADA);
        menu_F->addSeparator();
        menu_E->addAction(actionhjjj);
        menu_E->addAction(actionde);
        menu_E->addSeparator();
        menu_E->addAction(actiongj);
        menu_E->addAction(actiongj_2);
        menu_E->addAction(actiongy);
        menu_E->addSeparator();
        menu_E->addAction(actionhui);
        menu_E->addAction(actionjui);
        menu_E->addSeparator();
        menu_R->addAction(actionss);
        menu_R->addSeparator();
        menu_R->addAction(actionjjj);
        menu_R->addSeparator();
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionShear);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind);
        mainToolBar->addAction(actionReplace);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRenew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionRun);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionxianjian->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\346\234\254 ", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionxianjian->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\346\234\254 ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionxianjian->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actioniuhh->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actioniuhh->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266 ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actioniuhh->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionsde->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230 CTRL+S", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionsde->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionderf->setText(QApplication::translate("MainWindow", "derf", Q_NULLPTR));
        actionAD->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAD->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAD_2->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAD_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionADA->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionADA->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionhjjj->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionhjjj->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionde->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionde->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiongj->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiongj->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiongj_2->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiongj_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actiongy->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actiongy->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionhui->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276 ", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionhui->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionjui->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionjui->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionfgh->setText(QString());
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShear->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShear->setToolTip(QApplication::translate("MainWindow", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionFind->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionFind->setToolTip(QApplication::translate("MainWindow", "\346\237\245\346\211\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionReplace->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionReplace->setToolTip(QApplication::translate("MainWindow", "\346\233\277\346\215\242", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("MainWindow", "\346\222\244\351\224\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRenew->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRenew->setToolTip(QApplication::translate("MainWindow", "\346\201\242\345\244\215", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionRun->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRun->setToolTip(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionjjj->setText(QApplication::translate("MainWindow", "\350\277\220\350\241\214", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionjjj->setShortcut(QApplication::translate("MainWindow", "R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionsw->setText(QApplication::translate("MainWindow", "sw", Q_NULLPTR));
        actionss->setText(QApplication::translate("MainWindow", "\347\274\226\350\257\221", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionss->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210F)", Q_NULLPTR));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210E\357\274\211", Q_NULLPTR));
        menu_R->setTitle(QApplication::translate("MainWindow", "\350\277\220\350\241\214\357\274\210R\357\274\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
