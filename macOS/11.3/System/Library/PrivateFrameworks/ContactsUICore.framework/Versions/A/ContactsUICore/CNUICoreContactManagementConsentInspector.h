/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUICoreContactManagementConsentCheck.h>

@protocol CNSchedulerProvider;
@class STManagementState, NSString;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck> {

	STManagementState* _managementState;
	id<CNSchedulerProvider> _schedulerProvider;

}

@property (nonatomic,readonly) STManagementState * managementState;                    //@synthesize managementState=_managementState - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;              //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1 ;
-(id)init;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)contactManagementConsentStateFutureForDSID:(id)arg1 ;
-(STManagementState *)managementState;
-(unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1 ;
@end

