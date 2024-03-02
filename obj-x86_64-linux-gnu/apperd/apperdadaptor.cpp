/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a apperdadaptor -i DBusInterface.h -l DBusInterface /home/dylan/canonical/apper/apperd/org.kde.apperd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "apperdadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class ApperdAdaptor
 */

ApperdAdaptor::ApperdAdaptor(DBusInterface *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ApperdAdaptor::~ApperdAdaptor()
{
    // destructor
}

void ApperdAdaptor::RefreshCache()
{
    // handle method call org.kde.apperd.RefreshCache
    parent()->RefreshCache();
}

void ApperdAdaptor::SetupDebconfDialog(const QString &tid, const QString &socket_path, uint xid_parent)
{
    // handle method call org.kde.apperd.SetupDebconfDialog
    parent()->SetupDebconfDialog(tid, socket_path, xid_parent);
}

void ApperdAdaptor::WatchTransaction(const QDBusObjectPath &tid)
{
    // handle method call org.kde.apperd.WatchTransaction
    parent()->WatchTransaction(tid);
}


#include "apperdadaptor.moc"
