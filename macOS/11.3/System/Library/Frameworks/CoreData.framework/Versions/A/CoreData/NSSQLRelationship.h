/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLProperty.h>

@class NSString, NSSQLEntity;

@interface NSSQLRelationship : NSSQLProperty {

	NSString* _name;
	NSSQLEntity* _destinationEntity;
	NSSQLRelationship* _inverse;

}
-(id)foreignKey;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)sourceEntity;
-(id)correlationTableName;
-(void)_setInverseRelationship:(id)arg1 ;
-(id)relationshipDescription;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(id)destinationEntity;
-(id)inverseRelationship;
-(void)_setName:(id)arg1 ;
-(char)isOrdered;
@end

