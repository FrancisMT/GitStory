/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#include "GitStoryApplication.h"

#include <GitUtilities/GitCommandsWrapper.h>

#include <iostream>

#include <QtCore/QTextStream>

namespace GitStory {

GitStoryApplication::GitStoryApplication(int& argc, char** argv) noexcept
    : QApplication(argc, argv)
{
    // Small test
    GitCommandsWrapper testObject("/home/ctw00111/Projects/bmw/cdc-native");
    std::cout << QString(testObject.gitLog()).toStdString() << '\n';
    std::cout << QString(testObject.gitBranchAll()).toStdString() << '\n';

}

} // namespace GitStory
