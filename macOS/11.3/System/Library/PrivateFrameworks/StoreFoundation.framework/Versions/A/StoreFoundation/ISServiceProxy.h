/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreFoundation.framework/Versions/A/StoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISStoreClient, Protocol;

@interface ISServiceProxy : NSObject {

	ISStoreClient* _storeClient;

}

@property (nonatomic,__weak,readonly) id<ISServiceRemoteObject> exportedObject; 
@property (nonatomic,readonly) Protocol * exportedProtocol; 
@property (nonatomic,retain) ISStoreClient * storeClient;                                    //@synthesize storeClient=_storeClient - In the implementation block
@property (nonatomic,readonly) id<ISAccountService> accountService; 
@property (nonatomic,readonly) id<ISDownloadService> downloadService; 
@property (nonatomic,readonly) id<ISAssetService> assetService; 
@property (nonatomic,readonly) id<ISTransactionService> transactionService; 
@property (nonatomic,readonly) id<ISUIService> uiService; 
+(void)initialize;
+(id)genericSharedProxy;
-(id<ISServiceRemoteObject>)exportedObject;
-(id)initWithStoreClient:(id)arg1 ;
-(id<ISUIService>)uiService;
-(ISStoreClient *)storeClient;
-(id<ISTransactionService>)transactionService;
-(void)registerForInterrptionNotification;
-(void)assetServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(id<ISAssetService>)assetService;
-(void)connectionWasInterrupted;
-(void)setStoreClient:(ISStoreClient *)arg1 ;
-(id<ISDownloadService>)downloadService;
-(id<ISAccountService>)accountService;
-(void)transactionServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(void)downloadServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(void)accountServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(void)uiServiceSynchronousBlock:(/*^block*/id)arg1 ;
-(Protocol *)exportedProtocol;
-(id)connectionWithServiceName:(id)arg1 protocol:(id)arg2 isMachService:(char)arg3 ;
-(id)objectProxyForServiceName:(id)arg1 protocol:(id)arg2 interfaceClassName:(id)arg3 isMachService:(char)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)accountServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)performSynchronousBlock:(/*^block*/id)arg1 withServiceName:(id)arg2 protocol:(id)arg3 isMachService:(char)arg4 interfaceClassName:(id)arg5 ;
-(id)downloadServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)assetServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)transactionServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)uiServiceWithErrorHandler:(/*^block*/id)arg1 ;
@end

