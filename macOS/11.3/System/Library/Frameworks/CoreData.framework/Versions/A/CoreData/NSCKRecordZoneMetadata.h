/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, CKServerChangeToken, NSCKDatabaseMetadata, NSDate, NSSet;

@interface NSCKRecordZoneMetadata : NSManagedObject

@property (nonatomic,retain) NSNumber * hasRecordZoneNum; 
@property (nonatomic,retain) NSNumber * hasSubscriptionNum; 
@property (nonatomic,retain) NSString * ckRecordZoneName; 
@property (nonatomic,retain) NSString * ckOwnerName; 
@property (nonatomic,retain) CKServerChangeToken * currentChangeToken; 
@property (nonatomic,retain) NSCKDatabaseMetadata * database; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (assign,nonatomic) char hasRecordZone; 
@property (assign,nonatomic) char hasSubscription; 
@property (nonatomic,retain) NSSet * records; 
@property (nonatomic,retain) NSSet * mirroredRelationships; 
@property (nonatomic,retain) NSSet * queries; 
@property (assign,nonatomic) char supportsFetchChanges; 
@property (assign,nonatomic) char supportsAtomicChanges; 
@property (assign,nonatomic) char supportsRecordSharing; 
@property (assign,nonatomic) char needsImport; 
@property (assign,nonatomic) char needsRecoveryFromZoneDelete; 
@property (assign,nonatomic) char needsRecoveryFromUserPurge; 
+(id)entityPath;
+(id)zoneMetadataForZoneID:(id)arg1 inDatabaseWithScope:(long long)arg2 forStore:(id)arg3 inContext:(id)arg4 error:(id*)arg5 ;
-(void)setHasRecordZone:(char)arg1 ;
-(char)hasSubscription;
-(void)setHasSubscription:(char)arg1 ;
-(char)hasRecordZone;
@end
