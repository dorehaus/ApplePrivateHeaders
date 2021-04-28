/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/Versions/A/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary, CalDefaultDictionary;

@interface CUIKObjectGroup : NSObject {

	NSDictionary* _originalObjectMap;
	NSMutableDictionary* _objectMap;
	CalDefaultDictionary* _spawnedObjectIdentifiers;

}

@property (retain) NSDictionary * originalObjectMap;                             //@synthesize originalObjectMap=_originalObjectMap - In the implementation block
@property (retain) NSMutableDictionary * objectMap;                              //@synthesize objectMap=_objectMap - In the implementation block
@property (retain) CalDefaultDictionary * spawnedObjectIdentifiers;              //@synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers - In the implementation block
+(id)_objectMapForObjects:(id)arg1 ;
+(id)_identifierForObject:(id)arg1 ;
-(id)description;
-(id)initWithObjects:(id)arg1 ;
-(id)objects;
-(id)objectIdentifiers;
-(void)setOriginalObjectMap:(NSDictionary *)arg1 ;
-(NSDictionary *)originalObjectMap;
-(void)setObjectMap:(NSMutableDictionary *)arg1 ;
-(CalDefaultDictionary *)spawnedObjectIdentifiers;
-(char)_newSeriesSpawnedWithObject:(id)arg1 ;
-(void)setSpawnedObjectIdentifiers:(CalDefaultDictionary *)arg1 ;
-(NSMutableDictionary *)objectMap;
-(char)objectsBelongInGroup:(id)arg1 ;
-(void)newObject:(id)arg1 spawnedFromObject:(id)arg2 ;
-(id)shiftedOccurrencePreviouslySpawnedByIdentifier:(id)arg1 ;
-(id)originalObjects;
@end
