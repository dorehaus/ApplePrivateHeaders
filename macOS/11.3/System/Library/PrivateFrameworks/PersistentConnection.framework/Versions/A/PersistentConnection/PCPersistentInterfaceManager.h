/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/Versions/A/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, PCSimpleTimer, NSString, NSTimer, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	NSMapTable* _delegatesAndQueues;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _interfaceAssertion;
	NSString* _WWANInterfaceName;
	char _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	char _isWWANInterfaceDataActive;
	char _ctIsWWANInHomeCountry;
	char _hasWWANStatusIndicator;
	char _isWWANInterfaceSuspended;
	char _isPowerStateDetectionSupported;
	char _isWWANInterfaceInProlongedHighPowerState;
	char _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	char _isInCall;
	char _isWakeOnWiFiSupported;
	char _isWakeOnWiFiEnabled;
	CoreTelephonyClient* _ctClient;
	CTXPCServiceSubscriptionContext* _currentDataSimContext;
	void* _ctServerConnection;

}

@property (readonly) char isPowerStateDetectionSupported; 
@property (readonly) char isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) char isInCall; 
@property (readonly) char isWWANInterfaceActivationPermitted; 
@property (readonly) char areAllNetworkInterfacesDisabled; 
@property (nonatomic,readonly) char isWWANInterfaceUp; 
@property (nonatomic,readonly) char isWWANInHomeCountry; 
@property (nonatomic,readonly) char isWWANBetterThanWiFi; 
@property (nonatomic,readonly) char isWWANInterfaceSuspended; 
@property (nonatomic,readonly) char hasWWANStatusIndicator;                      //@synthesize hasWWANStatusIndicator=_hasWWANStatusIndicator - In the implementation block
@property (nonatomic,readonly) char doesWWANInterfaceExist; 
@property (nonatomic,readonly) NSString * WWANInterfaceName; 
@property (nonatomic,readonly) char isInternetReachableViaWiFi; 
@property (nonatomic,readonly) char isWakeOnWiFiSupported; 
@property (nonatomic,readonly) char isInternetReachable; 
@property (nonatomic,readonly) char allowBindingToWWAN; 
@property (nonatomic,readonly) NSString * currentLinkQualityString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_ctConnectionAttempt;
-(void)_mainThreadCTConnectionAttempt;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(void)_clearInCallWWANOverrideTimerLocked;
-(id)_nonCellularMonitor;
-(char)_wantsWWANInterfaceAssertion;
-(char)_isWWANInHomeCountryLocked;
-(char)_isInternetReachableLocked;
-(void)_adjustWakeOnWiFi;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(char)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFiLocked;
-(char)doesWWANInterfaceExist;
-(char)isWWANInterfaceActivationPermitted;
-(char)isInCall;
-(char)_isWiFiUsable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)_inCallWWANOverrideTimerFired;
-(void)_updateCTIsWWANInHomeCountry:(char)arg1 isWWANInterfaceDataActive:(char)arg2 ;
-(NSString *)currentLinkQualityString;
-(char)_wwanIsPoorLinkQuality;
-(char)_wifiIsPoorLinkQuality;
-(char)isWWANBetterThanWiFi;
-(char)isWWANInterfaceUp;
-(NSString *)WWANInterfaceName;
-(char)isWWANInterfaceSuspended;
-(char)isPowerStateDetectionSupported;
-(char)isWWANInterfaceInProlongedHighPowerState;
-(char)isWWANInHomeCountry;
-(char)isInternetReachableViaWiFi;
-(char)isWakeOnWiFiSupported;
-(char)areAllNetworkInterfacesDisabled;
-(void)_updateWWANInterfaceAssertions;
-(void)enableWiFiAutoAssociation:(char)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(char)arg1 forDelegate:(id)arg2 ;
-(char)allowBindingToWWAN;
-(char)hasWWANStatusIndicator;
-(void)dealloc;
-(id)init;
-(void)handleMachMessage:(void*)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(char)isInternetReachable;
@end

