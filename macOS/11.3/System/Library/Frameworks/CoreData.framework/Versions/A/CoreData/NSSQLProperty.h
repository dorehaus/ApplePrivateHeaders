/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSObject {

	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned char _propertyType;
	unsigned char _sqlType;
	unsigned short _fetchIndex;
	unsigned short _slot;
	struct {
		unsigned _allowAliasing : 1;
		unsigned _unique : 1;
		unsigned _constrained : 1;
		unsigned _backedByTrigger : 1;
		unsigned _isDerivedAttribute : 1;
		unsigned _reservedFlags : 11;
	}  _flags;

}

@property (assign,getter=isConstrained,nonatomic) char constrained; 
-(unsigned char)sqlType;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(char)isManyToMany;
-(char)isToOne;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(char)isForeignKey;
-(char)isForeignEntityKey;
-(char)isForeignOrderKey;
-(char)isEntityKey;
-(char)isOptLockKey;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(id)entity;
-(char)isUnique;
-(char)isToMany;
-(unsigned)slot;
-(void)setConstrained:(char)arg1 ;
-(unsigned char)propertyType;
-(char)isRelationship;
-(char)isColumn;
-(char)isConstrained;
-(id)columnName;
-(id)propertyDescription;
-(char)isPrimaryKey;
-(void)setPropertyDescription:(id)arg1 ;
-(char)isAttribute;
-(id)externalName;
@end

