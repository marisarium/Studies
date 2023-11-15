#include <stdio.h>

int main(){
    int height, min_height, max_height, number_of_people;
    printf("How many people there is? ");
    scanf("%d", &number_of_people);

    for (int i = 0; i < number_of_people; i++)
    {
        printf("what's person %d height in centimeters: ", i+1);
        scanf("%d",&height);
        if (i==0)
        {
            min_height = height;
            max_height = height;
        }
        
        if (height>max_height)
        {
            max_height=height;
        }
        if (height<min_height)
        {
            min_height=height;
        }
    }

    printf("the taller person is %dcm height\n", max_height);
    printf("the shorter person is %dcm height", min_height);
    return 0;
}