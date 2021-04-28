/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	char _isVirtual;

}
-(id)foreignKey;
-(id)foreignOrderKey;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(id)foreignEntityKey;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(char)isOptional;
-(char)isVirtual;
-(unsigned)slot;
-(id)columnName;
@end
