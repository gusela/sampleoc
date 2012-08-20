#import <Foundation/NSObject.h>

@interface Fraction: NSObject {
    int numerator;
    int denominator;
}

-(void) print;
-(void) setNumerator: (int) n;
-(void) setDenominator: (int) d;
-(void) setBothNumDen Z:(int) n Den:(int) d;
-(int) numerator;
-(int) denominator;
@end
