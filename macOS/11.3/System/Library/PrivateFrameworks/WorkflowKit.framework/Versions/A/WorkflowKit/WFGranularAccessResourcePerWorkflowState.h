/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFAccessResourcePerWorkflowState.h>

@class NSSet, NSMapTable, NSString;

@interface WFGranularAccessResourcePerWorkflowState : NSObject <WFAccessResourcePerWorkflowState> {

	NSSet* _entries;
	NSMapTable* _entriesMapTable;

}

@property (nonatomic,retain) NSMapTable * entriesMapTable;               //@synthesize entriesMapTable=_entriesMapTable - In the implementation block
@property (nonatomic,readonly) NSSet * entries;                          //@synthesize entries=_entries - In the implementation block
@property (nonatomic,readonly) char hasDeniedEntries; 
@property (nonatomic,readonly) char hasUndeterminedEntries; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(Class)entryTypeClass;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)entries;
-(id)initWithEntries:(id)arg1 ;
-(id)stateByPerformingUnionWithState:(id)arg1 ;
-(id)stateByPopulatingNotDeterminedEntriesUsingState:(id)arg1 ;
-(id)stateBySettingUndeterminedEntriesToAuthorized:(char)arg1 ;
-(id)stateBySettingAllEntriesAsAuthorized:(char)arg1 ;
-(char)hasDeniedEntries;
-(char)hasUndeterminedEntries;
-(NSMapTable *)entriesMapTable;
-(void)setEntriesMapTable:(NSMapTable *)arg1 ;
@end

