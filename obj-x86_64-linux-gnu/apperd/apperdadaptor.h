/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a apperdadaptor -i DBusInterface.h -l DBusInterface /home/dylan/canonical/apper/apperd/org.kde.apperd.xml
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef APPERDADAPTOR_H
#define APPERDADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "DBusInterface.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.kde.apperd
 */
class ApperdAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.apperd")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.apperd\">\n"
"    <method name=\"RefreshCache\"/>\n"
"    <method name=\"SetupDebconfDialog\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"tid\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"socket_path\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"xid_parent\"/>\n"
"    </method>\n"
"    <method name=\"WatchTransaction\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"tid\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    ApperdAdaptor(DBusInterface *parent);
    virtual ~ApperdAdaptor();

    inline DBusInterface *parent() const
    { return static_cast<DBusInterface *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void RefreshCache();
    void SetupDebconfDialog(const QString &tid, const QString &socket_path, uint xid_parent);
    void WatchTransaction(const QDBusObjectPath &tid);
Q_SIGNALS: // SIGNALS
};

#endif
