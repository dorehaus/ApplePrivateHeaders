/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/ConsoleKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSOutlineView, NSIndexSet, NSLayoutConstraint;

@interface CSKTextRelationIndicatorTableCellView : NSTableCellView {

	NSOutlineView* _outlineView;
	unsigned long long _topConnection;
	unsigned long long _bottomConnection;
	unsigned long long _dot;
	unsigned long long _indentationLevel;
	NSIndexSet* _backwardIndentationLevelsWithVerticalLine;
	NSLayoutConstraint* _anchor;

}

@property (assign,nonatomic) unsigned long long topConnection;                                    //@synthesize topConnection=_topConnection - In the implementation block
@property (assign,nonatomic) unsigned long long bottomConnection;                                 //@synthesize bottomConnection=_bottomConnection - In the implementation block
@property (assign,nonatomic) unsigned long long dot;                                              //@synthesize dot=_dot - In the implementation block
@property (assign,nonatomic) unsigned long long indentationLevel;                                 //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,retain) NSIndexSet * backwardIndentationLevelsWithVerticalLine;              //@synthesize backwardIndentationLevelsWithVerticalLine=_backwardIndentationLevelsWithVerticalLine - In the implementation block
@property (retain) NSLayoutConstraint * anchor;                                                   //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic,__weak) NSOutlineView * outlineView;                                  //@synthesize outlineView=_outlineView - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(unsigned long long)indentationLevel;
-(void)setIndentationLevel:(unsigned long long)arg1 ;
-(NSOutlineView *)outlineView;
-(void)setOutlineView:(NSOutlineView *)arg1 ;
-(NSLayoutConstraint *)anchor;
-(void)setAnchor:(NSLayoutConstraint *)arg1 ;
-(void)setDot:(unsigned long long)arg1 ;
-(unsigned long long)dot;
-(void)commonInitWithSize:(CGSize)arg1 ;
-(void)setTopConnection:(unsigned long long)arg1 ;
-(void)setBottomConnection:(unsigned long long)arg1 ;
-(void)setBackwardIndentationLevelsWithVerticalLine:(NSIndexSet *)arg1 ;
-(void)configureFromDrawRect:(CGRect)arg1 ;
-(unsigned long long)topConnection;
-(unsigned long long)bottomConnection;
-(NSIndexSet *)backwardIndentationLevelsWithVerticalLine;
@end

