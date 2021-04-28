/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/Versions/A/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying> {

	long long _exceptionCode;
	unsigned long long _reportType;
	NSString* _explanation;

}

@property (assign,nonatomic) long long exceptionCode;                    //@synthesize exceptionCode=_exceptionCode - In the implementation block
@property (assign,nonatomic) unsigned long long reportType;              //@synthesize reportType=_reportType - In the implementation block
@property (nonatomic,copy) NSString * explanation;                       //@synthesize explanation=_explanation - In the implementation block
+(id)context;
+(id)terminationAssertionContext;
-(char)isEqualToTerminationContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(void)setExplanation:(NSString *)arg1 ;
-(NSString *)explanation;
-(void)setReportType:(unsigned long long)arg1 ;
-(void)setExceptionCode:(long long)arg1 ;
-(long long)exceptionCode;
-(unsigned long long)reportType;
@end

