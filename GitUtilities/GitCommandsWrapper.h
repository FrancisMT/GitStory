/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#pragma once

#include <string>

#include <QtCore/QTextStream>
#include <qt5/QtCore/QProcess>

/**
 * @brief Class responsible to wrap git methods used for reading repository data.
 */
class GitCommandsWrapper
{
public:
    explicit GitCommandsWrapper(const std::string& repositoryPath);

    QByteArray gitLog();
    QByteArray gitBranchAll();

private:
    std::string mRepositoryPath{};
    QProcess gitProcess;
};

// TODO [FM]: Add more methods to allow the user to analise a non local repo (download and choose
// the branch.
