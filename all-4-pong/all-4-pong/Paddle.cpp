
#include "Paddle.h"
#include "Ball.h"
#include "Objects.h"

#include <QRect>
#include <vector>
#include <QDebug>
#include <QString>

#include "Paddle.h"

Paddle::Paddle(int index, QPoint map):Objects() {

   // setMouseTracking(true);
   playerId = index;
   area = map;



int i = 0;
    if(index == 0 || index == 2){
     //person is on the bottom or top change their x

        //default x position.
        spot.setX(205);
        // if they're 0 put them on the bottom.
    if(index == 0){
        spot.setY(420);
        }else{                       //if they're 2 put them on top
            if(index == 2){
                spot.setY(10);
            }
        }

    if(index == 1 || index == 3){
     //person is on the left or right
        spot.setY(205);

        if(index == 1){
        spot.setX(420);
        }else{if(index == 3){
            spot.setX(10);
            }else{
                //we broke

            }
        }
    }
 }
    else{
    //index is something else. uh-oh
qDebug() << "whoops this is " << playerId;
    }
    spot = this->topLeft();
    this->setWidth(17);
    this->setHeight(101);


//changer = &i;
}


void Paddle::setMouse(QPoint in){

    spot = in;

}

        bool Paddle::getHit(Ball* ball)
        {

             //Checks the balls space to the objects space.
            if(this->bottomRight().x() >= ball->getX() &&
                    this->topLeft().x()     <= ball->getX() &&
                    this->bottomRight().y() >= ball->getY() &&
                    this->topLeft().y()     <= ball->getY()){
              //the ball hit do stuff

                 return true;
             }// it did not hit do nothing
                  return false;
         }

    /*    void MovableLabel::mousePressEvent(QMouseEvent *ev) {
            if(widg->CheckClick()){
                mouseDragging = true;
                offset = ev->pos(); // location where mouse was clicked within the label
            }else if(widg->CheckDelete()){
                int i = obj->getId();
                World::getInstance().destroy(i);
                widg->KillMe(this);

            }
        } InGame* gameScreen = new InGame();
*/



         //.cpp file





/*


           // qDebug() << QString::number(spot.x(), 10) << ", " << QString:number(spot.y(), 10);
           // qDebug() << QString::number(*changer, 10);
          //  qDebug() << QString::number(this->x, 10) << ", " << QString::number(this->y, 10);

        }
*/


        //.h file


    // prints the current paddle state out to offshore text file,
    // returning a boolean value indicating print success
    bool Paddle::printPaddleInfo() {
        bool didPrint = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // gather object state and concatenate into string
            // print string of state to text file
            didPrint = true;
        }

        return didPrint;
    }

    // reads the current paddle state from offshore text file,
    // returning a boolean value indicaing read success;
    // if read succeeds, stores paddle state in instance variables
    bool Paddle::readPaddleInfo() {
        bool didRead = false;

        // establish connection with text file

        if (/*connection succeeds*/true) {
            // read string of state from text file
            // parse string and store object state in instance variables
            didRead = true;
        }

        return didRead;
    }

    void Paddle::updatePosition() {
        //Need move logic here.  Maybe move paddle to where mouse is, could still be move up if up key is pressed, etc. ~ PJ
        qDebug()<< "X,Y" << spot.x()<< ","<< spot.y() << ", "<< playerId;



//person is on the bottom or top change their x
        if(playerId == 0 || playerId == 2){
            if(spot.x() >= 0 && spot.x() <= 350){
                setX(spot.x());

             }

        }

        if(playerId == 1 || playerId == 3){
            if(spot.y() >= 0 && spot.y() <= 430){
                setY(spot.y());

         //person is on the left or right
      //    spot.setY(spot.y());
        }


            }else{
            //index is something else. uh-oh
                qDebug() << "Woops the index is " << playerId;}



    }

//}
