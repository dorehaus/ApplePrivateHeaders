/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface NSMappingModel : NSObject <NSSecureCoding> {

	void* _reserved;
	void* _reserved1;
	void* _reserved2;
	NSMutableArray* _entityMappings;
	NSMutableDictionary* _entityMappingsByName;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedModelMapping : 31;
	}  _modelMappingFlags;

}

@property (retain) NSArray * entityMappings; 
@property (copy,readonly) NSDictionary * entityMappingsByName; 
+(int)migrationDebugLevel;
+(id)_mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3 ;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(void)initialize;
+(char)supportsSecureCoding;
+(id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
+(id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
-(void)_setIsEditable:(char)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(id)_initWithEntityMappings:(id)arg1 ;
-(void)_addEntityMapping:(id)arg1 ;
-(NSDictionary *)entityMappingsByName;
-(char)_isInferredMappingModel;
-(char)_hasInferredMappingNeedingValidation;
-(id)_sourceEntityVersionHashesByName;
-(id)_destinationEntityVersionHashesByName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEditable;
-(NSArray *)entityMappings;
-(void)setEntityMappings:(NSArray *)arg1 ;
@end
