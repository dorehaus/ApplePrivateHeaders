/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSView.h>

@class IMKDocumentView, NSMutableArray, NSMutableDictionary, NSScrollView, IMKCandidateController, IMKCandidateUIString, IMKUITextField, NSView, NSArray;

@interface IMKCandidateView : NSView {

	IMKDocumentView* _documentView;
	NSMutableArray* _existingLines;
	NSMutableDictionary* _existingLineViews;
	NSScrollView* _scrollView;
	NSMutableArray* _currentLinesWithSelectionKeys;
	NSMutableDictionary* _selectionKeyToCandidateMapping;
	char _canScroll;
	IMKCandidateController* _candidateController;
	CGSize _documentSize;
	IMKCandidateUIString* _message;
	IMKUITextField* _messageTextField;
	char _respondsToMouseInteraction;
	unsigned long long _topVisibleLine;

}

@property (nonatomic,readonly) NSView * accessibilitySizeComparisonView; 
@property (nonatomic,retain) IMKDocumentView * documentView;                                    //@synthesize documentView=_documentView - In the implementation block
@property (nonatomic,retain) NSMutableArray * existingLines;                                    //@synthesize existingLines=_existingLines - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingLineViews;                           //@synthesize existingLineViews=_existingLineViews - In the implementation block
@property (nonatomic,retain) IMKUITextField * messageTextField;                                 //@synthesize messageTextField=_messageTextField - In the implementation block
@property (nonatomic,retain) NSScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentLinesWithSelectionKeys;                    //@synthesize currentLinesWithSelectionKeys=_currentLinesWithSelectionKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectionKeyToCandidateMapping;              //@synthesize selectionKeyToCandidateMapping=_selectionKeyToCandidateMapping - In the implementation block
@property (assign,nonatomic) char canScroll;                                                    //@synthesize canScroll=_canScroll - In the implementation block
@property (assign,nonatomic) IMKCandidateController * candidateController;                      //@synthesize candidateController=_candidateController - In the implementation block
@property (assign,nonatomic) CGSize documentSize;                                               //@synthesize documentSize=_documentSize - In the implementation block
@property (assign,nonatomic) double lineThickness; 
@property (nonatomic,retain) IMKCandidateUIString * message;                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) char respondsToMouseInteraction;                                   //@synthesize respondsToMouseInteraction=_respondsToMouseInteraction - In the implementation block
@property (nonatomic,readonly) char showsLegacyScroller; 
@property (nonatomic,readonly) double scrollerThickness; 
@property (assign,nonatomic) unsigned long long topVisibleLine; 
@property (nonatomic,readonly) NSArray * visibleCandidatesFromTopLine; 
@property (nonatomic,readonly) NSArray * visibleLines; 
@property (nonatomic,readonly) NSArray * visibleLineViews; 
-(char)canScroll;
-(void)setDocumentSize:(CGSize)arg1 resetCandidates:(char)arg2 ;
-(void)setCanScroll:(char)arg1 ;
-(void)animateChanges;
-(id)lineViewWithNumber:(unsigned long long)arg1 ;
-(id)layoutUnitsForLine:(unsigned long long)arg1 ;
-(id)viewForUniqueKey:(id)arg1 ;
-(char)showsLegacyScroller;
-(NSArray *)visibleLineViews;
-(void)setVerticallyAlignedSelectionKeys;
-(void)setHorizontalSelectionKeysWithHighlighted:(char)arg1 ;
-(void)setVerticalSelectionKeys;
-(id)unitForSelectionKey:(id)arg1 ;
-(void)resetCandidates;
-(double)scrollerThickness;
-(id)initWithFrame:(CGRect)arg1 scrollable:(char)arg2 ;
-(void)scrollViewDidUpdateBounds;
-(id)visibleAreasForFrame:(CGRect)arg1 ;
-(char)hasRubberbandEffect;
-(id)UIElementFromDefinitionUnit:(id)arg1 ;
-(NSMutableDictionary *)existingLineViews;
-(NSMutableArray *)existingLines;
-(NSArray *)visibleLines;
-(id)linesToAddFromNew:(id)arg1 existing:(id)arg2 ;
-(id)linesToRemoveFromNew:(id)arg1 existing:(id)arg2 ;
-(void)updateLines;
-(void)scrollToLineNumber:(unsigned long long)arg1 ;
-(NSMutableDictionary *)selectionKeyToCandidateMapping;
-(void)removeCurrentSelectionKeys;
-(void)setSelectionKeysForLineView:(id)arg1 startingWith:(unsigned long long)arg2 ;
-(id)UIElementsFromDefinitionUnits:(id)arg1 ;
-(id)selectedCandidateView;
-(void)setHasRubberBandEffect:(char)arg1 ;
-(NSArray *)visibleCandidatesFromTopLine;
-(NSView *)accessibilitySizeComparisonView;
-(void)setExistingLines:(NSMutableArray *)arg1 ;
-(void)setExistingLineViews:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)currentLinesWithSelectionKeys;
-(void)setCurrentLinesWithSelectionKeys:(NSMutableArray *)arg1 ;
-(void)setSelectionKeyToCandidateMapping:(NSMutableDictionary *)arg1 ;
-(char)respondsToMouseInteraction;
-(void)setRespondsToMouseInteraction:(char)arg1 ;
-(void)dealloc;
-(IMKCandidateUIString *)message;
-(void)setMessage:(IMKCandidateUIString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(char)isFlipped;
-(id)accessibilityAttributeNames;
-(void)setDocumentView:(IMKDocumentView *)arg1 ;
-(IMKDocumentView *)documentView;
-(NSScrollView *)scrollView;
-(id)accessibilityFocusedUIElement;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(void)flashScrollers;
-(void)setScrollView:(NSScrollView *)arg1 ;
-(IMKUITextField *)messageTextField;
-(void)setMessageTextField:(IMKUITextField *)arg1 ;
-(CGSize)documentSize;
-(void)setDocumentSize:(CGSize)arg1 ;
-(void)scrollToTop;
-(IMKCandidateController *)candidateController;
-(void)setLineThickness:(double)arg1 ;
-(double)lineThickness;
-(void)setTopVisibleLine:(unsigned long long)arg1 ;
-(void)setCandidateController:(IMKCandidateController *)arg1 ;
-(unsigned long long)topVisibleLine;
-(id)allCandidates;
-(void)setUpScrollView;
-(id)visibleCandidates;
-(void)addLines:(id)arg1 ;
@end

