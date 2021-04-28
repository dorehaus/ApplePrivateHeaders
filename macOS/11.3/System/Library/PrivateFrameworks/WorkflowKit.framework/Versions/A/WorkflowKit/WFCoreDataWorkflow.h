/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class WFWorkflowIcon, WFWorkflowQuarantine, NSArray, NSSet, NSString, NSData, NSDate, WFCoreDataWorkflowActions, WFCoreDataWorkflowIcon, WFCoreDataWorkflowQuarantine;

@interface WFCoreDataWorkflow : NSManagedObject <WFRecordStorage>

@property (nonatomic,retain) WFWorkflowIcon * workflowIcon; 
@property (nonatomic,retain) WFWorkflowQuarantine * workflowQuarantine; 
@property (nonatomic,retain) NSArray * workflowTypes; 
@property (assign,nonatomic) char hiddenFromLibraryAndSync; 
@property (nonatomic,copy) NSArray * deserializedActions; 
@property (nonatomic,copy) NSArray * deserializedInputClasses; 
@property (nonatomic,copy) NSArray * deserializedImportQuestions; 
@property (nonatomic,copy) NSSet * accessResourcePerWorkflowStates; 
@property (getter=isConflictOfOtherWorkflow,nonatomic,readonly) char conflictOfOtherWorkflow; 
@property (nonatomic,readonly) unsigned long long estimatedSize; 
@property (assign,nonatomic) long long remoteQuarantineStatus; 
@property (nonatomic,copy) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long actionCount; 
@property (nonatomic,copy) NSString * actionsDescription; 
@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,retain) NSData * cloudKitRecordMetadata; 
@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSString * galleryIdentifier; 
@property (assign,nonatomic) char hiddenFromWidget; 
@property (nonatomic,retain) NSData * importQuestionsData; 
@property (nonatomic,retain) NSData * inputClassesData; 
@property (nonatomic,copy) NSString * lastMigratedClientVersion; 
@property (nonatomic,copy) NSDate * lastRunEventDate; 
@property (nonatomic,copy) NSString * lastSavedOnDeviceName; 
@property (assign,nonatomic) long long lastSyncedHash; 
@property (nonatomic,copy) NSString * minimumClientVersion; 
@property (nonatomic,copy) NSDate * modificationDate; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phrase; 
@property (assign,nonatomic) int remoteQuarantineStatusValue; 
@property (nonatomic,readonly) long long runEventsCount; 
@property (nonatomic,copy) NSString * source; 
@property (assign,nonatomic) long long syncHash; 
@property (assign,nonatomic) char tombstoned; 
@property (nonatomic,copy) NSString * workflowID; 
@property (nonatomic,copy) NSString * workflowSubtitle; 
@property (nonatomic,retain) NSSet * accessResourcePermissions; 
@property (nonatomic,retain) WFCoreDataWorkflowActions * actions; 
@property (nonatomic,retain) WFCoreDataWorkflow * conflictOf; 
@property (nonatomic,retain) NSSet * conflicts; 
@property (nonatomic,retain) WFCoreDataWorkflowIcon * icon; 
@property (nonatomic,retain) NSSet * parents; 
@property (nonatomic,retain) WFCoreDataWorkflowQuarantine * quarantine; 
@property (nonatomic,retain) NSSet * runEvents; 
@property (nonatomic,retain) NSSet * triggers; 
@property (nonatomic,retain) NSSet * trustedDomains; 
+(id)fetchRequest;
+(id)recordPropertyMap;
+(id)descriptorFetchRequest;
-(id)identifier;
-(id)descriptor;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(unsigned long long)estimatedSize;
-(void)didUpdateProperties:(id)arg1 ;
-(char)hiddenFromLibraryAndSync;
-(long long)computedSyncHash;
-(long long)remoteQuarantineStatus;
-(void)setRemoteQuarantineStatus:(long long)arg1 ;
-(NSArray *)workflowTypes;
-(void)setWorkflowTypes:(NSArray *)arg1 ;
-(NSSet *)accessResourcePerWorkflowStates;
-(void)setAccessResourcePerWorkflowStates:(NSSet *)arg1 ;
-(WFWorkflowIcon *)workflowIcon;
-(NSArray *)deserializedInputClasses;
-(NSArray *)deserializedActions;
-(NSArray *)deserializedImportQuestions;
-(void)setWorkflowIcon:(WFWorkflowIcon *)arg1 ;
-(WFWorkflowQuarantine *)workflowQuarantine;
-(void)setWorkflowQuarantine:(WFWorkflowQuarantine *)arg1 ;
-(void)setHiddenFromLibraryAndSync:(char)arg1 ;
-(void)setDeserializedActions:(NSArray *)arg1 ;
-(void)setDeserializedInputClasses:(NSArray *)arg1 ;
-(void)setDeserializedImportQuestions:(NSArray *)arg1 ;
-(char)isConflictOfOtherWorkflow;
@end

