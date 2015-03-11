//
//  main.c
//  cliPointers
//
//  Created by Jeffrey C Rosenthal on 3/11/15.
//  Copyright (c) 2015 Jeffreycorp. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    
    int a = 13;
    int b = 5;
    int c = 10;
    
    int * alf = &a;
    int * balf = &b;
    int * calf = &c;
    int * dalf = &c;
    
    *alf = *alf * 2;
    *calf += 1;
    dalf = &b;
    *dalf += 4;
    
    printf("a: %d, b: %d, c %d\n", a, b, c);
    
    
    return 0;
}
