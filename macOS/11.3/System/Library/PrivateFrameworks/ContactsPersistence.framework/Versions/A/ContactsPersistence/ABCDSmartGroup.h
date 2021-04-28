/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsPersistence.framework/Versions/A/ContactsPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsPersistence/ContactsPersistence-Structs.h>
#import <ContactsPersistence/ABCDGroup.h>

@interface ABCDSmartGroup : ABCDGroup
+(id)os_log;
+(void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(CFDictionaryRef)arg4 valueWithEntityConverter:(CFDictionaryRef)arg5 ;
+(id)_table;
+(id)abEntityName;
-(id)contactMembershipPredicate;
-(id)contactMembershipRecursivePredicate;
-(id)affectedStoresInMembershipPredicate;
-(id)searchElement;
-(id)transformedSearchElement;
-(unsigned long long)externalGroupBehavior;
-(void)setExternalGroupBehavior:(unsigned long long)arg1 ;
-(void)setModifiedUniqueIdsSet:(id)arg1 ;
-(id)modifiedUniqueIdsSet;
@end

