/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPTextAdornment.h>
#import <TSText/TSWPTextAdornmentRenderer.h>

@protocol TSWPTextSource;
@class TSWPDropCap, NSString, TSWPDropCapStyle, TSWPCharacterStyle, TSWPParagraphStyle, TSWPDropCapCharacterMetrics, NSArray, TSUBezierPath, TSDWrapSegments, TSDFill;

@interface TSWPDropCapAdornment : NSObject <TSWPTextAdornment, TSWPTextAdornmentRenderer> {

	char _isRightToLeft;
	char _isVertical;
	char _hasChangeTracking;
	TSWPDropCap* _dropCap;
	id<TSWPTextSource> _text;
	NSString* _coreTextString;
	TSWPDropCapStyle* _dropCapStyle;
	double _advance;
	double _wrapPadding;
	TSWPCharacterStyle* _characterStyle;
	TSWPParagraphStyle* _paragraphStyle;
	double _underlineOffsetFromBaseline;
	long long _lineSpacingMode;
	double _lineSpacingAmount;
	double _singleLineHeight;
	TSWPDropCapCharacterMetrics* _characterMetrics;
	NSArray* _glyphPaths;
	NSArray* _glyphAuthorColors;
	TSUBezierPath* _shapePath;
	TSDWrapSegments* _wrapSegments;
	TSUBezierPath* _pathForExteriorWrap;
	TSUBezierPath* _underlineWrapPath;
	NSString* _fontPostScriptName;
	double _unscaledFontSize;
	double _fontScaleFactor;
	CGSize _size;
	CGPoint _origin;
	CGPoint _glyphOffset;
	CGRect _rectAllocatedForUnderline;
	CGRect _characterFillRect;
	CGRect _dropCapFrame;
	CGRect _textFrame;
	CGRect _insetTextFrame;
	TSWPFontHeightInfo _heightInfo;
	TSWPFontHeightInfo _unscaledFontHeightInfo;

}

@property (assign,nonatomic) TSWPFontHeightInfo unscaledFontHeightInfo;                   //@synthesize unscaledFontHeightInfo=_unscaledFontHeightInfo - In the implementation block
@property (assign,nonatomic) long long lineSpacingMode;                                   //@synthesize lineSpacingMode=_lineSpacingMode - In the implementation block
@property (assign,nonatomic) double lineSpacingAmount;                                    //@synthesize lineSpacingAmount=_lineSpacingAmount - In the implementation block
@property (nonatomic,retain) TSWPDropCap * dropCap;                                       //@synthesize dropCap=_dropCap - In the implementation block
@property (assign,nonatomic) double singleLineHeight;                                     //@synthesize singleLineHeight=_singleLineHeight - In the implementation block
@property (assign,nonatomic) CGRect dropCapFrame;                                         //@synthesize dropCapFrame=_dropCapFrame - In the implementation block
@property (assign,nonatomic) CGRect textFrame;                                            //@synthesize textFrame=_textFrame - In the implementation block
@property (assign,nonatomic) CGRect insetTextFrame;                                       //@synthesize insetTextFrame=_insetTextFrame - In the implementation block
@property (nonatomic,retain) TSWPDropCapCharacterMetrics * characterMetrics;              //@synthesize characterMetrics=_characterMetrics - In the implementation block
@property (nonatomic,retain) NSArray * glyphPaths;                                        //@synthesize glyphPaths=_glyphPaths - In the implementation block
@property (nonatomic,retain) NSArray * glyphAuthorColors;                                 //@synthesize glyphAuthorColors=_glyphAuthorColors - In the implementation block
@property (assign,nonatomic) CGPoint glyphOffset;                                         //@synthesize glyphOffset=_glyphOffset - In the implementation block
@property (nonatomic,retain) TSUBezierPath * shapePath;                                   //@synthesize shapePath=_shapePath - In the implementation block
@property (assign,nonatomic) double wrapPadding;                                          //@synthesize wrapPadding=_wrapPadding - In the implementation block
@property (nonatomic,retain) TSDWrapSegments * wrapSegments;                              //@synthesize wrapSegments=_wrapSegments - In the implementation block
@property (nonatomic,retain) TSUBezierPath * pathForExteriorWrap;                         //@synthesize pathForExteriorWrap=_pathForExteriorWrap - In the implementation block
@property (nonatomic,retain) TSUBezierPath * underlineWrapPath;                           //@synthesize underlineWrapPath=_underlineWrapPath - In the implementation block
@property (assign,nonatomic) char hasChangeTracking;                                      //@synthesize hasChangeTracking=_hasChangeTracking - In the implementation block
@property (nonatomic,retain) TSWPDropCapStyle * dropCapStyle;                             //@synthesize dropCapStyle=_dropCapStyle - In the implementation block
@property (nonatomic,retain) TSWPCharacterStyle * characterStyle;                         //@synthesize characterStyle=_characterStyle - In the implementation block
@property (nonatomic,retain) TSWPParagraphStyle * paragraphStyle;                         //@synthesize paragraphStyle=_paragraphStyle - In the implementation block
@property (nonatomic,retain) id<TSWPTextSource> text;                                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * coreTextString;                                   //@synthesize coreTextString=_coreTextString - In the implementation block
@property (assign,nonatomic) TSWPFontHeightInfo heightInfo;                               //@synthesize heightInfo=_heightInfo - In the implementation block
@property (assign,nonatomic) double advance;                                              //@synthesize advance=_advance - In the implementation block
@property (assign,nonatomic) CGSize size;                                                 //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSString * fontPostScriptName;                                 //@synthesize fontPostScriptName=_fontPostScriptName - In the implementation block
@property (assign,nonatomic) double unscaledFontSize;                                     //@synthesize unscaledFontSize=_unscaledFontSize - In the implementation block
@property (assign,nonatomic) double fontScaleFactor;                                      //@synthesize fontScaleFactor=_fontScaleFactor - In the implementation block
@property (nonatomic,readonly) CGRect outermostPathRawBounds; 
@property (nonatomic,readonly) char isRightToLeft;                                        //@synthesize isRightToLeft=_isRightToLeft - In the implementation block
@property (nonatomic,readonly) char isVertical;                                           //@synthesize isVertical=_isVertical - In the implementation block
@property (nonatomic,readonly) double outdentInPoints; 
@property (nonatomic,readonly) double baselineShift; 
@property (nonatomic,readonly) double dynamicPadding; 
@property (nonatomic,readonly) TSDFill * characterFill; 
@property (nonatomic,readonly) char characterFillShouldFillTextContainer; 
@property (assign,nonatomic) CGPoint origin;                                              //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) CGRect rectAllocatedForUnderline;                            //@synthesize rectAllocatedForUnderline=_rectAllocatedForUnderline - In the implementation block
@property (assign,nonatomic) double underlineOffsetFromBaseline;                          //@synthesize underlineOffsetFromBaseline=_underlineOffsetFromBaseline - In the implementation block
@property (assign,nonatomic) CGRect characterFillRect;                                    //@synthesize characterFillRect=_characterFillRect - In the implementation block
@property (nonatomic,readonly) CGRect trailingCaretBounds; 
@property (nonatomic,readonly) char suppressLineFragmentTextRendering; 
@property (nonatomic,readonly) CGRect erasableBounds; 
@property (nonatomic,readonly) CGRect glyphBounds; 
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)convertPointsToConvexHull:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
+(CGRect)boundsOfMinimumCircleEnclosingPath:(id)arg1 ;
-(CGSize)size;
-(NSString *)debugDescription;
-(void)setSize:(CGSize)arg1 ;
-(CGRect)bounds;
-(char)isVertical;
-(id<TSWPTextSource>)text;
-(void)setParagraphStyle:(TSWPParagraphStyle *)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setText:(id<TSWPTextSource>)arg1 ;
-(char)isRightToLeft;
-(TSWPParagraphStyle *)paragraphStyle;
-(double)advance;
-(TSWPDropCap *)dropCap;
-(void)setDropCap:(TSWPDropCap *)arg1 ;
-(void)setFontScaleFactor:(double)arg1 ;
-(double)fontScaleFactor;
-(CGPoint)glyphOffset;
-(TSWPDropCapStyle *)dropCapStyle;
-(CGRect)erasableBounds;
-(id)styleArray;
-(TSDWrapSegments *)wrapSegments;
-(void)setShapePath:(TSUBezierPath *)arg1 ;
-(TSUBezierPath *)shapePath;
-(CGRect)trailingCaretBounds;
-(CGRect)glyphBounds;
-(void)offsetBy:(CGSize)arg1 ;
-(TSDFill *)characterFill;
-(void)setCharacterFillRect:(CGRect)arg1 ;
-(char)characterFillShouldFillTextContainer;
-(TSWPFontHeightInfo)heightInfo;
-(double)baselineShift;
-(id)initWithDropCapStyle:(id)arg1 characterStyle:(id)arg2 paragraphStyle:(id)arg3 text:(id)arg4 rightToLeft:(char)arg5 vertical:(char)arg6 fontHeightInfo:(TSWPFontHeightInfo)arg7 lineSpacingMode:(long long)arg8 lineSpacingAmount:(double)arg9 ;
-(id)adornmentRenderer;
-(void)drawAdornment:(id)arg1 inContext:(CGContextRef)arg2 viewScale:(double)arg3 flipShadows:(char)arg4 blackAndWhite:(char)arg5 ;
-(char)suppressLineFragmentTextRendering;
-(TSWPCharacterStyle *)characterStyle;
-(void)setCharacterStyle:(TSWPCharacterStyle *)arg1 ;
-(double)outdentInPoints;
-(NSString *)coreTextString;
-(CGRect)insetTextFrame;
-(double)underlineOffsetFromBaseline;
-(double)widthForCharacterAtIndex:(unsigned long long)arg1 ;
-(id)splitLine:(CGRect)arg1 skipHint:(out double*)arg2 ;
-(char)p_calculateMetrics;
-(id)p_pathForExteriorWrap;
-(void)setPathForExteriorWrap:(TSUBezierPath *)arg1 ;
-(id)p_createWrapSegments;
-(void)setWrapSegments:(TSDWrapSegments *)arg1 ;
-(NSArray *)glyphPaths;
-(CGRect)p_imageBoundsIncludingShadow:(char)arg1 ;
-(id)p_styleArray;
-(CGRect)outermostPathRawBounds;
-(CGRect)rectAllocatedForUnderline;
-(TSWPFontHeightInfo)unscaledFontHeightInfo;
-(double)dynamicPadding;
-(double)unscaledFontSize;
-(TSWPDropCapCharacterMetrics *)characterMetrics;
-(CGRect)dropCapFrame;
-(double)singleLineHeight;
-(TSUBezierPath *)pathForExteriorWrap;
-(CGPoint)originIncludingOutdent;
-(NSArray *)glyphAuthorColors;
-(CGRect)characterFillRect;
-(CGPoint)glyphOriginIncludingOutdent;
-(long long)lineSpacingMode;
-(double)lineSpacingAmount;
-(void)setSingleLineHeight:(double)arg1 ;
-(void)setHeightInfo:(TSWPFontHeightInfo)arg1 ;
-(id)p_styleArrayWithFontSize:(double)arg1 ;
-(void)setFontPostScriptName:(NSString *)arg1 ;
-(void)setUnscaledFontSize:(double)arg1 ;
-(void)setCoreTextString:(NSString *)arg1 ;
-(void)setCharacterMetrics:(TSWPDropCapCharacterMetrics *)arg1 ;
-(void)setDropCapFrame:(CGRect)arg1 ;
-(void)setTextFrame:(CGRect)arg1 ;
-(CGRect)textFrame;
-(void)setInsetTextFrame:(CGRect)arg1 ;
-(void)setRectAllocatedForUnderline:(CGRect)arg1 ;
-(void)setGlyphPaths:(NSArray *)arg1 ;
-(void)setGlyphAuthorColors:(NSArray *)arg1 ;
-(double)scaledFontSize;
-(void)setUnderlineOffsetFromBaseline:(double)arg1 ;
-(void)setUnderlineWrapPath:(TSUBezierPath *)arg1 ;
-(void)setGlyphOffset:(CGPoint)arg1 ;
-(void)setWrapPadding:(double)arg1 ;
-(double)wrapPadding;
-(void)setAdvance:(double)arg1 ;
-(TSUBezierPath *)underlineWrapPath;
-(id)p_paddedPathForExteriorWrap;
-(id)styleArrayWithFontSize:(double)arg1 ;
-(id)paddedPathForExteriorWrap;
-(void)setDropCapStyle:(TSWPDropCapStyle *)arg1 ;
-(void)setUnscaledFontHeightInfo:(TSWPFontHeightInfo)arg1 ;
-(void)setLineSpacingMode:(long long)arg1 ;
-(void)setLineSpacingAmount:(double)arg1 ;
-(char)hasChangeTracking;
-(void)setHasChangeTracking:(char)arg1 ;
-(NSString *)fontPostScriptName;
@end

