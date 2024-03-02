#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'Requirements.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUIREMENTS_H
#define UI_REQUIREMENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Requirements
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QTreeView *packageView;
    QCheckBox *confirmCB;
    QHBoxLayout *horizontalLayout;
    QLabel *downloadI;
    QLabel *downloadT;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Requirements)
    {
        if (Requirements->objectName().isEmpty())
            Requirements->setObjectName(QString::fromUtf8("Requirements"));
        Requirements->resize(497, 359);
        gridLayout = new QGridLayout(Requirements);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(Requirements);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        packageView = new QTreeView(Requirements);
        packageView->setObjectName(QString::fromUtf8("packageView"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(packageView->sizePolicy().hasHeightForWidth());
        packageView->setSizePolicy(sizePolicy1);
        packageView->setMinimumSize(QSize(200, 0));
        packageView->setFocusPolicy(Qt::NoFocus);
        packageView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        packageView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        packageView->setProperty("showDropIndicator", QVariant(false));
        packageView->setAlternatingRowColors(true);
        packageView->setSelectionMode(QAbstractItemView::NoSelection);
        packageView->setRootIsDecorated(false);
        packageView->setItemsExpandable(false);
        packageView->setExpandsOnDoubleClick(false);
        packageView->header()->setDefaultSectionSize(50);

        gridLayout->addWidget(packageView, 1, 1, 1, 1);

        confirmCB = new QCheckBox(Requirements);
        confirmCB->setObjectName(QString::fromUtf8("confirmCB"));

        gridLayout->addWidget(confirmCB, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        downloadI = new QLabel(Requirements);
        downloadI->setObjectName(QString::fromUtf8("downloadI"));
        downloadI->setText(QString::fromUtf8("icon"));

        horizontalLayout->addWidget(downloadI);

        downloadT = new QLabel(Requirements);
        downloadT->setObjectName(QString::fromUtf8("downloadT"));
        downloadT->setText(QString::fromUtf8("download size"));

        horizontalLayout->addWidget(downloadT);

        buttonBox = new QDialogButtonBox(Requirements);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(Requirements);
        QObject::connect(buttonBox, SIGNAL(accepted()), Requirements, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Requirements, SLOT(reject()));

        QMetaObject::connectSlotsByName(Requirements);
    } // setupUi

    void retranslateUi(QDialog *Requirements)
    {
        label->setText(tr2i18n("Additional changes are required to complete the task", nullptr));
        confirmCB->setText(tr2i18n("Do not confirm when installing or updating additional packages", nullptr));
        (void)Requirements;
    } // retranslateUi

};

namespace Ui {
    class Requirements: public Ui_Requirements {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REQUIREMENTS_H

