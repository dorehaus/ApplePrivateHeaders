/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDBackingStore, NSString;

@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging> {

	NSUUID* _identifier;
	HMDBackingStore* _backingStore;

}

@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDBackingStore * backingStore;                //@synthesize backingStore=_backingStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)identifier;
-(HMDBackingStore *)backingStore;
-(id)privateDescription;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)runTransactionWithModel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)backingStoreObjectsForVersion:(long long)arg1 ;
-(void)runTransactionWithModel:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runTransactionWithModels:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runTransactionWithModels:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
