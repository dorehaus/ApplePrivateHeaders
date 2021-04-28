/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray, NSDate;

@interface ISDChange : NSObject <NSCoding> {

	int _type;
	NSString* _recordId;
	NSString* _entityName;
	NSMutableArray* _propertyChanges;
	NSString* _clientId;
	unsigned _fromGeneration;
	unsigned _toGeneration;
	long long _changeSourceIndex;
	NSDate* _modificationDate;
	NSString* _identityHash;

}
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(id)entityName;
-(id)modificationDate;
-(id)clientId;
-(void)setModificationDate:(id)arg1 ;
-(id)recordId;
-(void)setPropertyType:(int)arg1 ;
-(void)setRecordId:(id)arg1 ;
-(id)identityHash;
-(id)fastClientId;
-(id)fastRecordId;
-(void)replaceRecordId:(id)arg1 withRecordId:(id)arg2 ;
-(long long)changeSourceIndex;
-(id)relationshipsWhichReferenceRecordWithId:(id)arg1 entity:(id)arg2 ;
-(void)noteModificationDate:(id)arg1 ;
-(void)replaceRelationshipTupleId:(id)arg1 withRelationshipTupleId:(id)arg2 ;
-(id)initWithChangeType:(int)arg1 entityName:(id)arg2 recordId:(id)arg3 propertyChanges:(id)arg4 clientId:(id)arg5 fromGeneration:(unsigned)arg6 toGeneration:(unsigned)arg7 index:(long long)arg8 ;
-(unsigned)fromGeneration;
-(unsigned)toGeneration;
-(id)propertyChanges;
-(void)enumerateIdsAsArgumentToFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 skipTupleId:(char)arg3 ;
-(id)propertyChangeForName:(id)arg1 ;
-(id)initWithChangeType:(int)arg1 entityName:(id)arg2 recordId:(id)arg3 propertyChanges:(id)arg4 clientId:(id)arg5 fromGeneration:(unsigned)arg6 toGeneration:(unsigned)arg7 ;
-(id)initWithQuickDirtyCoder:(id)arg1 ;
-(void)encodeWithQuickDirtyCoder:(id)arg1 ;
-(int)isd_quickDirtyCoderType;
-(void)setPropertyChanges:(id)arg1 ;
-(void)enumeratePropertyChangesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateIdsAsArgumentToFunction:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(id)idsReferencedByChangeInDictionary:(id)arg1 ;
-(int)cleanupTuplesWithId:(id)arg1 ;
-(char)mergeGlobalIdEquivalents:(id)arg1 ;
-(void)setIdentityHash:(id)arg1 ;
@end

