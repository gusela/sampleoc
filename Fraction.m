#import "Fraction.h"
#import <stdio.h>

@implementation Fraction
-(void) print {
    printf( "%i/%i", numerator, denominator );
}

-(void) setNumerator: (int) n {
    numerator = n;
}

-(void) setDenominator: (int) d {
    denominator = d;
}

-(void) setBothNumDen: (int)n den:(int)d check:(int)c {
    denominator = d;
    numerator = n;
}

-(int) denominator {
    return denominator;
}

-(int) numerator {
    return numerator;
}
@end
