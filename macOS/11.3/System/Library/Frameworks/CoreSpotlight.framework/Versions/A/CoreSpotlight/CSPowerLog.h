/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject {

	NSMutableDictionary* _operationsByBundleID;
	NSDate* _lastFlushDate;
	unsigned long long _cachedCount;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByBundleID;              //@synthesize operationsByBundleID=_operationsByBundleID - In the implementation block
@property (nonatomic,retain) NSDate * lastFlushDate;                                  //@synthesize lastFlushDate=_lastFlushDate - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCount;                          //@synthesize cachedCount=_cachedCount - In the implementation block
+(id)sharedInstance;
+(id)keyNameForOperation:(long long)arg1 ;
-(id)init;
-(void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3 ;
-(void)setOperationsByBundleID:(NSMutableDictionary *)arg1 ;
-(void)setLastFlushDate:(NSDate *)arg1 ;
-(void)setCachedCount:(unsigned long long)arg1 ;
-(NSDate *)lastFlushDate;
-(void)flushToPowerLog;
-(void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3 ;
-(NSMutableDictionary *)operationsByBundleID;
-(unsigned long long)cachedCount;
@end

