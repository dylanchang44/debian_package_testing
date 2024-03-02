#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'UpdateDetails.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDETAILS_H
#define UI_UPDATEDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateDetails
{
public:
    QGridLayout *gridLayout;
    QToolButton *hideTB;
    QTextBrowser *descriptionKTB;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UpdateDetails)
    {
        if (UpdateDetails->objectName().isEmpty())
            UpdateDetails->setObjectName(QString::fromUtf8("UpdateDetails"));
        UpdateDetails->resize(627, 378);
        gridLayout = new QGridLayout(UpdateDetails);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        hideTB = new QToolButton(UpdateDetails);
        hideTB->setObjectName(QString::fromUtf8("hideTB"));
        hideTB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        hideTB->setAutoRaise(true);

        gridLayout->addWidget(hideTB, 0, 0, 1, 1);

        descriptionKTB = new QTextBrowser(UpdateDetails);
        descriptionKTB->setObjectName(QString::fromUtf8("descriptionKTB"));
        descriptionKTB->setFrameShape(QFrame::NoFrame);
        descriptionKTB->setFrameShadow(QFrame::Plain);
        descriptionKTB->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(descriptionKTB, 0, 1, 2, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(UpdateDetails);

        QMetaObject::connectSlotsByName(UpdateDetails);
    } // setupUi

    void retranslateUi(QWidget *UpdateDetails)
    {
        hideTB->setText(tr2i18n("Hide", nullptr));
        (void)UpdateDetails;
    } // retranslateUi

};

namespace Ui {
    class UpdateDetails: public Ui_UpdateDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UPDATEDETAILS_H

