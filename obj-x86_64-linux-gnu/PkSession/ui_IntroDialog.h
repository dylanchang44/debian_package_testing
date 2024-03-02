#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'IntroDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRODIALOG_H
#define UI_INTRODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntroDialog
{
public:
    QGridLayout *gridLayout;
    QListView *listView;
    QLabel *descriptionL;

    void setupUi(QWidget *IntroDialog)
    {
        if (IntroDialog->objectName().isEmpty())
            IntroDialog->setObjectName(QString::fromUtf8("IntroDialog"));
        IntroDialog->resize(457, 130);
        gridLayout = new QGridLayout(IntroDialog);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(IntroDialog);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setMinimumSize(QSize(350, 0));
        listView->setFocusPolicy(Qt::NoFocus);
        listView->setStyleSheet(QString::fromUtf8("QListView {\n"
"background: transparent;\n"
"};"));
        listView->setFrameShape(QFrame::NoFrame);
        listView->setFrameShadow(QFrame::Plain);
        listView->setDefaultDropAction(Qt::LinkAction);
        listView->setIconSize(QSize(32, 32));
        listView->setSpacing(5);
        listView->setWordWrap(true);

        gridLayout->addWidget(listView, 1, 0, 2, 1);

        descriptionL = new QLabel(IntroDialog);
        descriptionL->setObjectName(QString::fromUtf8("descriptionL"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionL->sizePolicy().hasHeightForWidth());
        descriptionL->setSizePolicy(sizePolicy);
        descriptionL->setWordWrap(true);
        descriptionL->setMargin(5);
        descriptionL->setIndent(15);

        gridLayout->addWidget(descriptionL, 3, 0, 1, 1);


        retranslateUi(IntroDialog);

        QMetaObject::connectSlotsByName(IntroDialog);
    } // setupUi

    void retranslateUi(QWidget *IntroDialog)
    {
        descriptionL->setText(tr2i18n("TextLabel", nullptr));
        (void)IntroDialog;
    } // retranslateUi

};

namespace Ui {
    class IntroDialog: public Ui_IntroDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INTRODIALOG_H

