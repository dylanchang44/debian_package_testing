#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ApperKCM.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPERKCM_H
#define UI_APPERKCM_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include "BrowseView.h"
#include "CategorizedView.h"
#include "KMessageWidget"

QT_BEGIN_NAMESPACE

class Ui_ApperKCM
{
public:
    QAction *actionFindName;
    QAction *actionFindDescription;
    QAction *actionFindFile;
    QGridLayout *gridLayout;
    QToolButton *backTB;
    QStackedWidget *stackedWidget;
    QWidget *pageHome;
    QGridLayout *gridLayout_3;
    CategorizedView *homeView;
    QWidget *pageBrowse;
    QGridLayout *gridLayout_4;
    BrowseView *browseView;
    QWidget *pageChanges;
    QGridLayout *gridLayout_5;
    CategorizedView *changesView;
    QStackedWidget *stackedWidgetBar;
    QWidget *searchPage;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line_2;
    QLineEdit *searchKLE;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QToolButton *filtersTB;
    QFrame *line;
    QToolButton *settingsTB;
    QWidget *updatesPage;
    QHBoxLayout *horizontalLayout;
    QFrame *line_3;
    QPushButton *updatePB;
    QPushButton *checkUpdatesPB;
    QSpacerItem *horizontalSpacer;
    QLabel *downloadL;
    QWidget *settingsPage;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *generalSettingsPB;
    QPushButton *repoSettingsPB;
    QSpacerItem *horizontalSpacer_2;
    QWidget *titlePage;
    QHBoxLayout *horizontalLayout_3;
    QLabel *titleL;
    KMessageWidget *reviewMessage;

    void setupUi(QWidget *ApperKCM)
    {
        if (ApperKCM->objectName().isEmpty())
            ApperKCM->setObjectName(QString::fromUtf8("ApperKCM"));
        ApperKCM->resize(481, 353);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ApperKCM->sizePolicy().hasHeightForWidth());
        ApperKCM->setSizePolicy(sizePolicy);
        ApperKCM->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        actionFindName = new QAction(ApperKCM);
        actionFindName->setObjectName(QString::fromUtf8("actionFindName"));
        actionFindDescription = new QAction(ApperKCM);
        actionFindDescription->setObjectName(QString::fromUtf8("actionFindDescription"));
        actionFindFile = new QAction(ApperKCM);
        actionFindFile->setObjectName(QString::fromUtf8("actionFindFile"));
        gridLayout = new QGridLayout(ApperKCM);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        backTB = new QToolButton(ApperKCM);
        backTB->setObjectName(QString::fromUtf8("backTB"));
        backTB->setEnabled(false);
        backTB->setAutoRaise(true);

        gridLayout->addWidget(backTB, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(ApperKCM);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageHome = new QWidget();
        pageHome->setObjectName(QString::fromUtf8("pageHome"));
        gridLayout_3 = new QGridLayout(pageHome);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        homeView = new CategorizedView(pageHome);
        homeView->setObjectName(QString::fromUtf8("homeView"));
        homeView->setMouseTracking(true);
        homeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        homeView->setDragDropMode(QAbstractItemView::DragDrop);
        homeView->setTextElideMode(Qt::ElideNone);
        homeView->setViewMode(QListView::IconMode);
        homeView->setWordWrap(true);

        gridLayout_3->addWidget(homeView, 0, 0, 1, 1);

        stackedWidget->addWidget(pageHome);
        pageBrowse = new QWidget();
        pageBrowse->setObjectName(QString::fromUtf8("pageBrowse"));
        gridLayout_4 = new QGridLayout(pageBrowse);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        browseView = new BrowseView(pageBrowse);
        browseView->setObjectName(QString::fromUtf8("browseView"));

        gridLayout_4->addWidget(browseView, 0, 0, 1, 1);

        stackedWidget->addWidget(pageBrowse);
        pageChanges = new QWidget();
        pageChanges->setObjectName(QString::fromUtf8("pageChanges"));
        gridLayout_5 = new QGridLayout(pageChanges);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        changesView = new CategorizedView(pageChanges);
        changesView->setObjectName(QString::fromUtf8("changesView"));
        changesView->setMouseTracking(true);
        changesView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        changesView->setProperty("showDropIndicator", QVariant(false));
        changesView->setAlternatingRowColors(true);
        changesView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);

        gridLayout_5->addWidget(changesView, 0, 0, 1, 1);

        stackedWidget->addWidget(pageChanges);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 4);

        stackedWidgetBar = new QStackedWidget(ApperKCM);
        stackedWidgetBar->setObjectName(QString::fromUtf8("stackedWidgetBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidgetBar->sizePolicy().hasHeightForWidth());
        stackedWidgetBar->setSizePolicy(sizePolicy1);
        searchPage = new QWidget();
        searchPage->setObjectName(QString::fromUtf8("searchPage"));
        horizontalLayout_2 = new QHBoxLayout(searchPage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        line_2 = new QFrame(searchPage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        searchKLE = new QLineEdit(searchPage);
        searchKLE->setObjectName(QString::fromUtf8("searchKLE"));
        searchKLE->setProperty("showClearButton", QVariant(true));

        horizontalLayout_2->addWidget(searchKLE);

        widget = new QWidget(searchPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(11, 0));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_2->addWidget(widget);

        filtersTB = new QToolButton(searchPage);
        filtersTB->setObjectName(QString::fromUtf8("filtersTB"));
        sizePolicy1.setHeightForWidth(filtersTB->sizePolicy().hasHeightForWidth());
        filtersTB->setSizePolicy(sizePolicy1);
        filtersTB->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        filtersTB->setPopupMode(QToolButton::InstantPopup);
        filtersTB->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        filtersTB->setAutoRaise(true);
        filtersTB->setArrowType(Qt::NoArrow);

        horizontalLayout_2->addWidget(filtersTB);

        line = new QFrame(searchPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        settingsTB = new QToolButton(searchPage);
        settingsTB->setObjectName(QString::fromUtf8("settingsTB"));
        settingsTB->setPopupMode(QToolButton::InstantPopup);
        settingsTB->setAutoRaise(true);

        horizontalLayout_2->addWidget(settingsTB);

        stackedWidgetBar->addWidget(searchPage);
        updatesPage = new QWidget();
        updatesPage->setObjectName(QString::fromUtf8("updatesPage"));
        horizontalLayout = new QHBoxLayout(updatesPage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        line_3 = new QFrame(updatesPage);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        updatePB = new QPushButton(updatesPage);
        updatePB->setObjectName(QString::fromUtf8("updatePB"));
        updatePB->setEnabled(false);
        updatePB->setFlat(true);

        horizontalLayout->addWidget(updatePB);

        checkUpdatesPB = new QPushButton(updatesPage);
        checkUpdatesPB->setObjectName(QString::fromUtf8("checkUpdatesPB"));
        checkUpdatesPB->setFlat(true);

        horizontalLayout->addWidget(checkUpdatesPB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        downloadL = new QLabel(updatesPage);
        downloadL->setObjectName(QString::fromUtf8("downloadL"));
        downloadL->setText(QString::fromUtf8("Average size for download"));

        horizontalLayout->addWidget(downloadL);

        stackedWidgetBar->addWidget(updatesPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName(QString::fromUtf8("settingsPage"));
        horizontalLayout_4 = new QHBoxLayout(settingsPage);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        generalSettingsPB = new QPushButton(settingsPage);
        generalSettingsPB->setObjectName(QString::fromUtf8("generalSettingsPB"));
        generalSettingsPB->setCheckable(true);
        generalSettingsPB->setChecked(true);
        generalSettingsPB->setAutoExclusive(true);
        generalSettingsPB->setFlat(true);

        horizontalLayout_4->addWidget(generalSettingsPB);

        repoSettingsPB = new QPushButton(settingsPage);
        repoSettingsPB->setObjectName(QString::fromUtf8("repoSettingsPB"));
        repoSettingsPB->setCheckable(true);
        repoSettingsPB->setChecked(false);
        repoSettingsPB->setAutoExclusive(true);
        repoSettingsPB->setFlat(true);

        horizontalLayout_4->addWidget(repoSettingsPB);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        stackedWidgetBar->addWidget(settingsPage);
        titlePage = new QWidget();
        titlePage->setObjectName(QString::fromUtf8("titlePage"));
        horizontalLayout_3 = new QHBoxLayout(titlePage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        titleL = new QLabel(titlePage);
        titleL->setObjectName(QString::fromUtf8("titleL"));
        titleL->setText(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(titleL);

        stackedWidgetBar->addWidget(titlePage);

        gridLayout->addWidget(stackedWidgetBar, 0, 2, 1, 1);

        reviewMessage = new KMessageWidget(ApperKCM);
        reviewMessage->setObjectName(QString::fromUtf8("reviewMessage"));

        gridLayout->addWidget(reviewMessage, 2, 0, 1, 4);

        QWidget::setTabOrder(searchKLE, backTB);
        QWidget::setTabOrder(backTB, filtersTB);
        QWidget::setTabOrder(filtersTB, settingsTB);
        QWidget::setTabOrder(settingsTB, checkUpdatesPB);
        QWidget::setTabOrder(checkUpdatesPB, generalSettingsPB);
        QWidget::setTabOrder(generalSettingsPB, repoSettingsPB);
        QWidget::setTabOrder(repoSettingsPB, homeView);
        QWidget::setTabOrder(homeView, changesView);
        QWidget::setTabOrder(changesView, updatePB);

        retranslateUi(ApperKCM);

        stackedWidget->setCurrentIndex(0);
        stackedWidgetBar->setCurrentIndex(0);
        updatePB->setDefault(false);


        QMetaObject::connectSlotsByName(ApperKCM);
    } // setupUi

    void retranslateUi(QWidget *ApperKCM)
    {
        ApperKCM->setWindowTitle(tr2i18n("Add and Remove Software", nullptr));
        actionFindName->setText(tr2i18n("Find by &name", nullptr));
        actionFindDescription->setText(tr2i18n("Find by &description", nullptr));
        actionFindFile->setText(tr2i18n("Find by f&ile name", nullptr));
        backTB->setText(tr2i18n("Back", nullptr));
        searchKLE->setProperty("clickMessage", QVariant(tr2i18n("Search packages", nullptr)));
        filtersTB->setText(tr2i18n("Filters", nullptr));
        updatePB->setText(tr2i18n("Update", nullptr));
        checkUpdatesPB->setText(tr2i18n("Check for new Updates", nullptr));
        generalSettingsPB->setText(tr2i18n("General Settings", nullptr));
        repoSettingsPB->setText(tr2i18n("Software Origins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ApperKCM: public Ui_ApperKCM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // APPERKCM_H

