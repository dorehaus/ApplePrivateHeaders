/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject, NSXPCConnection;

@interface SFClient : NSObject {

	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _invalidateCalled;
	char _invalidateDone;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)repairDevice:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupDevice:(id)arg1 home:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)_invalidated;
-(void)_interrupted;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_ensureXPCStarted;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)repairDevice:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAudioRoutingScore:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)activityStateWithCompletion:(/*^block*/id)arg1 ;
-(void)retriggerProximitySetup:(/*^block*/id)arg1 ;
-(void)showDevicePickerWithInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)appleIDInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)clearXPCHelperImageCacheWithCompletion:(/*^block*/id)arg1 ;
-(void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getDeviceAssets:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPeopleSuggestions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openSetupURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preventExitForLocaleReason:(id)arg1 ;
-(void)reenableProxCardType:(unsigned char)arg1 completion:(/*^block*/id)arg2 ;
-(void)retriggerProximityPairing:(/*^block*/id)arg1 ;
-(void)testContinuityKeyboardBegin:(char)arg1 ;
-(void)wifiPasswordSharingAvailabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
@end

