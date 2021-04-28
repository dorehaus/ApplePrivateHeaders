/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>
#import <libobjc.A.dylib/ABMainWindowGroupListCellView.h>

@class NSStackView, NSButton, NSView, NSTextField, NSString;

@interface ABCleanGroupHeaderEntryListCellView : NSTableCellView <ABMainWindowGroupListCellView> {

	NSStackView* _stackView;
	NSButton* _groupPlusButton;
	char _shouldShowGroupPlusButton;
	NSView* _accessoryView;

}

@property (assign,nonatomic) NSStackView * stackView;                 //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) NSButton * groupPlusButton;              //@synthesize groupPlusButton=_groupPlusButton - In the implementation block
@property (nonatomic,retain) NSView * accessoryView;                  //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) NSTextField * textField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setAccessoryView:(NSView *)arg1 ;
-(NSView *)accessoryView;
-(void)awakeFromNib;
-(NSStackView *)stackView;
-(void)setStackView:(NSStackView *)arg1 ;
-(void)updateAppearanceWithRowView:(id)arg1 ;
-(void)setGroupEntry:(id)arg1 ;
-(void)mouseEntered:(id)arg1 rowView:(id)arg2 ;
-(void)mouseExited:(id)arg1 rowView:(id)arg2 ;
-(void)constraintViewSizeToSquare:(id)arg1 ;
-(void)addAccessoryViewToStackView;
-(NSButton *)groupPlusButton;
-(void)setGroupPlusButton:(NSButton *)arg1 ;
@end

