/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol WBSMobileAssetControllerProtocol
@property (__weak) id<WBSMobileAssetControllerDelegate> delegate; 
@property (nonatomic,retain) NSDate * lastUpdateDate; 
@property (nonatomic,readonly) double updateInterval; 
@required
-(id<WBSMobileAssetControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)setLastUpdateDate:(id)arg1;
-(NSDate *)lastUpdateDate;
-(double)updateInterval;
-(void)queryURL:(/*^block*/id)arg1;

@end

