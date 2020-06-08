/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#pragma once
#include <memory>

#include <QMainWindow>

class GitStoryMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GitStoryMainWindow(QWidget* parent = nullptr);
    ~GitStoryMainWindow() override;

private:
    std::unique_ptr<class QLabel> mHelloWorldLabel;
};
