// IATraining.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"State.h"
#include"Transition.h"
#include"StateMachine.h"
#include"Boss.h"
#include"Condition.h"
int main()
{

    Boss boss;
    Boss* bossPtr = &boss;
    SupCondition supCondvd (bossPtr->getVd(),0);
    SupCondition* supCondvdPtr = &supCondvd;
    SupCondition supCondpm(bossPtr->getCurrentPm(), 0);
    SupCondition* supCondpmPtr = &supCondpm;
    InfCondition infcondpm(bossPtr->getCurrentPm(), 0);
    InfCondition* infcondpmPtr = &infcondpm;
    InfCondition infcondvd(bossPtr->getVd(), 0);
    InfCondition* infcondvdPtr = &infcondvd;
    

    Action execute("j'execute une une action ");

    Action entryCracheFlamme("je me prepare a cracher des flamme");

    Action exitCracheFlamme("j'ai fini de cracher des flamme");

    Action cracheFlamme("je suis entrain de cracher des flamme", 3, 90, 1, 30, false);
    Action charge("je charge l'ennemie", 4, 150, 1, 25, true);
    Action coupDeGriffe("je griffe l'ennemie", 1, 50, 2, 3, false);
    Action saut("je saute sur l'ennemie", 2, 60, 1, 30, true);
    Action coupDeQueue("je tourne sur moi", 2, 60, 1, 4, false);
    Action doubleCoup("je fini mon combo", 0, 80, 1, 3, false);



    Action walk("je me deplace");
    Action endTurn("j'ai fini mon tour");
    Action recover("je me repose");

    Transition recoverToWalk(supCondvdPtr, execute);
    Transition recoverToCracheflamme(supCondpmPtr, execute);
    Transition recoverToCharge(supCondpmPtr, execute);
    Transition recoverToCoupdegriffe(supCondpmPtr, execute);
    Transition recoverToCoupdequeue(supCondpmPtr, execute);
    Transition recoverToSaut(supCondpmPtr, execute);


    Transition sautToWalk(supCondvdPtr, execute);
    Transition sautToCoupdequeue(supCondpmPtr, execute);
    Transition sautToCoupdegriffe(supCondpmPtr, execute);
    Transition sautTocharge(supCondpmPtr, execute);
    Transition sautToCracheflamme(supCondpmPtr, execute);
    Transition sautToTurnplayed();


    

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
