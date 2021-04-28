/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController {

	CKServerChangeToken* _syncToken;

}

@property (nonatomic,retain) CKServerChangeToken * syncToken;              //@synthesize syncToken=_syncToken - In the implementation block
-(void)dealloc;
-(CKServerChangeToken *)syncToken;
-(void)setSyncToken:(CKServerChangeToken *)arg1 ;
-(id)ckUtilities;
-(void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2 ;
-(char)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(char)arg1 ;
-(char)_deviceConditionsAllowsMessageSync;
-(char)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2 ;
-(char)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setLatestSyncToken:(id)arg1 ;
-(id)latestSyncToken;
@end

