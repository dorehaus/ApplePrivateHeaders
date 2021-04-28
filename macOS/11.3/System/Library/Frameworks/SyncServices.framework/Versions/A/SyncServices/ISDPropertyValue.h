/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SyncServices/SyncServices-Structs.h>
@class NSString;

@interface ISDPropertyValue : NSObject {

	NSString* _name;
	int _clientNumber;
	id _value;
	id _deletedValue;
	id _unformattedValue;
	unsigned _generation;
	int _type;
	int _collectionType;
	char _isDefaultValue;

}
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(char)isDeleted;
-(int)propertyType;
-(id)unformattedValue;
-(void)setUnformattedValue:(id)arg1 ;
-(int)collectionType;
-(id)fastName;
-(id)fastValue;
-(id)createRelationshipValueAsIdentifiers;
-(void)replaceRecordIds:(id)arg1 ;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(id)initWithPropertyType:(int)arg1 name:(id)arg2 value:(id)arg3 lastModifiedGeneration:(unsigned)arg4 clientId:(id)arg5 ;
-(id)fastDeletedValue;
-(unsigned)lastModifiedGeneration;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(id)initDeletedPropertyValueWithPropertyType:(int)arg1 name:(id)arg2 deletedValue:(id)arg3 lastModifiedGeneration:(unsigned)arg4 clientId:(id)arg5 ;
-(void)setCollectionType:(int)arg1 ;
-(void)setValue:(id)arg1 inGeneration:(unsigned)arg2 byClientWithId:(id)arg3 ;
-(id)initWithQuickDirtyCoder:(id)arg1 ;
-(void)encodeWithQuickDirtyCoder:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(id)lastModifiedByClientId;
-(char)isDefaultValue;
-(void)setIsDefaultValue:(char)arg1 ;
-(char)_valuesAreEqual:(id)arg1 ;
-(id)fastLastModifiedByClientId;
-(void)deleteValueInGeneration:(unsigned)arg1 byClientWithId:(id)arg2 ;
-(id)findTuplesWithValueEqualToId:(id)arg1 ;
-(id)fastUnformattedValue;
-(id)deletedValue;
-(id)fastPrimativeUnformattedValue;
-(id)_decodeCollectionData:(id)arg1 forType:(int)arg2 ;
-(id)encodeCollectionData:(id)arg1 forType:(int)arg2 ;
-(int)lastModifiedByClientNumber;
-(char)_decodedCollectionsAreEqual:(id)arg1 ;
-(void)markDeletedInGeneration:(unsigned)arg1 ;
-(id)fastValueOrDeletedValue;
-(id)decodeCollectionData:(id)arg1 forType:(int)arg2 ;
-(id)valueDecodedIfNecessary;
@end

