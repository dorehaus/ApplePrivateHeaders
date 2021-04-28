/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTableView.h>
#import <libobjc.A.dylib/NSTableViewDelegate.h>

@class NSString;

@interface NSPageableTableView : NSTableView <NSTableViewDelegate> {

	long long _displayedRowCount;
	long long _pageNumber;
	double _lastVisibleHeight;
	char _isTiling;
	char _isPaged;
	id _proxyDelegate;

}

@property (assign) long long displayedRowCount; 
@property (readonly) long long pageCount; 
@property (assign) long long page; 
@property (getter=isPaged) char paged; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tile;
-(void)keyDown:(id)arg1 ;
-(char)preservesContentDuringLiveResize;
-(void)selectRowIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(double)tableView:(id)arg1 heightOfRow:(long long)arg2 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)setPaged:(char)arg1 ;
-(long long)page;
-(char)isPaged;
-(long long)pageCount;
-(void)setPage:(long long)arg1 ;
-(void)_commonPageTableInit;
-(void)_updateMinimumHeightConstraint;
-(long long)displayedRowCount;
-(void)scrollToPage;
-(void)_updateLastVisibleHeightIfNeeded;
-(void)setDisplayedRowCount:(long long)arg1 ;
@end
