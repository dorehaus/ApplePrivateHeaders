/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSDPdfTagger.h>
#import <TSApplication/TSWPPdfTagger.h>
#import <TSApplication/TSTPdfTagger.h>
#import <TSApplication/TSCHPdfTagger.h>
#import <TSApplication/TSAPdfTagger.h>

@protocol TSAPdfTagger <TSKPdfTagger>
@required
-(void)beginComment;
-(void)endComment;

@end


@class NSMutableArray, TSARenderingExporter, NSString;

@interface TSAPdfTagger : NSObject <TSDPdfTagger, TSWPPdfTagger, TSTPdfTagger, TSCHPdfTagger, TSAPdfTagger> {

	char _stateIsValid;
	NSMutableArray* _contextStack;
	NSMutableArray* _tagStack;
	NSMutableArray* _paragraphLevelResolverStack;
	CGContextRef _CGContext;
	TSARenderingExporter* _exporter;
	unsigned long long _taggingPreventionDepth;

}

@property (assign,nonatomic) CGContextRef CGContext;                                 //@synthesize CGContext=_CGContext - In the implementation block
@property (nonatomic,__weak,readonly) TSARenderingExporter * exporter;               //@synthesize exporter=_exporter - In the implementation block
@property (assign,nonatomic) unsigned long long taggingPreventionDepth;              //@synthesize taggingPreventionDepth=_taggingPreventionDepth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isHeadingStyle:(id)arg1 headingIndex:(int*)arg2 ;
+(char)isHeaderTag:(int)arg1 ;
+(char)shouldMapDrawableRep:(id)arg1 ;
+(char)totalCellNumberInAllTablesExceedsMaxAllowedInDocument:(id)arg1 ;
-(id)state;
-(void)setState:(id)arg1 ;
-(CGContextRef)CGContext;
-(void)endPage;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(void)setUp;
-(id)canvas;
-(id)documentRoot;
-(void)pushContext:(id)arg1 ;
-(void)beginPage;
-(id)initWithRenderingExporter:(id)arg1 ;
-(void)beginObject:(id)arg1 ;
-(void)endObject:(id)arg1 ;
-(void)setCGContext:(CGContextRef)arg1 ;
-(id)imager;
-(unsigned long long)tagStackHeight;
-(id)topOfContextStackWithExpectedClass:(Class)arg1 ;
-(id)topOfContextStack;
-(id)topmostColumnContext;
-(id)topmostTocChunkContext;
-(TSARenderingExporter *)exporter;
-(unsigned long long)taggingPreventionDepth;
-(void)beginTagWithType:(int)arg1 tagProperties:(id)arg2 ;
-(void)endTag;
-(int)tagTypeAtDepth:(unsigned long long)arg1 ;
-(void)popTagStackUntilReachingHeight:(unsigned long long)arg1 ;
-(void)popContextWithExpectedClass:(Class)arg1 ;
-(id)topmostContextOfClass:(Class)arg1 ;
-(id)topmostColumn;
-(char)textStorageChunkIsFootnote:(id)arg1 ;
-(void)beginTagWithType:(int)arg1 ;
-(void)restoreStateFromTopOfContextStackWithExpectedClass:(Class)arg1 ;
-(char)topOfContextStackIsParagraph;
-(id)topmostParagraphLevelResolver;
-(NSRange)topmostColumnRange;
-(void)assertTopOfContextStackIsParagraph:(char)arg1 ;
-(void)beginMultiParagraphEntityWithLineFragmentRange:(NSRange)arg1 ;
-(char)currentParagraphNeedsSpans;
-(int)topmostTagType;
-(char)currentParagraphHasContents;
-(void)endMultiParagraphEntityWithLineFragmentRange:(NSRange)arg1 ;
-(unsigned long long)indexOfLastVisibleCharInParagraphBeforeCharIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFirstVisibleCharInParagraphAtOrAfterCharIndex:(unsigned long long)arg1 ;
-(void)assertCharIndexRelativeToParagraphRange:(char)arg1 ;
-(void)executeBlockForCurrentParagraph:(/*^block*/id)arg1 ;
-(void)advanceParagraphEnumeratorToCharIndex:(unsigned long long)arg1 ;
-(char)charIndexIsAtStartOfParagraph:(unsigned long long)arg1 ;
-(void)beginParagraphWithLineFragmentRange:(NSRange)arg1 ;
-(char)charIndexIsAtEndOfParagraph:(unsigned long long)arg1 ;
-(void)endParagraphWithLineFragmentRange:(NSRange)arg1 ;
-(void)beginParagraphBodyWithLineFragmentRange:(NSRange)arg1 ;
-(void)endParagraphBodyWithLineFragmentRange:(NSRange)arg1 ;
-(id)topmostTextStorage;
-(id)topmostParagraphContext;
-(id)retrieveHighestInfoAtCharIndex:(unsigned long long)arg1 returnTagType:(int*)arg2 ;
-(void)dispatchObject:(id)arg1 tableBlock:(/*^block*/id)arg2 tocBlock:(/*^block*/id)arg3 drawableBlock:(/*^block*/id)arg4 ;
-(void)beginTableChunk:(id)arg1 ;
-(void)beginTOCChunk:(id)arg1 ;
-(void)beginDrawable:(id)arg1 ;
-(void)handleObject:(id)arg1 tableBlock:(/*^block*/id)arg2 tocBlock:(/*^block*/id)arg3 drawableBlock:(/*^block*/id)arg4 ;
-(void)endTableChunk:(id)arg1 ;
-(void)endTOCChunk:(id)arg1 ;
-(void)endDrawable:(id)arg1 ;
-(void)setTaggingPreventionDepth:(unsigned long long)arg1 ;
-(void)beginPencilAnnotation:(id)arg1 ;
-(void)endPencilAnnotation:(id)arg1 ;
-(void)beginFreehandDrawing:(id)arg1 ;
-(void)endFreehandDrawing:(id)arg1 ;
-(void)beginTextStorageChunk:(id)arg1 limitSelection:(id)arg2 ;
-(void)endTextStorageChunk:(id)arg1 ;
-(void)beginOneColumnText:(id)arg1 column:(id)arg2 limitSelection:(id)arg3 ;
-(void)endOneColumnText:(id)arg1 column:(id)arg2 ;
-(void)beginTextColumn:(id)arg1 limitSelection:(id)arg2 ;
-(void)endTextColumn:(id)arg1 ;
-(void)beginLineFragmentWithRange:(NSRange)arg1 ;
-(void)endLineFragmentWithRange:(NSRange)arg1 ;
-(char)needsSeparateRunsForLineFragmentWithRange:(NSRange)arg1 ;
-(void)beginListLabel;
-(void)endListLabel;
-(void)beginLineFragmentBodyWithRange:(NSRange)arg1 ;
-(void)endLineFragmentBodyWithRange:(NSRange)arg1 ;
-(void)beginPrimaryTextRunWithRange:(NSRange)arg1 hasActualContents:(char)arg2 ;
-(void)endPrimaryTextRunWithRange:(NSRange)arg1 hasActualContents:(char)arg2 ;
-(void)beginAncillaryTextRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)endAncillaryTextRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)beginRubyRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)endRubyRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)beginTateChuYokoRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)endTateChuYokoRunWithRange:(NSRange)arg1 baseTextRange:(NSRange)arg2 ;
-(void)handleDropCapAdornment:(id)arg1 ;
-(void)beginTableNameForChunk:(id)arg1 ;
-(void)endTableNameForChunk:(id)arg1 ;
-(void)beginTableLayoutSpace:(id)arg1 ;
-(void)endTableLayoutSpace:(id)arg1 ;
-(void)beginTableRow:(unsigned)arg1 ;
-(void)endTableRow:(unsigned)arg1 ;
-(void)beginTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(char)arg3 cellIsPrimary:(char)arg4 ;
-(void)endTableCell:(id)arg1 withCellID:(TSUCellCoord)arg2 cellHasContents:(char)arg3 cellIsPrimary:(char)arg4 ;
-(void)beginCheckboxCell:(char)arg1 ;
-(void)endCheckboxCell;
-(void)beginRatingCell:(double)arg1 ;
-(void)endRatingCell;
-(void)beginChartTitle;
-(void)endChartTitle;
-(void)beginComment;
-(void)endComment;
-(unsigned long long)depthOfContext:(id)arg1 ;
-(unsigned long long)depthOfTopmostTagOfType:(int)arg1 ;
-(id)regularDrawableRepForObjectRep:(id)arg1 ;
@end
