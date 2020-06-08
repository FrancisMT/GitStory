/**
 * @file
 * @copyright (C) 2020 Francisco de Babo Martins
 */

#include "userInterface/mainwindow.h"
#include "GitStoryApplication.h"

#define UITEST 1

int main(int argc, char* argv[])
{
    GitStory::GitStoryApplication app(argc, argv);

#if UITEST
    GitStoryMainWindow w;
    w.show();
#endif

    return app.exec();
}

// TODO [FM]: Add logging system
// TODO [FM]: Start work on the "git parser" feature