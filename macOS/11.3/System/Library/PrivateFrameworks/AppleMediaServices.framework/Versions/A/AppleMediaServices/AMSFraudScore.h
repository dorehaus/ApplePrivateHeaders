/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSFraudScore : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _action;
	NSString* _score;

}

@property (assign) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (copy) NSString * score;                         //@synthesize score=_score - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(NSString *)score;
-(void)setScore:(NSString *)arg1 ;
-(id)initWithScore:(id)arg1 action:(unsigned long long)arg2 ;
@end

