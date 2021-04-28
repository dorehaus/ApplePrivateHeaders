/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/Versions/A/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegatePrivate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@protocol OS_dispatch_queue;
@class ACAccountStore, NSNumber, AXDispatchTimer, CTXPCServiceSubscriptionContext, NSSet, CNContactStore, CoreTelephonyClient, NSObject, NSArray, CTXPCContexts, NSMutableDictionary, NSString;

@interface RTTTelephonyUtilities : NSObject <CoreTelephonyClientCarrierBundleDelegate, TUCallCapabilitiesDelegatePrivate, TUCallCapabilitiesDelegate> {

	ACAccountStore* _accountStore;
	NSNumber* _callCapabilitiesSupportsTelephonyCalls;
	AXDispatchTimer* _icloudAccountConsolidator;
	AXDispatchTimer* _icloudRelayConsolidator;
	char _headphoneJackSupportsTTY;
	CTXPCServiceSubscriptionContext* _defaultVoiceContext;
	unsigned long long _activeContextCount;
	NSSet* _allVoiceContexts;
	CNContactStore* _contactStore;
	CoreTelephonyClient* _telephonyClient;
	NSObject*<OS_dispatch_queue> _telephonyUpdateQueue;
	NSObject*<OS_dispatch_queue> _accountStoreQueue;
	NSArray* _cachedSubscriptionContexts;
	CTXPCContexts* _cachedActiveContexts;
	NSMutableDictionary* _phoneNumberInfoCache;

}

@property (assign,nonatomic) char headphoneJackSupportsTTY;                                  //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) CoreTelephonyClient * telephonyClient;                          //@synthesize telephonyClient=_telephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> telephonyUpdateQueue;              //@synthesize telephonyUpdateQueue=_telephonyUpdateQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountStoreQueue;                 //@synthesize accountStoreQueue=_accountStoreQueue - In the implementation block
@property (retain) CTXPCServiceSubscriptionContext * defaultVoiceContext;                    //@synthesize defaultVoiceContext=_defaultVoiceContext - In the implementation block
@property (retain) NSSet * allVoiceContexts;                                                 //@synthesize allVoiceContexts=_allVoiceContexts - In the implementation block
@property (assign) unsigned long long activeContextCount;                                    //@synthesize activeContextCount=_activeContextCount - In the implementation block
@property (retain) NSNumber * callCapabilitiesSupportsTelephonyCalls; 
@property (retain) NSArray * cachedSubscriptionContexts;                                     //@synthesize cachedSubscriptionContexts=_cachedSubscriptionContexts - In the implementation block
@property (retain) CTXPCContexts * cachedActiveContexts;                                     //@synthesize cachedActiveContexts=_cachedActiveContexts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * phoneNumberInfoCache;                     //@synthesize phoneNumberInfoCache=_phoneNumberInfoCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUtilityProvider;
+(char)relayIsSupported;
+(char)isRTTSupportedForContext:(id)arg1 ;
+(char)isRTTSupported;
+(char)isTTYSupportedForContext:(id)arg1 ;
+(char)isTTYSupported;
+(char)hardwareTTYIsSupportedForContext:(id)arg1 ;
+(char)hardwareTTYIsSupported;
+(char)softwareTTYIsSupportedForContext:(id)arg1 ;
+(char)softwareTTYIsSupported;
+(id)sharedCallCenter;
+(void)performCallCenterTask:(/*^block*/id)arg1 ;
+(char)isRelayRTTSupported;
+(char)isOnlyRTTSupportedForContext:(id)arg1 ;
+(char)shouldUseRTTForContext:(id)arg1 ;
+(id)relayPhoneNumber;
+(char)isOnlyRTTSupported;
+(id)relayPhoneNumberForContext:(id)arg1 ;
+(char)TTYHardwareEnabledForAnyActiveContext;
+(char)TTYSoftwareEnabledForAnyActiveContext;
+(char)shouldUseRTT;
+(long long)currentSupportedTextingType;
+(char)relayIsSupportedForContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)subscriptionInfoDidChange;
-(void)activeSubscriptionsDidChange;
-(void)simLessSubscriptionsDidChange;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)activeContexts;
-(char)contactIsTTYContact:(id)arg1 ;
-(char)relayIsSupported;
-(void)didChangeTelephonyCallingSupport;
-(void)didChangeRelayCallingCapabilities;
-(void)didChangeRelayCallingAvailability;
-(void)didChangeOutgoingRelayCallerID;
-(char)isTTYSupportedForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethodForContext:(id)arg1 ;
-(unsigned long long)currentPreferredTransportMethod;
-(char)reloadRelayPhoneNumbers;
-(CTXPCServiceSubscriptionContext *)defaultVoiceContext;
-(void)setTTYDictionaryAvailability:(char)arg1 ;
-(char)isTTYOverIMSSupportedForContext:(id)arg1 ;
-(NSSet *)allVoiceContexts;
-(id)relayNumberForContext:(id)arg1 ;
-(void)setTelephonyUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(void)setAccountStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)reloadDefaultVoiceContext;
-(void)listenForCloudRelayChanges;
-(void)setCallCapabilitiesSupportsTelephonyCalls:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_queue>)telephonyUpdateQueue;
-(void)updateHeadphoneState;
-(NSNumber *)callCapabilitiesSupportsTelephonyCalls;
-(char)headphoneJackSupportsTTY;
-(id)phoneNumberForContext:(id)arg1 ;
-(CoreTelephonyClient *)telephonyClient;
-(id)subscriptionContexts;
-(id)phoneNumberFromUUID:(id)arg1 ;
-(void)purgePhoneNumberInfoCache;
-(void)setCachedSubscriptionContexts:(NSArray *)arg1 ;
-(void)setCachedActiveContexts:(CTXPCContexts *)arg1 ;
-(void)carrierSettingsDidChange;
-(CTXPCContexts *)cachedActiveContexts;
-(NSArray *)cachedSubscriptionContexts;
-(void)setDefaultVoiceContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setActiveContextCount:(unsigned long long)arg1 ;
-(void)setAllVoiceContexts:(NSSet *)arg1 ;
-(id)getCarrierValueForKeyHierarchy:(id)arg1 andContext:(id)arg2 ;
-(id)getCarrierValueForKey:(id)arg1 andContext:(id)arg2 ;
-(char)currentProcessHandlesCloudRelay;
-(void)iCloudRTTRelayDidChange:(id)arg1 ;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountStoreQueue;
-(char)relayRTTIsSupported;
-(void)headphoneStateChangedNotification:(id)arg1 ;
-(void)_processiCloudAccountForRTT;
-(id)myPhoneNumber;
-(id)ttyMeContact;
-(char)contactPathIsMe:(id)arg1 ;
-(id)contactPathForCall:(id)arg1 ;
-(id)labelFromUUID:(id)arg1 ;
-(unsigned long long)activeContextCount;
-(void)setHeadphoneJackSupportsTTY:(char)arg1 ;
-(NSMutableDictionary *)phoneNumberInfoCache;
-(void)setPhoneNumberInfoCache:(NSMutableDictionary *)arg1 ;
@end

