/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFTimer, NSUUID, NSString;

@interface HMDUserPresenceFeedRetryTimer : HMFObject <HMFLogging> {

	HMFTimer* _retryTimer;
	unsigned long long _retryCount;
	NSUUID* _timerID;

}

@property (copy,readonly) NSUUID * timerID;                         //@synthesize timerID=_timerID - In the implementation block
@property (readonly) double retryTimeInterval; 
@property (retain) HMFTimer * retryTimer;                           //@synthesize retryTimer=_retryTimer - In the implementation block
@property (assign) unsigned long long retryCount;                   //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)cancel;
-(unsigned long long)retryCount;
-(NSUUID *)timerID;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(double)retryTimeInterval;
-(char)shouldRetryImmediately:(double)arg1 ;
-(void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3 ;
@end
