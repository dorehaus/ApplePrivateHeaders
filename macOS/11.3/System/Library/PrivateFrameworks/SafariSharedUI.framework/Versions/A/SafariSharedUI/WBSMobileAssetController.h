/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSMobileAssetControllerProtocol.h>

@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;
@class NSObject, WBSPeriodicActivityScheduler, NSString, NSDate;

@interface WBSMobileAssetController : NSObject <WBSMobileAssetControllerProtocol> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	WBSPeriodicActivityScheduler* _scheduler;
	id<WBSMobileAssetControllerDelegate> _delegate;
	double _updateInterval;
	NSString* _assetType;
	NSString* _updateDateDefaultsKey;

}

@property (__weak) id<WBSMobileAssetControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetType;                          //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,copy,readonly) NSString * updateDateDefaultsKey;              //@synthesize updateDateDefaultsKey=_updateDateDefaultsKey - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setDelegate:(id<WBSMobileAssetControllerDelegate>)arg1 ;
-(void)_update;
-(NSString *)assetType;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(void)queryURL:(/*^block*/id)arg1 ;
-(id)initWithMobileAssetType:(id)arg1 updateInterval:(double)arg2 minimumDelay:(double)arg3 ;
-(id)initWithMobileAssetType:(id)arg1 updateDateDefaultsKey:(id)arg2 updateInterval:(double)arg3 minimumDelay:(double)arg4 ;
-(void)_queryMostRecentAsset:(/*^block*/id)arg1 ;
-(void)_downloadIfNecessary:(/*^block*/id)arg1 ;
-(void)_updateCatalog:(/*^block*/id)arg1 ;
-(void)_queryAssets:(/*^block*/id)arg1 ;
-(NSString *)updateDateDefaultsKey;
@end

