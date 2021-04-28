/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@interface TSTTableRepProcessChangesActions : NSObject {

	vector<TSUCellRect, std::__1::allocator<TSUCellRect>>* _dirtyCellRanges;
	char _invalidateAllChrome;
	char _invalidateAllChromeCaches;
	char _invalidateColumnChrome;
	char _invalidateRowChrome;
	char _hideChromeContextMenuButton;
	char _invalidateKnobs;
	char _invalidateSelection;
	char _invalidateTableName;
	char _updateEditorRemainders;
	char _syncReferenceHighlightState;
	char _setNeedsDisplay;
	char _hideStepperHUD;
	char _expandDirtyRegionForReferences;
	char _repositionStockPopover;
	TSUCellRect _dirtyStrokeRange;

}

@property (assign,nonatomic) TSUCellRect dirtyStrokeRange;                     //@synthesize dirtyStrokeRange=_dirtyStrokeRange - In the implementation block
@property (assign,nonatomic) char invalidateAllChrome;                         //@synthesize invalidateAllChrome=_invalidateAllChrome - In the implementation block
@property (assign,nonatomic) char invalidateAllChromeCaches;                   //@synthesize invalidateAllChromeCaches=_invalidateAllChromeCaches - In the implementation block
@property (assign,nonatomic) char invalidateColumnChrome;                      //@synthesize invalidateColumnChrome=_invalidateColumnChrome - In the implementation block
@property (assign,nonatomic) char invalidateRowChrome;                         //@synthesize invalidateRowChrome=_invalidateRowChrome - In the implementation block
@property (assign,nonatomic) char hideChromeContextMenuButton;                 //@synthesize hideChromeContextMenuButton=_hideChromeContextMenuButton - In the implementation block
@property (assign,nonatomic) char invalidateKnobs;                             //@synthesize invalidateKnobs=_invalidateKnobs - In the implementation block
@property (assign,nonatomic) char invalidateSelection;                         //@synthesize invalidateSelection=_invalidateSelection - In the implementation block
@property (assign,nonatomic) char invalidateTableName;                         //@synthesize invalidateTableName=_invalidateTableName - In the implementation block
@property (assign,nonatomic) char updateEditorRemainders;                      //@synthesize updateEditorRemainders=_updateEditorRemainders - In the implementation block
@property (assign,nonatomic) char syncReferenceHighlightState;                 //@synthesize syncReferenceHighlightState=_syncReferenceHighlightState - In the implementation block
@property (assign,nonatomic) char setNeedsDisplay;                             //@synthesize setNeedsDisplay=_setNeedsDisplay - In the implementation block
@property (assign,nonatomic) char hideStepperHUD;                              //@synthesize hideStepperHUD=_hideStepperHUD - In the implementation block
@property (assign,nonatomic) char expandDirtyRegionForReferences;              //@synthesize expandDirtyRegionForReferences=_expandDirtyRegionForReferences - In the implementation block
@property (assign,nonatomic) char repositionStockPopover;                      //@synthesize repositionStockPopover=_repositionStockPopover - In the implementation block
-(char)setNeedsDisplay;
-(char)invalidateSelection;
-(char)invalidateKnobs;
-(void)setDirtyCellRange:(TSUCellRect)arg1 ;
-(void)setDirtyStrokeRange:(TSUCellRect)arg1 ;
-(TSUCellRect)dirtyStrokeRange;
-(char)invalidateAllChrome;
-(void)setInvalidateAllChrome:(char)arg1 ;
-(char)invalidateColumnChrome;
-(void)setInvalidateColumnChrome:(char)arg1 ;
-(char)invalidateRowChrome;
-(void)setInvalidateRowChrome:(char)arg1 ;
-(char)hideChromeContextMenuButton;
-(void)setHideChromeContextMenuButton:(char)arg1 ;
-(void)setInvalidateKnobs:(char)arg1 ;
-(void)setInvalidateSelection:(char)arg1 ;
-(char)invalidateTableName;
-(void)setInvalidateTableName:(char)arg1 ;
-(char)updateEditorRemainders;
-(void)setUpdateEditorRemainders:(char)arg1 ;
-(char)syncReferenceHighlightState;
-(void)setSyncReferenceHighlightState:(char)arg1 ;
-(void)setSetNeedsDisplay:(char)arg1 ;
-(char)hideStepperHUD;
-(void)setHideStepperHUD:(char)arg1 ;
-(vector<TSUCellRect, std::__1::allocator<TSUCellRect>>*)dirtyCellRanges;
-(char)invalidateAllChromeCaches;
-(void)setInvalidateAllChromeCaches:(char)arg1 ;
-(char)expandDirtyRegionForReferences;
-(void)setExpandDirtyRegionForReferences:(char)arg1 ;
-(char)repositionStockPopover;
-(void)setRepositionStockPopover:(char)arg1 ;
@end

