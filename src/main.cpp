#include <opencv2/opencv.hpp>
#include <iostream>
#include <stdio.h>
 
using namespace cv;
using namespace std;
 
int main(int, char**)
{
   Mat frame;
   //Inizializzo VideoCapture
   VideoCapture cap;
   
   // Apro la camera di default
   cap.open(0);
 
   int deviceID = 0; 
   //Legge automaticamente api di default
   int apiID = cv::CAP_ANY; 
   //Apro la camera con api selezionato
   cap.open(deviceID + apiID);
   //Controlo se e aperta se no stampo errore 
   if (!cap.isOpened()) {
     cerr << "ERROR! Unable to open camera\n";
     return -1;
   }
   cout << "Start grabbing" << endl
        << "Press any key to terminate" << endl;
   //loop infinito 
   for (;;)
   {
     //Aspetto il nuovo frame dalla camera e lo conserva in frame
     cap.read(frame);
     //Controlla se e andato tutto bene
     if (frame.empty()) {
        cerr << "ERROR! blank frame grabbed\n";
        break;
     }
     //Guarda il live e aspetta il tasto da tastiera con timeout per vare vedere le immagini
     imshow("Live", frame);

    }
return 0;
}