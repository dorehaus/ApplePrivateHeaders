/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKAccountObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, CKStoreClient, CKAccountStore, ASKCommerceAccountObserverProxy, CKStoreAccount, NSString;

@interface ASKStorefrontChangeProvider : NSObject <CKAccountObserver> {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	CKStoreClient* _storeClient;
	CKAccountStore* _accountStore;
	ASKCommerceAccountObserverProxy* _changeObserver;
	CKStoreAccount* _activeAccount;
	NSString* _currentStorefront;

}

@property (nonatomic,copy,readonly) id block;                                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> notifyQueue;                      //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,readonly) CKStoreClient * storeClient;                                   //@synthesize storeClient=_storeClient - In the implementation block
@property (nonatomic,readonly) CKAccountStore * accountStore;                                 //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) ASKCommerceAccountObserverProxy * changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,retain) CKStoreAccount * activeAccount;                                  //@synthesize activeAccount=_activeAccount - In the implementation block
@property (nonatomic,copy) NSString * currentStorefront;                                      //@synthesize currentStorefront=_currentStorefront - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(CKAccountStore *)accountStore;
-(CKStoreAccount *)activeAccount;
-(CKStoreClient *)storeClient;
-(void)accountStore:(id)arg1 primaryAccountChanged:(id)arg2 ;
-(ASKCommerceAccountObserverProxy *)changeObserver;
-(NSString *)currentStorefront;
-(void)setCurrentStorefront:(NSString *)arg1 ;
-(void)setActiveAccount:(CKStoreAccount *)arg1 ;
@end
