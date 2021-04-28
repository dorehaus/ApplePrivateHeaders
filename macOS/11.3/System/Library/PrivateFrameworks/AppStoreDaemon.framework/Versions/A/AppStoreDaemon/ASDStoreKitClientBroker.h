/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ASDStoreKitClientProtocol.h>

@class NSMapTable, NSString;

@interface ASDStoreKitClientBroker : NSObject <ASDStoreKitClientProtocol> {

	NSMapTable* _clients;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBroker;
-(id)init;
-(void)handleAuthenticateRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleDialogRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)handleEngagementRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1 ;
-(void)updatedTransactions:(id)arg1 ;
-(void)removedTransactions:(id)arg1 ;
-(void)downloadAdded:(id)arg1 ;
-(void)downloadStatusChanged:(id)arg1 ;
-(void)downloadRemoved:(id)arg1 ;
-(void)storefrontChanged:(id)arg1 ;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)unregisterClientWithIdentifier:(id)arg1 ;
@end

