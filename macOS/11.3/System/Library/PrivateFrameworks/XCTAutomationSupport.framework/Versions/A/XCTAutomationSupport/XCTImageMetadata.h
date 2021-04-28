/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface XCTImageMetadata : NSObject <NSSecureCoding> {

	double _scale;
	NSString* _name;

}

@property (nonatomic,readonly) double scale;              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(double)scale;
-(id)initWithScale:(double)arg1 ;
-(id)initWithScale:(double)arg1 name:(id)arg2 ;
@end

