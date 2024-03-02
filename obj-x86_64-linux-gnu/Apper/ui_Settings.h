#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'Settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "KMessageWidget"
#include "kcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_2;
    KMessageWidget *messageWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    KComboBox *distroIntervalCB;
    QLabel *intervalL;
    KComboBox *intervalCB;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkUpdatesMobileCB;
    QCheckBox *checkUpdatesBatteryCB;
    QFrame *line;
    QLabel *autoInsL;
    KComboBox *autoCB;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *installUpdatesBatteryCB;
    QCheckBox *installUpdatesMobileCB;
    QFrame *line_2;
    QCheckBox *appLauncherCB;
    QCheckBox *autoConfirmCB;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QTreeView *originTV;
    QCheckBox *showOriginsCB;
    QSpacerItem *horizontalSpacer;
    QPushButton *editOriginsPB;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(498, 415);
        gridLayout_2 = new QGridLayout(Settings);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        messageWidget = new KMessageWidget(Settings);
        messageWidget->setObjectName(QString::fromUtf8("messageWidget"));

        gridLayout_2->addWidget(messageWidget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(Settings);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        distroIntervalCB = new KComboBox(widget);
        distroIntervalCB->setObjectName(QString::fromUtf8("distroIntervalCB"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, distroIntervalCB);

        intervalL = new QLabel(widget);
        intervalL->setObjectName(QString::fromUtf8("intervalL"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(intervalL->sizePolicy().hasHeightForWidth());
        intervalL->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, intervalL);

        intervalCB = new KComboBox(widget);
        intervalCB->setObjectName(QString::fromUtf8("intervalCB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(intervalCB->sizePolicy().hasHeightForWidth());
        intervalCB->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, intervalCB);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 0, 0, 3, 1);

        checkUpdatesMobileCB = new QCheckBox(widget);
        checkUpdatesMobileCB->setObjectName(QString::fromUtf8("checkUpdatesMobileCB"));

        gridLayout_4->addWidget(checkUpdatesMobileCB, 0, 1, 1, 1);

        checkUpdatesBatteryCB = new QCheckBox(widget);
        checkUpdatesBatteryCB->setObjectName(QString::fromUtf8("checkUpdatesBatteryCB"));

        gridLayout_4->addWidget(checkUpdatesBatteryCB, 1, 1, 1, 1);


        formLayout_2->setLayout(3, QFormLayout::SpanningRole, gridLayout_4);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, line);

        autoInsL = new QLabel(widget);
        autoInsL->setObjectName(QString::fromUtf8("autoInsL"));
        autoInsL->setEnabled(true);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, autoInsL);

        autoCB = new KComboBox(widget);
        autoCB->setObjectName(QString::fromUtf8("autoCB"));
        autoCB->setEnabled(true);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, autoCB);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 0, 2, 1);

        installUpdatesBatteryCB = new QCheckBox(widget);
        installUpdatesBatteryCB->setObjectName(QString::fromUtf8("installUpdatesBatteryCB"));

        gridLayout_5->addWidget(installUpdatesBatteryCB, 0, 1, 1, 1);

        installUpdatesMobileCB = new QCheckBox(widget);
        installUpdatesMobileCB->setObjectName(QString::fromUtf8("installUpdatesMobileCB"));

        gridLayout_5->addWidget(installUpdatesMobileCB, 1, 1, 1, 1);


        formLayout_2->setLayout(6, QFormLayout::SpanningRole, gridLayout_5);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(7, QFormLayout::SpanningRole, line_2);

        appLauncherCB = new QCheckBox(widget);
        appLauncherCB->setObjectName(QString::fromUtf8("appLauncherCB"));

        formLayout_2->setWidget(8, QFormLayout::SpanningRole, appLauncherCB);

        autoConfirmCB = new QCheckBox(widget);
        autoConfirmCB->setObjectName(QString::fromUtf8("autoConfirmCB"));

        formLayout_2->setWidget(9, QFormLayout::SpanningRole, autoConfirmCB);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Reset);

        verticalLayout->addWidget(buttonBox);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        originTV = new QTreeView(page_2);
        originTV->setObjectName(QString::fromUtf8("originTV"));
        originTV->setEditTriggers(QAbstractItemView::NoEditTriggers);
        originTV->setProperty("showDropIndicator", QVariant(false));
        originTV->setRootIsDecorated(false);
        originTV->setItemsExpandable(false);
        originTV->setSortingEnabled(true);
        originTV->setExpandsOnDoubleClick(false);

        gridLayout->addWidget(originTV, 0, 0, 1, 3);

        showOriginsCB = new QCheckBox(page_2);
        showOriginsCB->setObjectName(QString::fromUtf8("showOriginsCB"));

        gridLayout->addWidget(showOriginsCB, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        editOriginsPB = new QPushButton(page_2);
        editOriginsPB->setObjectName(QString::fromUtf8("editOriginsPB"));

        gridLayout->addWidget(editOriginsPB, 1, 2, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        intervalL->setBuddy(intervalCB);
        autoInsL->setBuddy(autoCB);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Settings);

        stackedWidget->setCurrentIndex(0);
        intervalCB->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(tr2i18n("Settings", nullptr));
        intervalL->setText(tr2i18n("Check for new updates:", nullptr));
        checkUpdatesMobileCB->setText(tr2i18n("when on a mobile broadband network connection", nullptr));
        checkUpdatesBatteryCB->setText(tr2i18n("when running on battery", nullptr));
        autoInsL->setText(tr2i18n("Automatically update:", nullptr));
        installUpdatesBatteryCB->setText(tr2i18n("when running on battery", nullptr));
        installUpdatesMobileCB->setText(tr2i18n("when on a mobile broadband network connection", nullptr));
        appLauncherCB->setText(tr2i18n("Show application launcher after installing new applications", nullptr));
        autoConfirmCB->setText(tr2i18n("Show confirmation dialog when installing or updating packages", nullptr));
        label->setText(tr2i18n("Check for distribution upgrades:", nullptr));
        showOriginsCB->setText(tr2i18n("&Show origins of debug and development packages", nullptr));
        editOriginsPB->setText(tr2i18n("Edit Origins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGS_H

