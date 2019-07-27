#include "acustom.h"
#include "acustomplugin.h"

#include <QtPlugin>

ACustomPlugin::ACustomPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void ACustomPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool ACustomPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *ACustomPlugin::createWidget(QWidget *parent)
{
    return new ACustom(parent);
}

QString ACustomPlugin::name() const
{
    return QLatin1String("ACustom");
}

QString ACustomPlugin::group() const
{
    return QLatin1String("");
}

QIcon ACustomPlugin::icon() const
{
    return QIcon();
}

QString ACustomPlugin::toolTip() const
{
    return QLatin1String("");
}

QString ACustomPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool ACustomPlugin::isContainer() const
{
    return false;
}

QString ACustomPlugin::domXml() const
{
    return QLatin1String("<widget class=\"ACustom\" name=\"aCustom\">\n</widget>\n");
}

QString ACustomPlugin::includeFile() const
{
    return QLatin1String("acustom.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(acustomplugin, ACustomPlugin)
#endif // QT_VERSION < 0x050000
