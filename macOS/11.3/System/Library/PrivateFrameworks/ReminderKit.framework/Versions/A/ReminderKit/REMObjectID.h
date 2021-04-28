/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>
#import <libobjc.A.dylib/REMCRMergeableDataType.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSURL;

@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSString* _entityName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                        //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSURL * urlRepresentation; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)objectIDWithURL:(id)arg1 ;
+(id)objectIDWithUUID:(id)arg1 entityName:(id)arg2 ;
+(void)rem_registerClassAtCRCoderIfNeeded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(NSString *)stringRepresentation;
-(NSString *)entityName;
-(void)setDocument:(id)arg1 ;
-(id)tombstone;
-(NSURL *)urlRepresentation;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 entityName:(id)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
@end
