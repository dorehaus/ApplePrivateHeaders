/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/Versions/A/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSTransactionLogTaskHandlerDelegate.h>
#import <IDS/IDSGroupContextNotifyingObserverDelegate.h>

@protocol IDSGroupContextControllerDelegate, OS_dispatch_queue;
@class NSObject, CUTPromiseSeal, NSString;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate> {

	id<IDSGroupContextControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CUTPromiseSeal* _seal;
	NSString* _serviceName;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                          //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) id<IDSGroupContextControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CUTPromiseSeal * seal;                                       //@synthesize seal=_seal - In the implementation block
@property (nonatomic,retain) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IDSGroupContextControllerDelegate>)delegate;
-(void)setDelegate:(id<IDSGroupContextControllerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)serviceName;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)persistedTokenForTaskHandler:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleTransactionLogTask:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(void)groupContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_contentWithCompletion:(/*^block*/id)arg1 ;
-(void)setSeal:(CUTPromiseSeal *)arg1 ;
-(CUTPromiseSeal *)seal;
-(void)qSetupSeal;
-(void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

