#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'InfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWIDGET_H
#define UI_INFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *iconL;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *descriptionLayout;
    QLabel *descriptionL;

    void setupUi(QWidget *InfoWidget)
    {
        if (InfoWidget->objectName().isEmpty())
            InfoWidget->setObjectName(QString::fromUtf8("InfoWidget"));
        InfoWidget->resize(457, 130);
        gridLayout = new QGridLayout(InfoWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        iconL = new QLabel(InfoWidget);
        iconL->setObjectName(QString::fromUtf8("iconL"));
        iconL->setText(QString::fromUtf8("icon"));

        verticalLayout->addWidget(iconL);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        descriptionLayout = new QVBoxLayout();
        descriptionLayout->setObjectName(QString::fromUtf8("descriptionLayout"));
        descriptionL = new QLabel(InfoWidget);
        descriptionL->setObjectName(QString::fromUtf8("descriptionL"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(descriptionL->sizePolicy().hasHeightForWidth());
        descriptionL->setSizePolicy(sizePolicy);
        descriptionL->setText(QString::fromUtf8("description"));
        descriptionL->setWordWrap(true);
        descriptionL->setMargin(5);

        descriptionLayout->addWidget(descriptionL);


        gridLayout->addLayout(descriptionLayout, 0, 1, 1, 1);


        retranslateUi(InfoWidget);

        QMetaObject::connectSlotsByName(InfoWidget);
    } // setupUi

    void retranslateUi(QWidget *InfoWidget)
    {
        (void)InfoWidget;
    } // retranslateUi

};

namespace Ui {
    class InfoWidget: public Ui_InfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // INFOWIDGET_H

