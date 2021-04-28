/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/Versions/A/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDMessagePTaskStore;
@class NSTimer;

@interface IMDMessageProcessingController : NSObject {

	id<IMDMessagePTaskStore> _pTaskStore;
	NSTimer* _processingTimer;

}

@property (nonatomic,retain) id<IMDMessagePTaskStore> pTaskStore;              //@synthesize pTaskStore=_pTaskStore - In the implementation block
@property (nonatomic,retain) NSTimer * processingTimer;                        //@synthesize processingTimer=_processingTimer - In the implementation block
-(void)dealloc;
-(id)init;
-(void)messageProcessingTaskAdded:(id)arg1 ;
-(id)initWithMessagesPTaskStore:(id)arg1 ;
-(void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1 ;
-(void)_processingTimerFired;
-(void)_indexSpotlightIfNeedForPTask:(id)arg1 ;
-(char)_pref_IMDCoreSpotlightHasMigrated;
-(void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1 ;
-(void)scheduleInitialProcessingCheck;
-(id<IMDMessagePTaskStore>)pTaskStore;
-(void)setPTaskStore:(id<IMDMessagePTaskStore>)arg1 ;
-(NSTimer *)processingTimer;
-(void)setProcessingTimer:(NSTimer *)arg1 ;
@end

