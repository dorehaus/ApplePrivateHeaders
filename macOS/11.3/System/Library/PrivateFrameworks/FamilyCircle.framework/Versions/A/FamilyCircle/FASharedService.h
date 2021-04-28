/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/Versions/A/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface FASharedService : NSObject {

	char _isSeparator;
	char _isDefault;
	NSString* _name;
	NSNumber* _order;
	NSString* _displayLabel;
	NSString* _subLabel;
	NSString* _detailLabel;
	NSString* _iconURLString;
	NSString* _iconURLStringx2;
	NSString* _iconURLStringx3;
	NSString* _actionURLString;
	NSString* _groupID;

}

@property (nonatomic,readonly) char isSeparator;                        //@synthesize isSeparator=_isSeparator - In the implementation block
@property (nonatomic,readonly) char isDefault;                          //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * order;                        //@synthesize order=_order - In the implementation block
@property (nonatomic,readonly) NSString * displayLabel;                 //@synthesize displayLabel=_displayLabel - In the implementation block
@property (nonatomic,readonly) NSString * subLabel;                     //@synthesize subLabel=_subLabel - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) NSString * iconURLString;                //@synthesize iconURLString=_iconURLString - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx2;              //@synthesize iconURLStringx2=_iconURLStringx2 - In the implementation block
@property (nonatomic,readonly) NSString * iconURLStringx3;              //@synthesize iconURLStringx3=_iconURLStringx3 - In the implementation block
@property (nonatomic,readonly) NSString * actionURLString;              //@synthesize actionURLString=_actionURLString - In the implementation block
@property (nonatomic,readonly) NSString * groupID;                      //@synthesize groupID=_groupID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)order;
-(char)isSeparator;
-(NSString *)groupID;
-(char)isDefault;
-(char)isEqualToSharedService:(id)arg1 ;
-(NSString *)displayLabel;
-(NSString *)subLabel;
-(NSString *)detailLabel;
-(NSString *)iconURLString;
-(NSString *)iconURLStringx2;
-(NSString *)iconURLStringx3;
-(NSString *)actionURLString;
@end

