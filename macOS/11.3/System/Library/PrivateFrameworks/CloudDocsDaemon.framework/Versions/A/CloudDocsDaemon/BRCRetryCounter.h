/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCRetryCounter : NSObject {

	char _scheduled;
	unsigned _retryCount;
	long long _latestRetry;
	long long _throttleHash;

}

@property (nonatomic,readonly) unsigned retryCount;                 //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,readonly) long long latestRetry;               //@synthesize latestRetry=_latestRetry - In the implementation block
@property (nonatomic,readonly) long long throttleHash;              //@synthesize throttleHash=_throttleHash - In the implementation block
-(unsigned)retryCount;
-(void)schedule;
-(void)incrementRetry;
-(id)initWithThrottleHash:(long long)arg1 ;
-(long long)latestRetry;
-(long long)throttleHash;
@end
