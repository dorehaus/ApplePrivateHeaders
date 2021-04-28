/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/Versions/A/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDRateLimiting.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSString;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {

	NSDate* _lastRecorded;
	long long _balance;
	NSObject*<OS_dispatch_queue> _queue;
	double _period;
	long long _count;

}

@property (readonly) double period;                                 //@synthesize period=_period - In the implementation block
@property (readonly) long long count;                               //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRateLimiter;
-(NSString *)description;
-(id)init;
-(long long)count;
-(double)period;
-(id)initWithCount:(long long)arg1 perPeriod:(double)arg2 ;
-(char)credit;
-(char)debited;
-(void)recordTimeAndRefillIfNeeded;
-(void)resetRateLimitWithTimeStamp:(id)arg1 ;
@end

