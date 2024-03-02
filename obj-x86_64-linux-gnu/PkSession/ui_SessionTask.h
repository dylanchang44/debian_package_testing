#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'SessionTask.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONTASK_H
#define UI_SESSIONTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SessionTask
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *backgroundFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *titleL;
    QStackedWidget *stackedWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *SessionTask)
    {
        if (SessionTask->objectName().isEmpty())
            SessionTask->setObjectName(QString::fromUtf8("SessionTask"));
        SessionTask->resize(400, 300);
        verticalLayout = new QVBoxLayout(SessionTask);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(SessionTask);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        backgroundFrame = new QFrame(frame);
        backgroundFrame->setObjectName(QString::fromUtf8("backgroundFrame"));
        backgroundFrame->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(backgroundFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleL = new QLabel(backgroundFrame);
        titleL->setObjectName(QString::fromUtf8("titleL"));
        titleL->setText(QString::fromUtf8("Title description"));
        titleL->setWordWrap(true);
        titleL->setMargin(5);

        horizontalLayout_2->addWidget(titleL);


        horizontalLayout->addWidget(backgroundFrame);


        verticalLayout->addWidget(frame);

        stackedWidget = new QStackedWidget(SessionTask);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        buttonBox = new QDialogButtonBox(SessionTask);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SessionTask);

        QMetaObject::connectSlotsByName(SessionTask);
    } // setupUi

    void retranslateUi(QWidget *SessionTask)
    {
        (void)SessionTask;
    } // retranslateUi

};

namespace Ui {
    class SessionTask: public Ui_SessionTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SESSIONTASK_H

