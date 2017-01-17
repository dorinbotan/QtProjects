#include <QApplication>
#include <QDebug>
#include "tree.h"

#include <QWidget>
#include <QLabel>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QWidget wgt;
    QLabel lbl(&wgt);

    FolderNode folder("images", "images");
    FileNode file1("img1.png", "images/img1.png", "50");
    FileNode file2("img2.png", "images/img2.png", "50");
    FileNode file3("img3.png", "images/img3.png", "50");
    folder.items.append(&file1);
    folder.items.append(&file2);
    folder.items.append(&file3);
    Tree tree(&folder);

    FileNode file4("img4.png", "images/img4.png", "50");
    FolderNode folder1("video", "video");

//    tree.insert(&folder);
//    tree.insert(&file1);
//    tree.insert(&file2);
    tree.insert(&file4);
//    tree.insert(&folder1);

    lbl.setText(tree.toString());

    lbl.show();
    wgt.show();

    return app.exec();
}
