/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@class NSTableView;

@interface NSMenuHighlightView : NSView {

	NSTableView* _tableView;

}

@property (retain) NSTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
-(void)dealloc;
-(char)isFlipped;
-(char)isOpaque;
-(NSTableView *)tableView;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTableView:(NSTableView *)arg1 ;
@end

