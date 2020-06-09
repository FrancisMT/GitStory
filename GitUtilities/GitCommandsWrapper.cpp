/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#include "GitCommandsWrapper.h"

#include <iostream>

#include <QtCore/QTextStream>
#include <qt5/QtCore/QDir>

namespace {
const auto cDirectorySeparator{"/"};
const auto cGitDirectory{".git"};
const auto cGitProgram{"git"};
const auto cGitLogArgument{"log"};
const auto cGitBranchArgument{"branch"};

const auto cGitAllArgument{"-a"};


bool isGitRepository(const std::string& path)
{
    return QDir((path + cDirectorySeparator + cGitDirectory).c_str()).exists();
}

} // namespace

GitCommandsWrapper::GitCommandsWrapper(const std::string& repositoryPath)
    : mRepositoryPath{repositoryPath}
{
    if (!isGitRepository(repositoryPath)) {
        throw std::runtime_error("Not a git repository");
    }

    // Overall Process Settings
    gitProcess.setWorkingDirectory(mRepositoryPath.c_str());
    gitProcess.setProgram(cGitProgram);
}

QByteArray GitCommandsWrapper::gitLog()
{
    gitProcess.setArguments(QStringList() << cGitLogArgument);
    gitProcess.start();
    gitProcess.waitForFinished();

    return gitProcess.readAllStandardOutput();
}
QByteArray GitCommandsWrapper::gitBranchAll()
{
    gitProcess.setArguments(QStringList() << cGitBranchArgument << cGitAllArgument);
    gitProcess.start();
    gitProcess.waitForFinished();

    return gitProcess.readAllStandardOutput();
}
