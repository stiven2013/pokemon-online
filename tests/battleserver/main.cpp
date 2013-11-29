#include <QCoreApplication>

#include "battleservertest.h"
#include "testunrated.h"
#include "testteamcount.h"
#include "pokemontestrunner.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    PokemonTestRunner runner;
    runner.setName("battleserver");
    runner.addTest(new BattleServerTest());
    runner.addTest(new TestUnrated());
    runner.addTest(new TestTeamCount());
    runner.start();

    return a.exec();
}
