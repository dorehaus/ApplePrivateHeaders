/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKStoreClient;

@interface CKPushNotificationManager : NSObject {

	id _delegate;
	CKStoreClient* _storeClient;

}

@property (nonatomic,readonly) CKStoreClient * storeClient;                     //@synthesize storeClient=_storeClient - In the implementation block
@property (__weak) id<CKPushNotificationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(id)pushNotificationManagerForStoreClient:(id)arg1 ;
-(id<CKPushNotificationManagerDelegate>)delegate;
-(void)setDelegate:(id<CKPushNotificationManagerDelegate>)arg1 ;
-(char)start;
-(char)stop;
-(id)initWithStoreClient:(id)arg1 ;
-(CKStoreClient *)storeClient;
-(void)_sendSuccessToDelegate;
-(void)_sendErrorToDelegate:(id)arg1 ;
-(void)registerDeviceTokenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableAutoDownloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableAutoDownloadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableAutoDownloadAtSignInWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)disableAutoDownloadAtSignOutWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isRegisteredForAccount:(id)arg1 andMask:(long long)arg2 ;
-(char)registerPushToken;
-(void)getEnabledMedaTypesWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)checkEnabledMediaTypes;
-(char)startAtSignIn;
-(char)stopAtSignOut;
-(char)isRegisteredForAccount:(id)arg1 ;
-(void)_sendChangedToDelegate;
@end

