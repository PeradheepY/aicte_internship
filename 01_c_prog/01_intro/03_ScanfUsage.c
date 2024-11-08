/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:
 * Brief:
 * Author: Natarajan S  ( natarajan.s@ruggedboard.com )
 * Title: Program Manager / Trainner
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     char name[50];
     char rollNo[10];
     float cgpa;

     printf("Enter Your Name  : ");
     scanf("%s", name);

     printf("Enter Your RollNo: ");
     scanf("%s", rollNo);

     printf("Enter Your CGPA  : ");
     scanf("%f", &cgpa);

     printf("\nName  : %s\n", name);
     printf("RollNo: %s\n", rollNo);
     printf("CGPA  : %.1f\n", cgpa);
     return 0;
}

// Program End
