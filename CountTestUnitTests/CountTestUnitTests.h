//
//  CountTestUnitTests.h
//  CountTestUnitTests
//
//  Created by mitsui on 13/01/29.
//
//

#import <SenTestingKit/SenTestingKit.h>
#import "Counter.h"

@interface CountTestUnitTests : SenTestCase
{
    @private
    Counter *_counter;
}

- (void)testInit;
- (void)testIncrement;
- (void)testIncrementResetsToZeroAfterTen;
- (void)testDecrement;
- (void)testReset;

@end
