/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/Versions/A/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SFExternalCredentialIdentityStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(id)_credentialIdentityStoreWithIdentifier:(id)arg1 ;
-(void)getCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCredentialIdentityStoreWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
