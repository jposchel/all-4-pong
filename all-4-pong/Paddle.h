#ifndef PADDLE_H
#define PADDLE_H


#include <QObject>
#include <vector>
#include <QRect>
#include <QMouseEvent>
#include <QDebug>

#include "Ball.h"
#include "Objects.h"

//class Objects;
//class Ball;


class Paddle : public Objects/*, public QRect*/ //because the class inherits
        //from Objects, it also inherits from QRect
{
    int* changer;
    QMouseEvent* M;
    int playerId;
    QPoint area;
    QPoint spot;
    //Width and Height!! of the paddle in other words
    //101 and 17
public:

    //takes player index;
    Paddle(int, QPoint);

    Paddle();
    //****Getters and setters****/
  /*  int getPosition(){return position;}
    int getSideId(){return sideId;}
    int getLength(){return paddleLength;}
   */// int getPlayerId(){return playerId;}


    void setPlayerId(int inID){playerId = inID;}
    //void  setPosition(int inPos){position = inPos;}
    //void  setLength(int inLength){ paddleLength = inLength;}
    //*******************************


    void Move(QPoint);
    bool getHit(Ball*);
    int getX(){
        return spot.x();
    }
    int getY(){
        return spot.y();
    }

    void setX(int in){
        if(in > 0 && in < 350)
        spot.setX(in);
    }
    void setY(int y){
        if(y > 0 && y < 420)
        spot.setY(y);
    }

    void mousePressEvent(QMouseEvent*);

//QMouseEvent*

    
    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool printPaddleInfo();

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool readPaddleInfo();

    //
    
};

#endif // PADDLE_H
