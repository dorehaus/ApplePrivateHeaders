/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/Versions/A/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockdownManager : NSObject {

	char _settingUpActivationState;
	char _isInternalInstall;
	char _isCarrierInstall;
	char _isNonUIInstall;
	char _isVendorInstall;
	char _hasShownMismatchedSIM;
	char _hasShownWaitingAlertThisSession;
	unsigned long long _state;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long _state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char _settingUpActivationState;                           //@synthesize settingUpActivationState=_settingUpActivationState - In the implementation block
@property (assign,nonatomic) char _isVendorInstall;                                    //@synthesize isVendorInstall=_isVendorInstall - In the implementation block
@property (assign,nonatomic) char _isInternalInstall;                                  //@synthesize isInternalInstall=_isInternalInstall - In the implementation block
@property (assign,nonatomic) char _isNonUIInstall;                                     //@synthesize isNonUIInstall=_isNonUIInstall - In the implementation block
@property (assign,nonatomic) char _isCarrierInstall;                                   //@synthesize isCarrierInstall=_isCarrierInstall - In the implementation block
@property (assign,nonatomic) char _hasShownWaitingAlertThisSession;                    //@synthesize hasShownWaitingAlertThisSession=_hasShownWaitingAlertThisSession - In the implementation block
@property (assign,nonatomic) char _hasShownMismatchedSIM;                              //@synthesize hasShownMismatchedSIM=_hasShownMismatchedSIM - In the implementation block
@property (nonatomic,readonly) char isNonUIInstall; 
@property (nonatomic,readonly) char isVendorInstall; 
@property (nonatomic,readonly) char isInternalInstall; 
@property (nonatomic,readonly) char isCarrierInstall; 
@property (nonatomic,readonly) char isActivated; 
@property (nonatomic,readonly) char isExpired; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
+(id)sharedInstance;
-(void)dealloc;
-(id)description;
-(id)init;
-(unsigned long long)_state;
-(NSString *)uniqueDeviceIdentifier;
-(char)isInternalInstall;
-(char)isCarrierInstall;
-(char)isExpired;
-(char)isNonUIInstall;
-(void)_calculateInstallType;
-(void)_setupActivationState;
-(long long)lockdownState;
-(void)_resetActivationState;
-(void)_setState:(unsigned long long)arg1 ;
-(char)isVendorInstall;
-(char)isActivated;
-(char)_settingUpActivationState;
-(void)set_settingUpActivationState:(char)arg1 ;
-(char)_isInternalInstall;
-(void)set_isInternalInstall:(char)arg1 ;
-(char)_isCarrierInstall;
-(void)set_isCarrierInstall:(char)arg1 ;
-(char)_isNonUIInstall;
-(void)set_isNonUIInstall:(char)arg1 ;
-(char)_isVendorInstall;
-(void)set_isVendorInstall:(char)arg1 ;
-(char)_hasShownMismatchedSIM;
-(void)set_hasShownMismatchedSIM:(char)arg1 ;
-(char)_hasShownWaitingAlertThisSession;
-(void)set_hasShownWaitingAlertThisSession:(char)arg1 ;
@end

