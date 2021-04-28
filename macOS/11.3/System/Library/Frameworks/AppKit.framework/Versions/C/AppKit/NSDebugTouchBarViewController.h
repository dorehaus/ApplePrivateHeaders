/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSDebugTouchBarUIDelegate.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>
#import <libobjc.A.dylib/NSTableViewDataSource.h>

@class NSTableView, NSArray, NSString;

@interface NSDebugTouchBarViewController : NSViewController <NSDebugTouchBarUIDelegate, NSTableViewDelegate, NSTableViewDataSource> {

	NSTableView* _tableView;
	NSArray* _displayedItems;

}

@property (copy) NSArray * displayedItems;                          //@synthesize displayedItems=_displayedItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3 ;
-(id)tableView:(id)arg1 rowViewForRow:(long long)arg2 ;
-(void)didUpdateResponderChainItems:(id)arg1 ;
-(void)logDisplayedItemsToConsole:(id)arg1 ;
-(void)setDisplayedItems:(NSArray *)arg1 ;
-(NSArray *)displayedItems;
@end

