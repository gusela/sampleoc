#import <Foundation/NSObject.h>

@interface Fraction: NSObject {
    int numerator;
    int denominator;
}

-(void) print;
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) d;
-(void) setBothNumDen:(int)n den:(int)d check:(int)c;
-(int) numerator;
-(int) denominator;
@end
