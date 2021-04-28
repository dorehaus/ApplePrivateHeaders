/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/MTLModel.h>
@class NSDictionary;


@protocol MTLModel <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@required
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2;
-(char)validate:(id*)arg1;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2;
-(NSDictionary *)dictionaryValue;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;

@end


@class NSDictionary, NSString;

@interface MTLModel : NSObject <NSCoding, MTLModel>

@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(unsigned long long)modelVersion;
+(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)permanentPropertyKeys;
+(id)transitoryPropertyKeys;
+(void)generateAndCacheStorageBehaviors;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
+(id)encodingBehaviorsByPropertyKey;
+(id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)validate:(id*)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)dictionaryValue;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2 ;
-(void)mergeValuesForKeysFromModel:(id)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end

