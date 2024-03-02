#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ApplicationLauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATIONLAUNCHER_H
#define UI_APPLICATIONLAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplicationLauncher
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QListView *applicationsView;
    QCheckBox *showCB;
    QDialogButtonBox *kdialogbuttonbox;

    void setupUi(QWidget *ApplicationLauncher)
    {
        if (ApplicationLauncher->objectName().isEmpty())
            ApplicationLauncher->setObjectName(QString::fromUtf8("ApplicationLauncher"));
        ApplicationLauncher->resize(495, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApplicationLauncher->sizePolicy().hasHeightForWidth());
        ApplicationLauncher->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ApplicationLauncher);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(ApplicationLauncher);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("The following applications where just installed, click on them to launch:"));
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        applicationsView = new QListView(ApplicationLauncher);
        applicationsView->setObjectName(QString::fromUtf8("applicationsView"));
        applicationsView->setFocusPolicy(Qt::NoFocus);
        applicationsView->setStyleSheet(QString::fromUtf8("QListView {\n"
"background: transparent;\n"
"};"));
        applicationsView->setFrameShape(QFrame::NoFrame);
        applicationsView->setFrameShadow(QFrame::Plain);
        applicationsView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        applicationsView->setProperty("showDropIndicator", QVariant(false));
        applicationsView->setIconSize(QSize(32, 32));
        applicationsView->setWordWrap(true);

        gridLayout->addWidget(applicationsView, 1, 0, 1, 2);

        showCB = new QCheckBox(ApplicationLauncher);
        showCB->setObjectName(QString::fromUtf8("showCB"));

        gridLayout->addWidget(showCB, 2, 0, 1, 1);

        kdialogbuttonbox = new QDialogButtonBox(ApplicationLauncher);
        kdialogbuttonbox->setObjectName(QString::fromUtf8("kdialogbuttonbox"));
        kdialogbuttonbox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(kdialogbuttonbox, 2, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label->setBuddy(applicationsView);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ApplicationLauncher);

        QMetaObject::connectSlotsByName(ApplicationLauncher);
    } // setupUi

    void retranslateUi(QWidget *ApplicationLauncher)
    {
        showCB->setText(tr2i18n("Do not show this dialog again", nullptr));
        (void)ApplicationLauncher;
    } // retranslateUi

};

namespace Ui {
    class ApplicationLauncher: public Ui_ApplicationLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPLICATIONLAUNCHER_H

