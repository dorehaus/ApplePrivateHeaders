/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class NSView, NSTableView, NSCell, NSTextFieldCell, NSButtonCell, NSPopUpButtonCell, GFList;

@interface GFSettingsView : NSView {

	NSView* _insideView;
	NSTableView* _tableView;
	NSCell* _keyCell;
	NSTextFieldCell* _stringCell;
	NSTextFieldCell* _integerCell;
	NSTextFieldCell* _floatingCell;
	NSButtonCell* _booleanCell;
	NSPopUpButtonCell* _menuCell;
	GFList* _defaults;
	id _delegate;

}
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)_defaults;
-(id)defaults;
-(void)setDefaults:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)keyDown:(id)arg1 ;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)_cellForRow:(long long)arg1 ;
-(void)_finish_initialization;
-(void)reloadSettings;
-(void)_updateDefaults;
-(void)setDefault:(id)arg1 forKey:(id)arg2 ;
-(void)removeDefaultForKey:(id)arg1 ;
@end

