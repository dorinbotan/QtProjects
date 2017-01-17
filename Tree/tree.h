#ifndef TREE_H
#define TREE_H

#include <QString>
#include <QVector>
#include <QStringList>

#include <QDebug>

class Node
{
public:
    virtual QString toString() = 0;
    virtual QString toString(QString intent) = 0;

//    virtual QString toJSON() = 0;

    QString name;
    QString path;
};


class FileNode : public Node
{
public:
    FileNode(QString name, QString path, QString size);

    QString toString();

    QString size;

private:
    QString toString(QString intent);
};


class FolderNode : public Node
{
public:
    FolderNode(QString name, QString path);

    QString toString();

    QVector<Node*> items;

private:
    QString toString(QString indent);
};


class Tree
{
public:
    Tree(Node *root);

    void insert(Node *node);
    QString toString();

    Node* root;
};

#endif // TREE_H
