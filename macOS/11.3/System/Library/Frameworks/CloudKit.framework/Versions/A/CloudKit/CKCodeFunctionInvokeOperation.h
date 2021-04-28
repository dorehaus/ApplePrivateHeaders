/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKCodeFunctionInvokeOperationCallbacks.h>

@class NSString, NSData, NSURL, NSError, CKCodeFunctionInvokeOperationInfo;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation <CKCodeFunctionInvokeOperationCallbacks> {

	char _local;
	char _shouldFetchAssetContentInMemory;
	/*^block*/id _functionInvokeCompletionBlock;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedRequest;
	NSURL* _clientRuntimeProvidedServiceURL;
	NSData* _serializedResponse;
	NSError* _responseError;

}

@property (nonatomic,copy) NSString * serviceName;                                                                   //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                                                                  //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSData * serializedRequest;                                                               //@synthesize serializedRequest=_serializedRequest - In the implementation block
@property (assign,nonatomic) char local;                                                                             //@synthesize local=_local - In the implementation block
@property (nonatomic,copy) NSURL * clientRuntimeProvidedServiceURL;                                                  //@synthesize clientRuntimeProvidedServiceURL=_clientRuntimeProvidedServiceURL - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContentInMemory;                                                   //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (nonatomic,copy) NSData * serializedResponse;                                                              //@synthesize serializedResponse=_serializedResponse - In the implementation block
@property (nonatomic,retain) NSError * responseError;                                                                //@synthesize responseError=_responseError - In the implementation block
@property (nonatomic,readonly) id<CKCodeFunctionInvokeOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKCodeFunctionInvokeOperationInfo * operationInfo; 
@property (nonatomic,copy) id functionInvokeCompletionBlock;                                                         //@synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(char)hasCKOperationCallbacksSet;
-(char)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(char)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(char)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setClientRuntimeProvidedServiceURL:(NSURL *)arg1 ;
-(void)handleReplaceLocalWithWireSerializations:(id)arg1 encryptedMasterKeys:(id)arg2 wireEnvelopes:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleInitialResponseReceived:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)handleReplaceWireSerializationsWithRecords:(id)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
-(NSError *)responseError;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 local:(char)arg4 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedRequest:(id)arg3 ;
-(char)local;
-(void)setLocal:(char)arg1 ;
-(id)functionInvokeCompletionBlock;
-(NSData *)serializedRequest;
-(void)setSerializedResponse:(NSData *)arg1 ;
-(NSData *)serializedResponse;
-(void)setFunctionInvokeCompletionBlock:(id)arg1 ;
-(NSURL *)clientRuntimeProvidedServiceURL;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 local:(char)arg4 ;
-(id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3 ;
-(void)setSerializedRequest:(NSData *)arg1 ;
@end

