/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUnit.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUnitConverter;

@interface NSDimension : NSUnit <NSSecureCoding> {

	unsigned long long _reserved;
	NSUnitConverter* _converter;

}

@property (readonly) unsigned long long specifier;                  //@synthesize reserved=_reserved - In the implementation block
@property (copy,readonly) NSUnitConverter * converter;              //@synthesize converter=_converter - In the implementation block
+(char)supportsSecureCoding;
+(id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2 ;
+(id)baseUnit;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3 ;
-(NSUnitConverter *)converter;
-(id)initWithSymbol:(id)arg1 converter:(id)arg2 ;
-(unsigned long long)specifier;
-(id)dimension;
@end

