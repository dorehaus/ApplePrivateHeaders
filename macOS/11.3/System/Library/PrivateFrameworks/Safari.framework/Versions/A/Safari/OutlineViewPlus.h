/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <AppKit/NSOutlineView.h>
#import <libobjc.A.dylib/FieldEditorDFRAccessoryDisabling.h>

@class NSTimer;

@interface OutlineViewPlus : NSOutlineView <FieldEditorDFRAccessoryDisabling> {

	char _lockSelection;
	int _doubleClickTimerAction;
	NSTimer* _doubleClickTimer;
	long long _clickedRow;
	long long _clickedColumn;
	char _acceptsFirstMouse;

}

@property (__weak) id<OutlineViewPlusDelegate> delegate; 
@property (__weak) id<OutlineViewPlusDataSource> dataSource; 
@property (assign,nonatomic) char acceptsFirstMouse;                               //@synthesize acceptsFirstMouse=_acceptsFirstMouse - In the implementation block
@property (nonatomic,readonly) char wantsDFRAccessoriesInFieldEditor; 
-(void)dealloc;
-(void)mouseDown:(id)arg1 ;
-(id)accessibilityActionNames;
-(void)sizeToFit;
-(void)keyDown:(id)arg1 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(id)menuForEvent:(id)arg1 ;
-(void)selectRowIndexes:(id)arg1 byExtendingSelection:(char)arg2 ;
-(id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(CGPoint*)arg4 ;
-(void)cancelOperation:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)deselectRow:(long long)arg1 ;
-(void)draggingSession:(id)arg1 willBeginAtPoint:(CGPoint)arg2 ;
-(char)_userCanEditTableColumn:(id)arg1 row:(long long)arg2 ;
-(void)drawGridInClipRect:(CGRect)arg1 ;
-(char)wantsDFRAccessoriesInFieldEditor;
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(void)_cancelDoubleClickTimerAction;
-(char)selectionShouldChangeFromMouseDownInRow:(long long)arg1 tableColumn:(id)arg2 ;
-(char)shouldEditOnDoubleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3 ;
-(char)shouldEditOnSingleClick:(id)arg1 inRow:(long long)arg2 tableColumn:(id)arg3 ;
-(void)_performDoubleClickTimerAction:(id)arg1 ;
-(char)acceptsFirstMouse;
@end

