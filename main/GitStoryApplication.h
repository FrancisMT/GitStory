/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#pragma once

#include <QApplication>

namespace GitStory {

/**
 * @brief
 */
class GitStoryApplication : public QApplication
{
    Q_OBJECT
public:
    GitStoryApplication(int& argc, char** argv) noexcept;
};

} // namespace GitStory
