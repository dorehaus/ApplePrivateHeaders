/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDActiveSiriSessionInfoDelegate, HMDDataStreamBulkSendSession;
@class NSString;

@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging> {

	char _didBulkSendSessionFail;
	char _didBulkSendSessionComplete;
	char _didSiriSessionStart;
	char _didSiriSessionStop;
	NSString* _identifier;
	id<HMDActiveSiriSessionInfoDelegate> _delegate;
	id<HMDDataStreamBulkSendSession> _bulkSendSession;

}

@property (assign,nonatomic,__weak) id<HMDActiveSiriSessionInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char didBulkSendSessionFail;                                       //@synthesize didBulkSendSessionFail=_didBulkSendSessionFail - In the implementation block
@property (assign,nonatomic) char didBulkSendSessionComplete;                                   //@synthesize didBulkSendSessionComplete=_didBulkSendSessionComplete - In the implementation block
@property (assign,nonatomic) char didSiriSessionStart;                                          //@synthesize didSiriSessionStart=_didSiriSessionStart - In the implementation block
@property (assign,nonatomic) char didSiriSessionStop;                                           //@synthesize didSiriSessionStop=_didSiriSessionStop - In the implementation block
@property (nonatomic,retain) id<HMDDataStreamBulkSendSession> bulkSendSession;                  //@synthesize bulkSendSession=_bulkSendSession - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(void)invalidate;
-(id<HMDActiveSiriSessionInfoDelegate>)delegate;
-(void)setDelegate:(id<HMDActiveSiriSessionInfoDelegate>)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 delegate:(id)arg2 ;
-(void)_bulkSendDidFail;
-(char)_handleFrame:(id)arg1 ;
-(void)_bulkSendDidComplete;
-(char)isBulkSendActive;
-(char)didBulkSendSessionFail;
-(char)didBulkSendSessionComplete;
-(char)didSiriSessionStart;
-(char)didSiriSessionStop;
-(id<HMDDataStreamBulkSendSession>)bulkSendSession;
-(void)setDidSiriSessionStart:(char)arg1 ;
-(void)_doReadAudioFrames;
-(void)setBulkSendSession:(id<HMDDataStreamBulkSendSession>)arg1 ;
-(char)isSiriSessionActive;
-(void)setDidBulkSendSessionFail:(char)arg1 ;
-(void)setDidBulkSendSessionComplete:(char)arg1 ;
-(void)markSiriPluginReady;
-(void)markSiriPluginStopped;
-(void)setActiveBulkSendSession:(id)arg1 ;
-(void)setDidSiriSessionStop:(char)arg1 ;
@end
