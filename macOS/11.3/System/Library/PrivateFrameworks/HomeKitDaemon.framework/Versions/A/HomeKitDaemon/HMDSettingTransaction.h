/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDSettingTransaction.h>

@protocol HMDSettingTransaction <NSObject>
@required
-(void)addSettingModel:(id)arg1;
-(void)addModel:(id)arg1;
-(void)removeModelWithIdentifier:(id)arg1;

@end


@class NSString, NSMutableSet;

@interface HMDSettingTransaction : NSObject <HMDSettingTransaction> {

	char _initialCreation;
	NSString* _transactionLabel;
	NSMutableSet* _updateModels;
	NSMutableSet* _removeUUIDs;

}

@property (readonly) NSString * transactionLabel;                   //@synthesize transactionLabel=_transactionLabel - In the implementation block
@property (readonly) NSMutableSet * updateModels;                   //@synthesize updateModels=_updateModels - In the implementation block
@property (readonly) NSMutableSet * removeUUIDs;                    //@synthesize removeUUIDs=_removeUUIDs - In the implementation block
@property (readonly) char initialCreation;                          //@synthesize initialCreation=_initialCreation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)updateModels;
-(NSMutableSet *)removeUUIDs;
-(void)addSettingModel:(id)arg1 ;
-(void)addModel:(id)arg1 ;
-(void)removeModelWithIdentifier:(id)arg1 ;
-(id)initWithTransactionLabel:(id)arg1 ;
-(id)initForInitialCreationWithTransactionLabel:(id)arg1 ;
-(void)addModelToBeUpdated:(id)arg1 ;
-(NSString *)transactionLabel;
-(char)initialCreation;
@end

