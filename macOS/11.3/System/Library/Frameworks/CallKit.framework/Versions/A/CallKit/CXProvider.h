/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CallKit.framework/Versions/A/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/CXActionDelegate.h>
#import <libobjc.A.dylib/CXProviderVendorProtocol.h>

@protocol CXProviderDelegate, OS_dispatch_queue;
@class CXProviderConfiguration, NSObject, NSMutableArray, NSArray, NSString;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol> {

	CXProviderConfiguration* _configuration;
	id<CXProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _completionQueue;
	NSMutableArray* _mutablePendingTransactions;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<CXProviderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CXProviderDelegatePrivate> privateDelegate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;                   //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutablePendingTransactions;                    //@synthesize mutablePendingTransactions=_mutablePendingTransactions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<CXProviderHostProtocol> hostProtocolDelegate; 
@property (nonatomic,readonly) char requiresProxyingAVAudioSessionState; 
@property (nonatomic,copy) CXProviderConfiguration * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingTransactions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)reportNewIncomingVoIPPushPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)invalidate;
-(id<CXProviderDelegate>)delegate;
-(void)setDelegate:(id<CXProviderDelegate>)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_performAction:(id)arg1 ;
-(CXProviderConfiguration *)configuration;
-(void)setConfiguration:(CXProviderConfiguration *)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<CXProviderDelegatePrivate>)privateDelegate;
-(NSArray *)pendingTransactions;
-(void)actionCompleted:(id)arg1 ;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(oneway void)commitTransaction:(id)arg1 ;
-(oneway void)handleActionTimeout:(id)arg1 ;
-(oneway void)handleAudioSessionActivationStateChangedTo:(char)arg1 ;
-(void)reportCallWithUUID:(id)arg1 updated:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg1 ;
-(void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(NSMutableArray *)mutablePendingTransactions;
-(id)_pendingActionWithUUID:(id)arg1 ;
-(id<CXProviderHostProtocol>)hostProtocolDelegate;
-(void)_updatePendingTransactions;
-(void)sendProviderDidBegin;
-(void)handleConnectionInterruption;
-(void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerCurrentConfiguration;
-(char)requiresProxyingAVAudioSessionState;
-(void)handleMediaServicesWereResetNotification:(id)arg1 ;
-(void)performCompletionBlock:(/*^block*/id)arg1 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 ;
-(id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2 ;
-(void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3 ;
-(void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3 ;
-(void)setMutablePendingTransactions:(NSMutableArray *)arg1 ;
@end

