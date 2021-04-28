/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKTapToRadarPrompt : NSObject <NSSecureCoding> {

	NSString* _reason;
	NSDate* _lastPromptDate;
	long long _promptCount;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSDate * lastPromptDate;              //@synthesize lastPromptDate=_lastPromptDate - In the implementation block
@property (assign,nonatomic) long long promptCount;              //@synthesize promptCount=_promptCount - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(NSDate *)lastPromptDate;
-(void)setLastPromptDate:(NSDate *)arg1 ;
-(long long)promptCount;
-(void)setPromptCount:(long long)arg1 ;
@end
