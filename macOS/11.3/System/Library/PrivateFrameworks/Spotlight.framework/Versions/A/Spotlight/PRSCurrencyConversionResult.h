/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Versions/A/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotlight/PRSConversionResult.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface PRSCurrencyConversionResult : PRSConversionResult <NSCoding, NSSecureCoding> {

	NSDate* _lastUpdated;

}

@property (readonly) NSDate * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)lastUpdated;
-(char)isCurrency;
-(id)initWithConverter:(id)arg1 ;
@end

