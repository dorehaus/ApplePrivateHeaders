/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NSPersistenceUtilities : NSObject
+(unsigned long long)attributeTypeForXMLInfo:(id)arg1 ;
+(id)_createAttributeDescriptionForNode:(id)arg1 ;
+(id)_createRelationshipDescriptionForNode:(id)arg1 ;
+(void)_populateEntityDescription:(id)arg1 fromNode:(id)arg2 ;
+(void)_pickUpMissingStuffFromNode:(id)arg1 forEntity:(id)arg2 ;
+(char)_proceedGivenDBInfo:(id)arg1 ;
+(void)_mapNode:(id)arg1 toEntityInModel:(id)arg2 ;
+(id)reverseEngineerModelFromXMLDataAt:(id)arg1 ;
+(void)initialize;
+(char)_setURL:(id)arg1 forPersistentStore:(id)arg2 withCoordinator:(id)arg3 ;
@end

