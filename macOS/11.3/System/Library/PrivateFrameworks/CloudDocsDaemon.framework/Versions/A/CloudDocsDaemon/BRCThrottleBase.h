/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BRCThrottleBase : NSObject {

	NSString* _name;
	unsigned _initialRetryCount;
	unsigned _finalRetryCount;
	unsigned _maximumElementCount;
	long long _minimumNsecsBetweenRetries;
	long long _maximumNsecsBetweenRetries;
	long long _nsecsBeforeForgettingCounter;

}

@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long nsecsBeforeForgettingCounter;              //@synthesize nsecsBeforeForgettingCounter=_nsecsBeforeForgettingCounter - In the implementation block
-(NSString *)name;
-(char)isBlocking;
-(long long)nsecsToNextRetry:(long long)arg1 retryCount:(unsigned*)arg2 now:(long long)arg3 ;
-(long long)nsecsBeforeForgettingCounter;
-(id)initWithName:(id)arg1 andParameters:(id)arg2 ;
-(long long)retryBackoff:(unsigned)arg1 ;
@end
