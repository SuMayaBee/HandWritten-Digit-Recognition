#include "mnist.h"

int main(void)
{
    // call to store mnist in array
    load_mnist();

    

    // print pixels of first data in test dataset
    for(int j=0; j<=5; j++) {
      for (int i=0; i<784; i++) {
        printf("%1.1f ", test_image[j][i]);
        if ((i+1) % 28 == 0) putchar('\n');
      } 
      
      
      printf("label: %d\n", test_label[j]);
      printf("\n\n");

    }

    // print first label in test dataset
    printf("label: %d\n", test_label[0]);  

    // save image of first data in test dataset as .pgm file
    //save_mnist_pgm(test_image, 0);
   
    // show all pixels and labels in test dataset
    
   // print_mnist_pixel(test_image[i], NUM_TRAIN);
   // print_mnist_label(test_label[i], NUM_TRAIN); 
    

    return 0;
}
