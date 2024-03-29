#ifndef OBJECTS_H
#define OBJECTS_H


#include <QPoint>
#include <vector>
#include <QLine>
#include <QString>
#include <QRect>

#include <iostream>
#include <fstream>

using namespace std;

//This class will be the parent of all classes dealing with objects that can be hit
class Object {



protected:
    //instance variables that are shared by all children of objects


    //QRect Rectangle;
    QPoint point;

    static int nextObjId;
    int objId;
    int playerId;



public:

    Object(QPoint);

    //Object(int,int,int,int);

    // Object(int);
    Object(vector<string>* type){}
    Object();

    ~Object();
    //Getters and setters------------------------------

    void setQPoint(QPoint inPoint){point = inPoint;}
    int getObjId() {return objId;}

    bool getHit();
    QPoint getQPoint(){return point;}

    QString virtual getUserName(){QString Q; return Q;}
    void virtual setInfo(ofstream* f){}
    void virtual getInfo(vector<string>* strings){}

    //------------------------------------------------------

    //virtual methods

    void virtual getInfo(ofstream*){}
    void virtual setInfo(){}
    void virtual updatePosition();
    virtual QString getNet();
    QRect virtual getRect(){QRect Q; return Q;}
    bool virtual Hit(){return true;}
    bool virtual getBound();
    double virtual getDistancetoPaddle(QPoint point){return -1;}
    int virtual getPlayerId() {return playerId;}
    virtual void setPlayerId(int) {}
    virtual QString getType() {return "";}
    virtual QLine getLine() {return QLine();}
    virtual int getSpeed() {return 0;}
    virtual void eliminate() {}
    // virtual void hitShape(){}



};

#endif // OBJECTS_H
