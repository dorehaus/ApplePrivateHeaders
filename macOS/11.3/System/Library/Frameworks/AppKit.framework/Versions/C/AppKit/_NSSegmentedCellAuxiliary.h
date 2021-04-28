/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class _NSAcceleratorButtonHelper, NSColor, NSTimer, NSUserInterfaceCompressionOptions;

@interface _NSSegmentedCellAuxiliary : NSObject {

	_NSAcceleratorButtonHelper* _acceleratorHelper;
	NSColor* _selectedSegmentBezelColor;
	CGRect _segmentFrameOfTrackedCell;
	CGRect* _segmentTrackingRects;
	unsigned long long _segmentTrackingRectCount;
	long long _highlightedSegment;
	char _sendSelectionAction;
	NSTimer* _menuTimer;
	char _sendActionOnGasPedal;
	char _lastGasPedalActionWasHighlighted;
	double _gasPedalDoubleValue;
	char _inTouchBar;
	long long _segmentDistribution;
	NSUserInterfaceCompressionOptions* _compressibleOptions;
	long long _applicableSegmentStyleForCachedContentStyle;
	char _usesSlidingStyleForCachedContentStyle;
	long long _semanticContextForCachedContentStyle;

}

@property (assign) CGRect segmentFrameOfTrackedCell;                                     //@synthesize segmentFrameOfTrackedCell=_segmentFrameOfTrackedCell - In the implementation block
@property (assign) CGRect* segmentTrackingRects;                                         //@synthesize segmentTrackingRects=_segmentTrackingRects - In the implementation block
@property (assign) unsigned long long segmentTrackingRectCount; 
@property (assign) long long highlightedSegment;                                         //@synthesize highlightedSegment=_highlightedSegment - In the implementation block
@property (assign) char sendSelectionAction;                                             //@synthesize sendSelectionAction=_sendSelectionAction - In the implementation block
@property (retain) NSTimer * menuTimer;                                                  //@synthesize menuTimer=_menuTimer - In the implementation block
@property (assign) char sendActionOnGasPedal;                                            //@synthesize sendActionOnGasPedal=_sendActionOnGasPedal - In the implementation block
@property (assign) char lastGasPedalActionWasHighlighted;                                //@synthesize lastGasPedalActionWasHighlighted=_lastGasPedalActionWasHighlighted - In the implementation block
@property (assign) double gasPedalDoubleValue;                                           //@synthesize gasPedalDoubleValue=_gasPedalDoubleValue - In the implementation block
@property (assign) char inTouchBar;                                                      //@synthesize inTouchBar=_inTouchBar - In the implementation block
@property (assign) long long segmentDistribution;                                        //@synthesize segmentDistribution=_segmentDistribution - In the implementation block
@property (retain) NSUserInterfaceCompressionOptions * compressibleOptions;              //@synthesize compressibleOptions=_compressibleOptions - In the implementation block
@property (assign) long long applicableSegmentStyleForCachedContentStyle;                //@synthesize applicableSegmentStyleForCachedContentStyle=_applicableSegmentStyleForCachedContentStyle - In the implementation block
@property (assign) long long semanticContextForCachedContentStyle;                       //@synthesize semanticContextForCachedContentStyle=_semanticContextForCachedContentStyle - In the implementation block
@property (assign) char usesSlidingStyleForCachedContentStyle;                           //@synthesize usesSlidingStyleForCachedContentStyle=_usesSlidingStyleForCachedContentStyle - In the implementation block
-(void)dealloc;
-(id)init;
-(NSUserInterfaceCompressionOptions *)compressibleOptions;
-(void)setCompressibleOptions:(NSUserInterfaceCompressionOptions *)arg1 ;
-(unsigned long long)segmentTrackingRectCount;
-(void)setSegmentTrackingRectCount:(unsigned long long)arg1 ;
-(CGRect)segmentFrameOfTrackedCell;
-(void)setSegmentFrameOfTrackedCell:(CGRect)arg1 ;
-(CGRect*)segmentTrackingRects;
-(void)setSegmentTrackingRects:(CGRect*)arg1 ;
-(long long)highlightedSegment;
-(void)setHighlightedSegment:(long long)arg1 ;
-(char)sendSelectionAction;
-(void)setSendSelectionAction:(char)arg1 ;
-(NSTimer *)menuTimer;
-(void)setMenuTimer:(NSTimer *)arg1 ;
-(char)sendActionOnGasPedal;
-(void)setSendActionOnGasPedal:(char)arg1 ;
-(char)lastGasPedalActionWasHighlighted;
-(void)setLastGasPedalActionWasHighlighted:(char)arg1 ;
-(double)gasPedalDoubleValue;
-(void)setGasPedalDoubleValue:(double)arg1 ;
-(char)inTouchBar;
-(void)setInTouchBar:(char)arg1 ;
-(long long)segmentDistribution;
-(void)setSegmentDistribution:(long long)arg1 ;
-(long long)applicableSegmentStyleForCachedContentStyle;
-(void)setApplicableSegmentStyleForCachedContentStyle:(long long)arg1 ;
-(long long)semanticContextForCachedContentStyle;
-(void)setSemanticContextForCachedContentStyle:(long long)arg1 ;
-(char)usesSlidingStyleForCachedContentStyle;
-(void)setUsesSlidingStyleForCachedContentStyle:(char)arg1 ;
@end

