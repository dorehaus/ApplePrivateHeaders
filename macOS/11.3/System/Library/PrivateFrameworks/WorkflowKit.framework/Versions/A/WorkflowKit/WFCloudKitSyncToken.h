/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRecord.h>

@class NSString, NSDate, NSData, CKServerChangeToken, NSOrderedSet;

@interface WFCloudKitSyncToken : WFRecord {

	NSString* _identifier;
	NSString* _account;
	NSDate* _date;
	NSData* _serverChangeTokenData;
	NSData* _lastOrderingData;
	NSData* _lastOrderingCloudKitRecordMetadata;
	NSData* _syncEngineMetadata;
	NSData* _syncFlagsCloudKitRecordMetadata;

}

@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * account;                                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSData * serverChangeTokenData;                           //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingData;                                //@synthesize lastOrderingData=_lastOrderingData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingCloudKitRecordMetadata;              //@synthesize lastOrderingCloudKitRecordMetadata=_lastOrderingCloudKitRecordMetadata - In the implementation block
@property (nonatomic,copy) NSData * syncEngineMetadata;                              //@synthesize syncEngineMetadata=_syncEngineMetadata - In the implementation block
@property (nonatomic,copy) NSData * syncFlagsCloudKitRecordMetadata;                 //@synthesize syncFlagsCloudKitRecordMetadata=_syncFlagsCloudKitRecordMetadata - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSOrderedSet * lastOrdering; 
+(id)defaultPropertyValues;
+(id)accountForContainerEnvironmentString:(id)arg1 userRecordID:(id)arg2 ;
+(id)ignoredPropertyNames;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(NSData *)syncEngineMetadata;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(NSData *)serverChangeTokenData;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(void)setSyncEngineMetadata:(NSData *)arg1 ;
-(void)setSyncFlagsCloudKitRecordMetadata:(NSData *)arg1 ;
-(id)newTokenWithCopiedPayload;
-(NSOrderedSet *)lastOrdering;
-(void)setLastOrdering:(NSOrderedSet *)arg1 ;
-(NSData *)syncFlagsCloudKitRecordMetadata;
-(NSData *)lastOrderingData;
-(void)setLastOrderingData:(NSData *)arg1 ;
-(NSData *)lastOrderingCloudKitRecordMetadata;
-(void)setLastOrderingCloudKitRecordMetadata:(NSData *)arg1 ;
@end

