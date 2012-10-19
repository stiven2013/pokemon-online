#ifndef SMOGONBUILD_H
#define SMOGONBUILD_H

#include <QString>
#include <QList>

using namespace std;

/*
 * This build object is used to represent a pokemon build from Smogon
 * The use of arrays are in many cases due to the fact that Smogon gives you
 *   multiple choices of what Item or move you want to use.
 */

/*
struct SmogonBuild
{
    QString buildName;
    vector<QString> item;
    vector<QString> nature;
    int EVList[6];
    vector<QString> moves[4];
    QString description;
};*/

class SmogonBuild{
public:
    SmogonBuild();
    void printBuild();

    QString buildName;
    QList<QString> *item;
    QList<QString> *ability;
    QList<QString> *nature;
    QList<int> *EVList;

    QList<QString> *move1;
    QList<QString> *move2;
    QList<QString> *move3;
    QList<QString> *move4;

    QString description;
};

#endif // SMOGONBUILD_H
