/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned long long _brokenHashVersion;
	char _retainLeopardStyleDictionaries;
	char _modelHasPrecomputedKeyOrder;
	char _hasVirtualToOnes;
	unsigned _entityIDOffset;
	unsigned _lastEntityID;

}
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(char)arg3 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned long long)arg3 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(unsigned)_entityOffset;
-(char)_modelHasPrecomputedKeyOrder;
-(void)_recordHasVirtualToOnes;
-(char)_useLeopardStyleHashing;
-(char)_useSnowLeopardStyleHashing;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(id)entityForID:(unsigned long long)arg1 ;
-(char)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(char)arg3 brokenHashVersion:(unsigned long long)arg4 ;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(unsigned long long)entityIDForName:(id)arg1 ;
-(unsigned)_lastEntityID;
-(char)_retainHashHack;
-(void)finalize;
-(void)dealloc;
-(id)managedObjectModel;
-(id)entitiesByName;
-(id)entities;
-(id)configurationName;
-(id)_entityMapping;
-(id)entityNamed:(id)arg1 ;
@end

