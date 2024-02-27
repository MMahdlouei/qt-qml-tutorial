#include "ApplicationWindow.h"
#include <QDebug>

ApplicationWindow::ApplicationWindow(const QString &title, QObject *parent)
    : QObject{parent}
    , m_title(title)
{
    qDebug() << "Window Created" << m_title;
}

ApplicationWindow::~ApplicationWindow()
{
    qDebug() << "Window Closed" << m_title;
}
