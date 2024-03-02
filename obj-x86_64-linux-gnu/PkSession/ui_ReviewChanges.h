#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ReviewChanges.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWCHANGES_H
#define UI_REVIEWCHANGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "CategorizedView.h"

QT_BEGIN_NAMESPACE

class Ui_ReviewChanges
{
public:
    QGridLayout *gridLayout;
    CategorizedView *packageView;

    void setupUi(QWidget *ReviewChanges)
    {
        if (ReviewChanges->objectName().isEmpty())
            ReviewChanges->setObjectName(QString::fromUtf8("ReviewChanges"));
        ReviewChanges->resize(400, 300);
        gridLayout = new QGridLayout(ReviewChanges);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, -1);
        packageView = new CategorizedView(ReviewChanges);
        packageView->setObjectName(QString::fromUtf8("packageView"));
        packageView->setMouseTracking(true);
        packageView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        packageView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout->addWidget(packageView, 0, 0, 1, 1);


        retranslateUi(ReviewChanges);

        QMetaObject::connectSlotsByName(ReviewChanges);
    } // setupUi

    void retranslateUi(QWidget *ReviewChanges)
    {
        (void)ReviewChanges;
    } // retranslateUi

};

namespace Ui {
    class ReviewChanges: public Ui_ReviewChanges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // REVIEWCHANGES_H

