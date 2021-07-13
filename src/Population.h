#include "Dataset.h"

class Firefly;

class Population
{
public:
  Population(char *fileName);
  ~Population();
  void move();        //ホタルを移動する
  void printResult(); //結果を表示

  Dataset *dataset;  //データセット
  Firefly **firefly; //ホタル群のメンバ
  double *bestPos;   //最も明るいホタルの位置
  double bestInt;    //最も明るいホタルの光の強度
};