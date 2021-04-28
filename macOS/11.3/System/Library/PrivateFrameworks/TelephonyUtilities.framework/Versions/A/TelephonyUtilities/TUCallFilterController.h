/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TUCallFilterControllerActions;
@class NSObject;

@interface TUCallFilterController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<TUCallFilterControllerActions> _actionsDelegate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,__weak,readonly) id<TUCallFilterControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,readonly) char silenceUnknownCallersEnabled; 
-(NSObject*<OS_dispatch_queue>)queue;
-(id<TUCallFilterControllerActions>)actionsDelegate;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(char)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(char)shouldRestrictDialRequest:(id)arg1 performSynchronously:(char)arg2 ;
-(id)bundleIdentifierForCallProvider:(id)arg1 ;
-(char)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(char)arg3 ;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(char)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(char)arg3 ;
-(char)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(char)silenceUnknownCallersEnabled;
-(char)isUnknownHandle:(id)arg1 ;
-(char)shouldRestrictDialRequest:(id)arg1 ;
-(unsigned long long)callFilterStatusForDialRequest:(id)arg1 ;
-(id)restrictedContacts:(id)arg1 callProvider:(id)arg2 ;
-(char)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(char)shouldRestrictConversation:(id)arg1 performSynchronously:(char)arg2 ;
-(char)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(char)arg2 ;
-(char)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 ;
@end
