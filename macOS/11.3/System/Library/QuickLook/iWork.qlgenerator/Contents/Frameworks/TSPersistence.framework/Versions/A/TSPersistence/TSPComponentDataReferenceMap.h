/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class _TtC13TSPersistence15TSPReferenceMap, NSIndexSet;

@interface TSPComponentDataReferenceMap : NSObject {

	_TtC13TSPersistence15TSPReferenceMap* _dataToObjectReferenceMap;
	_TtC13TSPersistence15TSPReferenceMap* _objectToDataReferenceMap;
	NSIndexSet* _objectIdentifiersWithoutUUID;

}

@property (nonatomic,readonly) unsigned long long dataCount; 
@property (nonatomic,readonly) unsigned long long objectCount; 
@property (nonatomic,readonly) _TtC13TSPersistence15TSPReferenceMap * dataToObjectReferenceMap; 
@property (nonatomic,readonly) _TtC13TSPersistence15TSPReferenceMap * objectToDataReferenceMap; 
@property (nonatomic,readonly) NSIndexSet * objectIdentifiersWithoutUUID; 
-(id)description;
-(id)init;
-(unsigned long long)dataCount;
-(unsigned long long)objectCount;
-(void)saveToMessage:(ComponentInfo*)arg1 ;
-(_TtC13TSPersistence15TSPReferenceMap *)objectToDataReferenceMap;
-(_TtC13TSPersistence15TSPReferenceMap *)dataToObjectReferenceMap;
-(NSIndexSet *)objectIdentifiersWithoutUUID;
-(id)initFromMessage:(const ComponentInfo*)arg1 componentObjectUUIDMap:(id)arg2 ;
-(id)initWithDataToObjectReferenceMap:(id)arg1 objectToDataReferenceMap:(id)arg2 objectIdentifiersWithoutUUID:(id)arg3 ;
@end

