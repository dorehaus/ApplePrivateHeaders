/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/AFMyriadDelegate.h>
#import <libobjc.A.dylib/SVXMyriadRequestDelegate.h>

@protocol SVXMyriadResponseDelegate, OS_dispatch_queue;
@class AFMyriadCoordinator, NSObject, NSString;

@interface SVXMyriadHostDevice : NSObject <AFMyriadDelegate, SVXMyriadRequestDelegate> {

	AFMyriadCoordinator* _myriadCoordinator;
	id<SVXMyriadResponseDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_SV4 _emergencyContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)shouldContinue:(id)arg1 ;
-(void)shouldAbortAnotherDeviceBetter:(id)arg1 ;
-(void)willStartWithSession:(id)arg1 ;
-(void)willEndSession:(id)arg1 ;
-(void)shouldUnduck:(id)arg1 ;
-(void)myriadCoordinatorDidHandleEmergency:(id)arg1 ;
-(void)setupEnabled:(char)arg1 ;
-(void)resetMyriad;
-(void)_signalEmergencyCallHandledStatus:(char)arg1 ;
-(void)preheatMyriad;
-(void)startAdvertising:(unsigned long long)arg1 withMyriadGoodnessScoreContext:(id)arg2 withMyriadAudioContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_initializeMyriadEmergencyTimer;
-(void)_startAdvertisingEmergency:(/*^block*/id)arg1 ;
-(void)_armEmergencyDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(void)_disarmMyriadEmergencyTimer;
-(void)_acquireWiFiAssertion;
-(void)_releaseWiFiAssertion;
@end
