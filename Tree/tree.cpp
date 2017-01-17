#include "tree.h"

FileNode::FileNode(QString name, QString path, QString size)
{
    this->name = name;
    this->path = path;
    this->size = size;
}

QString FileNode::toString()
{
    return name + " (" + size + ")";
}

QString FileNode::toString(QString indent)
{
    return indent + name + " (" + size + ")";
}


FolderNode::FolderNode(QString name, QString path)
{
    this->name = name;
    this->path = path;
}

QString FolderNode::toString()
{
    return toString(" ");
}

QString FolderNode::toString(QString indent)
{
    QString toReturn;

    toReturn.append(name + "/\n");
    foreach(Node *node, items)
        toReturn.append(indent + node->toString(indent + "  ") + "\n");

    return toReturn;
}


Tree::Tree(Node *root)
{
    this->root = root;
}

void Tree::insert(Node *node)
{
    QStringList list = node->path.split('/');
    while(root->name.compare(list.first()) != 0)
        list.removeFirst();
    list.removeFirst();

    FolderNode* currentNode = dynamic_cast<FolderNode*>(root);

    foreach(QString str, list)
    {
        qDebug() << "current" << currentNode->name;
        qDebug() << "str    " << str;

        bool found = false;

        foreach(Node *item, currentNode->items)
        {
            qDebug() << item->name;

            if(str.compare(item->name) == 0)
            {
                currentNode = dynamic_cast<FolderNode*>(item);
                found = true;

                qDebug() << "f";

                break;
            }
        }

        if(found == false)
        {
            qDebug() << "c";
            currentNode->items.append(node);
        }
    }

    // Folder
    if (dynamic_cast<FileNode*>(node) == NULL)
    {

    }
}

QString Tree::toString()
{
    return root->toString();
}
