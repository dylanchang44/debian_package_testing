/***************************************************************************
 *   Copyright (C) 2012-2013 by Daniel Nicoletti <dantti12@gmail.com>      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 ***************************************************************************/

#ifndef APPER_PLUGINS_H
#define APPER_PLUGINS_H

#include <QQmlExtensionPlugin>

class QmlPlugins : public QQmlExtensionPlugin
{
    Q_PLUGIN_METADATA(IID "org.kde.Apper")

public:
    virtual void registerTypes(const char *uri);
    virtual void initializeEngine(QQmlEngine *engine, const char *uri);
};

#endif // APPER_PLUGINS_H
