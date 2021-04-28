/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface DDSAnalytics : NSObject {

	NSMutableDictionary* _analyticByIdentifier;
	NSObject*<OS_dispatch_queue> _analyticQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * analyticByIdentifier;              //@synthesize analyticByIdentifier=_analyticByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> analyticQueue;              //@synthesize analyticQueue=_analyticQueue - In the implementation block
+(id)sharedInstance;
+(char)isInteger:(id)arg1 ;
+(id)roundNumber:(id)arg1 toSignificantDigits:(id)arg2 ;
-(id)init;
-(id)processName;
-(NSObject*<OS_dispatch_queue>)analyticQueue;
-(NSMutableDictionary *)analyticByIdentifier;
-(id)stringForAction:(int)arg1 ;
-(void)reportAssetDownloadAnalytic:(id)arg1 ;
-(id)bucketForValue:(id)arg1 fromBuckets:(id)arg2 ;
-(void)cancelRecordingForAsset:(id)arg1 ;
-(void)recordAssetAction:(int)arg1 forAsset:(id)arg2 ;
-(void)recordUpdateCycleState:(int)arg1 ;
-(void)reportUpdateCycleAnalytic:(id)arg1 ;
-(void)dumpAssetLogWithInstalledAssets:(id)arg1 ;
@end

