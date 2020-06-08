/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#include "mainwindow.h"

#include <QLabel>

#include "./ui_mainwindow.h"

GitStoryMainWindow::GitStoryMainWindow(QWidget* parent)
    : QMainWindow{parent}
    , mHelloWorldLabel{std::make_unique<QLabel>(this)}
{
    setObjectName("GitStoryMainWindow");
    setWindowTitle("Git Story");

    mHelloWorldLabel->setText("Hello World");
}

GitStoryMainWindow::~GitStoryMainWindow() {
    // Intentionally left empty.
}
