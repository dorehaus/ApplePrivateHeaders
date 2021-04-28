/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@protocol CNTCCCNTCCSimulation;
@class CNAuditToken, NSNumber;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation> {

	CNAuditToken* _auditToken;
	id<CNTCC><CNTCCSimulation> _tccServices;
	Class _entitlementVerifier;
	NSNumber* _authorizationStatusCachedValue;
	NSNumber* _isNotesAccessGrantedCachedValue;
	NSNumber* _isClientFirstOrSecondPartyCachedValue;

}

@property (nonatomic,retain) CNAuditToken * auditToken;                                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) id<CNTCC><CNTCCSimulation> tccServices;                        //@synthesize tccServices=_tccServices - In the implementation block
@property (nonatomic,retain) Class entitlementVerifier;                                     //@synthesize entitlementVerifier=_entitlementVerifier - In the implementation block
@property (nonatomic,retain) NSNumber * authorizationStatusCachedValue;                     //@synthesize authorizationStatusCachedValue=_authorizationStatusCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isNotesAccessGrantedCachedValue;                    //@synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue - In the implementation block
@property (nonatomic,retain) NSNumber * isClientFirstOrSecondPartyCachedValue;              //@synthesize isClientFirstOrSecondPartyCachedValue=_isClientFirstOrSecondPartyCachedValue - In the implementation block
@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) char isAccessGranted; 
@property (nonatomic,readonly) char isAccess1Granted; 
@property (nonatomic,readonly) char isAccess2Granted; 
@property (nonatomic,readonly) char isNotesAccessGranted; 
@property (nonatomic,readonly) char isAccessRestricted; 
@property (nonatomic,readonly) char isClientFirstOrSecondParty; 
@property (nonatomic,readonly) char isClientTCCWhitelisted; 
+(id)sharedInstance;
+(id)os_log;
-(id)init;
-(CNAuditToken *)auditToken;
-(void)setAuditToken:(CNAuditToken *)arg1 ;
-(char)isAccessGranted;
-(id)initWithAuditToken:(SCD_Struct_CN1)arg1 ;
-(long long)authorizationStatus;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)simulateStatus:(long long)arg1 ;
-(void)stopSimulation;
-(id)initWithCNAuditToken:(id)arg1 tccServices:(id)arg2 entitlementVerifier:(Class)arg3 ;
-(void)checkAndUpdateAuthorizationStatusIfUnknown;
-(char)isAccess1Granted;
-(char)isAccess2Granted;
-(id)checkIfNotesAccessGranted;
-(id<CNTCC><CNTCCSimulation>)tccServices;
-(char)checkIsClientTCCWhitelisted;
-(id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
-(char)isAccessGrantedRequestingAccessIfNeeded;
-(id)errorForStatus:(long long)arg1 ;
-(id)requestAuthorizationFuture:(long long)arg1 ;
-(char)isClientTCCWhitelisted;
-(char)checkIsClientNotesEntitled;
-(Class)entitlementVerifier;
-(long long)resolveRequestAuthorizationFuture:(id)arg1 ;
-(char)isNotesAccessGranted;
-(char)isAccessRestricted;
-(char)isClientFirstOrSecondParty;
-(char)requestAccessWithError:(id*)arg1 ;
-(void)setTccServices:(id<CNTCC><CNTCCSimulation>)arg1 ;
-(void)setEntitlementVerifier:(Class)arg1 ;
-(NSNumber *)authorizationStatusCachedValue;
-(void)setAuthorizationStatusCachedValue:(NSNumber *)arg1 ;
-(NSNumber *)isNotesAccessGrantedCachedValue;
-(void)setIsNotesAccessGrantedCachedValue:(NSNumber *)arg1 ;
-(NSNumber *)isClientFirstOrSecondPartyCachedValue;
-(void)setIsClientFirstOrSecondPartyCachedValue:(NSNumber *)arg1 ;
@end

