/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSString, NSArray;

@interface ABPeoplePickerView : NSView {

	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;
	SEL _reserved6;
	SEL _reserved7;
	id _reserved8;
	id _reserved9;
	id _reserved10;

}

@property (nonatomic,retain) NSView * accessoryView; 
@property (assign,nonatomic) int valueSelectionBehavior; 
@property (assign,nonatomic) char allowsGroupSelection; 
@property (assign,nonatomic) char allowsMultipleSelection; 
@property (nonatomic,retain) NSString * displayedProperty; 
@property (nonatomic,retain) NSString * autosaveName; 
@property (readonly) NSArray * selectedGroups; 
@property (readonly) NSArray * selectedRecords; 
@property (assign,nonatomic) id target; 
@property (assign,nonatomic) SEL groupDoubleAction; 
@property (assign,nonatomic) SEL nameDoubleAction; 
+(id)titleOfColumn:(id)arg1 ;
+(Class)_controllerClass;
+(char)isTitleOfColumnAlreadyLocalized:(id)arg1 ;
+(char)isPropertyOfColumnLocalizable:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setAccessoryView:(NSView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)controller;
-(NSView *)accessoryView;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(void)_commonInit;
-(id)_searchField;
-(void)deselectAll:(id)arg1 ;
-(void)setAutosaveName:(NSString *)arg1 ;
-(NSString *)autosaveName;
-(id)properties;
-(id)_uiController;
-(void)removeProperty:(id)arg1 ;
-(void)addProperty:(id)arg1 ;
-(void)setInDistributionListEditor:(char)arg1 ;
-(void)setHasTableBorder:(char)arg1 ;
-(void)selectGroup:(id)arg1 byExtendingSelection:(char)arg2 ;
-(NSArray *)selectedGroups;
-(NSString *)displayedProperty;
-(void)selectIdentifier:(id)arg1 forPerson:(id)arg2 byExtendingSelection:(char)arg3 ;
-(void)setValueSelectionBehavior:(int)arg1 ;
-(void)printDescription:(id)arg1 ;
-(int)valueSelectionBehavior;
-(char)allowsGroupSelection;
-(void)setAllowsGroupSelection:(char)arg1 ;
-(void)setColumnTitle:(id)arg1 forProperty:(id)arg2 ;
-(id)columnTitleForProperty:(id)arg1 ;
-(void)setDisplayedProperty:(NSString *)arg1 ;
-(NSArray *)selectedRecords;
-(id)selectedIdentifiersForPerson:(id)arg1 ;
-(id)selectedValues;
-(void)selectRecord:(id)arg1 byExtendingSelection:(char)arg2 ;
-(void)deselectGroup:(id)arg1 ;
-(void)deselectRecord:(id)arg1 ;
-(void)deselectIdentifier:(id)arg1 forPerson:(id)arg2 ;
-(void)clearSearchField:(id)arg1 ;
-(void)editInAddressBook:(id)arg1 ;
-(void)selectInAddressBook:(id)arg1 ;
-(void)addFilter:(id)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(void)setTypes:(id)arg1 forProperty:(id)arg2 ;
-(SEL)groupDoubleAction;
-(void)setGroupDoubleAction:(SEL)arg1 ;
-(SEL)nameDoubleAction;
-(void)setNameDoubleAction:(SEL)arg1 ;
-(char)hasTableBorder;
-(char)inDistributionListEditor;
-(void)_openSelectionInAddressBook:(char)arg1 ;
-(void)setAllowsDirectoriesSearches:(char)arg1 ;
-(char)allowsDirectoriesSearches;
-(char)allowsGroupEditing;
-(char)isDistributionListEditor;
-(double)_valueColumnWidthPercentage;
-(void)setAllowsGroupEditing:(char)arg1 ;
-(void)setShowIdentityBadges:(char)arg1 ;
-(void)setShowIdentityGroups:(char)arg1 ;
-(void)setIsDistributionListEditor:(char)arg1 ;
-(void)_placeAccessoryView;
-(void)_loadPickerUI;
-(void)removeAllProperties;
-(void)decodeColumns:(id)arg1 ;
-(void)_setValueColumnWidthPercentage:(double)arg1 ;
-(void)_postSearchUpdateNotifications;
@end

