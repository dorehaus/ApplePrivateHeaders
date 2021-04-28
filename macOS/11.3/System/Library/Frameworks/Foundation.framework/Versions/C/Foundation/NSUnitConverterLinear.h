/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUnitConverter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding> {

	double _coefficient;
	double _constant;

}

@property (readonly) double coefficient;              //@synthesize coefficient=_coefficient - In the implementation block
@property (readonly) double constant;                 //@synthesize constant=_constant - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)baseUnitValueFromValue:(double)arg1 ;
-(double)valueFromBaseUnitValue:(double)arg1 ;
-(id)initWithCoefficient:(double)arg1 constant:(double)arg2 ;
-(double)coefficient;
-(double)constant;
-(id)initWithCoefficient:(double)arg1 ;
@end

