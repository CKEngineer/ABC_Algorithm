#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int global = 0;
int *counter = &global;

typedef struct q {
  double item;
  struct q *next;
} QUEUE;

QUEUE *front = NULL;
QUEUE *last = NULL;

double enqueue(double item) {
  QUEUE *p;
  p = (QUEUE *)malloc(sizeof(QUEUE));
  if (p == NULL) {
    printf("Memory is full\n");
    return -1;
  }
  p->item = item;
  p->next = NULL;
  if (front == NULL) { // if queue is empty
    front = p;         // after enqueue, it has 1 element
    last = p;
  } else {          // otherwise, insert the new element
    last->next = p; // at the end
    last = p;
  }
  *counter = *counter + 1;
  return 1;
}

double dequeue() {
  QUEUE *p;
  double item;
  if (front == NULL) {
    printf("RANDOM NUMBERS IS OVER STARTING OVER\n");
    /*
    BURAYA RASGELE OLAN SAYILAR ATILACAK
    */
enqueue(75.000000);
enqueue(42.000000);
enqueue(16.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
enqueue(64.000000);
enqueue(34.000000);
enqueue(12.000000);
enqueue(95.000000);
enqueue(58.000000);
enqueue(73.000000);
enqueue(54.000000);
enqueue(42.000000);
enqueue(87.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(46.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(82.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
enqueue(64.000000);
enqueue(34.000000);
enqueue(12.000000);
enqueue(95.000000);
enqueue(58.000000);
enqueue(73.000000);
enqueue(54.000000);
enqueue(42.000000);
enqueue(87.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(46.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(82.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
/*BU KISMA KADAR RASGELE SAYILAR ATILACAK*/
dequeue();
  }
  p = front;
  front = front->next;
  if (front == NULL) {
    last = NULL;
  }
  item = p->item;
  free(p);
  *counter = *counter - 1;
  return item;
}

void reset() {
  QUEUE *p;
  p = front;
  while (p) {
    front = front->next;
    free(p);
    p = front;
  }
  last = NULL;
}
/*SORUYU OLUŞTURACAK OLAN KISIM*/
double generate_random() { return dequeue()/100; }//rand 0 ile bir arasında olduğu için

typedef struct employed_bee{
double *array;
double fitness_value;
double adjusted_fitness_value;
double prob;
int number;
}E_BE;

typedef struct onlooker_bee{
double *array;
double fitness_value;
double adjusted_fitness_value;
double prob;
int no_nectar_field;
double no_nectar_field_key;
int number;
}ON_BE;

typedef struct scout_bee{
double *array;
//double x3; dimension iki olduğu varsayılıyor
double fitness_value;
double adjusted_fitness_value;
double prob;
int number;
}S_BE;

double fitness_function(double x1,double x2){
return pow(x1,2)+pow(x2,2);
}

double check_range(double x,double lower_boundary,double upper_boundary){
  if(x>=lower_boundary && x<=upper_boundary){
    return x;
  }
  else if(x<lower_boundary){
    return lower_boundary;
  }
  else if(x>upper_boundary){
    return upper_boundary;
  }
}

double positioning_emplobees(double x,double upper_boundary,double lower_boundary){

  x = lower_boundary + ( (generate_random()) * (upper_boundary - lower_boundary) );
  x = check_range(x,lower_boundary,upper_boundary);
  return x;
}

void bubbleSort(double array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1; ++i) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        double temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

double translating_value(double min,double max,double encrypted_fitness_value){
 return ((max + min) - encrypted_fitness_value);
}

double roulette_calcuating_probability(double adjusted_array[],int size,double prob_of_bee){
  int counter_j;
  double sum=0;
  for(counter_j = 0; counter_j < size ;counter_j = counter_j + 1){
     sum =sum + adjusted_array[counter_j];
  }
  return prob_of_bee/sum;
}

void annhiliation();

int main(void) {
  /*
  BURAYA RASGELE OLAN SAYILAR ATILACAK
  */
enqueue(75.000000);
enqueue(42.000000);
enqueue(16.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
enqueue(64.000000);
enqueue(34.000000);
enqueue(12.000000);
enqueue(95.000000);
enqueue(58.000000);
enqueue(73.000000);
enqueue(54.000000);
enqueue(42.000000);
enqueue(87.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(46.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(82.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
enqueue(64.000000);
enqueue(34.000000);
enqueue(12.000000);
enqueue(95.000000);
enqueue(58.000000);
enqueue(73.000000);
enqueue(54.000000);
enqueue(42.000000);
enqueue(87.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(77.000000);
enqueue(23.000000);
enqueue(22.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(64.000000);
enqueue(46.000000);
enqueue(65.000000);
enqueue(78.000000);
enqueue(82.000000);
enqueue(67.000000);
enqueue(98.000000);
enqueue(56.000000);
enqueue(34.000000);
  
 ///nektar alanlarının sayısını ifade ediyor s ile gösterilir
int number_of_dimension=2;
int number_of_iteration=1;
int upper_boundary=5;
int lower_boundary=-5;
int no_onlookerbees=3;
int no_employedbees=3;
int no_scoutbees=1;
int LIMIT_for_scout=1;

//Buradaki değişkenleri soruya göre ayarlıyoruz
int counter_i = 0;
int counter_j = 0;
int colony_size=(no_employedbees+no_onlookerbees);
int number_of_fields=colony_size/2 +1;

double *sum2_array = malloc(sizeof(double)*number_of_fields - 1);
double *sort_array = (double*)malloc(sizeof(double)*no_employedbees);
E_BE *E=(E_BE*)malloc(sizeof(E_BE)*no_employedbees);
for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
   E[counter_i].array=malloc(sizeof(double)*number_of_dimension);
}
ON_BE *ON=(ON_BE*)malloc(sizeof(ON_BE)*no_onlookerbees);
for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
  ON[counter_i].array=malloc(sizeof(double)*number_of_dimension);
}

for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
  E[counter_i].number=counter_i+1;
  printf("Employed Bee %d ",E[counter_i].number);
  for(counter_j = 0; counter_j < number_of_dimension ; counter_j = counter_j + 1){
  E[counter_i].array[counter_j] = positioning_emplobees(E[counter_i].array[0],upper_boundary,lower_boundary);
  printf(" x%d = %lf ",counter_j+1,E[counter_i].array[counter_j]);
  }
  E[counter_i].fitness_value = fitness_function(E[counter_i].array[0],E[counter_i].array[1]);
  printf("f(E%d) = %lf \n",E[counter_i].number,E[counter_i].fitness_value);
                                 /*BU KISMIN SORUYA GÖRE DEĞİŞTİRİLMESİ GEREKİYOR*/
}

printf("Translating fitness values of employed_bees\n");
//Translating fitness values favor for max optimization problem

for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
  sort_array[counter_i] = E[counter_i].fitness_value;
}
bubbleSort(sort_array,no_employedbees);
double sum=0;
for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
E[counter_i].adjusted_fitness_value = translating_value(sort_array[0],sort_array[no_employedbees-1],E[counter_i].fitness_value);
sum = sum + E[counter_i].adjusted_fitness_value;
printf("f(E%d)' = %lf  ",E[counter_i].number , E[counter_i].adjusted_fitness_value );
}
printf("\nRoulette values of employed bees\n");
//sort array aynı zamanda adjusted_fitness değerlerinin tutulduğu arraydir
for(counter_i = 0; counter_i < no_employedbees ;counter_i = counter_i + 1){
E[counter_i].prob = E[counter_i].adjusted_fitness_value / sum;
E[counter_i].prob = round(E[counter_i].prob*100);
E[counter_i].prob = E[counter_i].prob/100;
printf("R(E%d) = %lf  ",E[counter_i].number , E[counter_i].prob );
}
printf("\n");

//ONLOKER BEES
for(counter_i = 0; counter_i < no_onlookerbees ;counter_i = counter_i + 1){
  ON[counter_i].number=counter_i+1;
  for(counter_j = 0; counter_j < number_of_dimension ; counter_j = counter_j +1){
  ON[counter_i].array[counter_j]= E[counter_i].array[counter_j];
  }
}

double sum2 = 0;
for(counter_i = 0 ; counter_i < number_of_fields ; counter_i = counter_i +1){
  printf("N%d:[%lf , %lf)\n",counter_i +1, sum2,sum2 + E[counter_i].prob);
  sum2 = sum2 + E[counter_i].prob;
  sum2_array[counter_i] = sum2;
  if(sum2_array[counter_i] == 1){
    break;
  }
}


printf("Onlooker bee must be assignted to nectar fields :\n");
for(counter_i = 0; counter_i < no_onlookerbees ;counter_i = counter_i + 1){
  ON[counter_i].no_nectar_field_key = generate_random();
  printf("Onlooker bee %d ->>>> %lf ->>>> ",ON[counter_i].number,ON[counter_i].no_nectar_field_key);
  for(counter_j = 0; counter_j < number_of_fields ;counter_j = counter_j + 1){
    double difference = (ON[counter_i].no_nectar_field_key - sum2_array[counter_j]);
    if(difference < 0.000000){
      ON[counter_i].no_nectar_field = counter_j;
      break;
    }
  }
 printf("N%d\n",ON[counter_i].no_nectar_field+1);
}


//changing position randomly

/*
dequeue();//dimension
dequeue();//nectar_field
ON[0].x1 = ON[0].x1 + (number_of_dimension * generate_random()-1) * (ON[0].x1 - ON[2].x1);
ON[0].x1 = check_range ( ON[0].x1 , lower_boundary, upper_boundary);
dequeue();//dimension
dequeue();//nectar
dequeue();//nectar again
dequeue();
ON[1].x2 = ON[1].x2 + (number_of_dimension * generate_random()-1) * (ON[1].x2 - ON[2].x2);
ON[1].x2 = check_range ( ON[1].x2, lower_boundary, upper_boundary);
dequeue();//dimension
dequeue();//nectar
dequeue();//nectar again
//printf("\n%lf + ((%d * %lf)-1) * (%lf - %lf);",ON[2].x1,number_of_dimension,generate_random(),ON[2].x1,ON[1].x1);
ON[2].x1 = ON[2].x1 + (number_of_dimension * generate_random()-1) * (ON[2].x1 - ON[1].x1);
ON[2].x1 = check_range (ON[2].x1, lower_boundary, upper_boundary);
*/

/*
printf("New values of onlooker bees :\n");
for(counter_i = 0; counter_i < no_onlookerbees ;counter_i = counter_i + 1){
 printf("Onlooker bee %d Assigned to N%d  wtih values x1 = %lf, x2 = %lf\n",ON[counter_i].number,ON[counter_i].no_nectar_field + 1,ON[counter_i].x1,ON[counter_i].x2);
}
*/



  
  return 0;
}


