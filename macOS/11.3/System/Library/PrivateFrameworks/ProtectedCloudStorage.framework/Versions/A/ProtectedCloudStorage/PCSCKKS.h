/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/Versions/A/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtectedCloudStorage/ProtectedCloudStorage-Structs.h>
@class NSOperationQueue, NSString;

@interface PCSCKKS : NSObject {

	PCSIdentitySetDataRef _set;
	NSOperationQueue* _queue;
	NSString* _dsid;

}

@property (assign) PCSIdentitySetDataRef set;              //@synthesize set=_set - In the implementation block
@property (retain) NSOperationQueue * queue;               //@synthesize queue=_queue - In the implementation block
@property (retain) NSString * dsid;                        //@synthesize dsid=_dsid - In the implementation block
-(id)syncViewOperation:(id)arg1 ;
-(id)fetchCurrentOperation:(id)arg1 ;
-(id)ensurePCSFieldsOperation:(id)arg1 ;
-(id)createIdentityOperation:(id)arg1 ;
-(id)stripOperationErrorIfPCSError:(id)arg1 ;
-(void)createIdentity:(id)arg1 complete:(/*^block*/id)arg2 ;
-(BOOL)shouldRetryWithSync:(id)arg1 ;
-(void)submitRequest:(id)arg1 complete:(/*^block*/id)arg2 ;
-(void)dealloc;
-(PCSIdentitySetDataRef)set;
-(void)setSet:(PCSIdentitySetDataRef)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(id)initWithIdentitySet:(PCSIdentitySetDataRef)arg1 dsid:(id)arg2 ;
-(void)createNewIdentity:(id)arg1 roll:(char)arg2 sync:(char)arg3 complete:(/*^block*/id)arg4 ;
@end

