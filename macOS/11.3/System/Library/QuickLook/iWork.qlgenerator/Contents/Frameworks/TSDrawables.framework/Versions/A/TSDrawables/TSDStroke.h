/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSSPropertyCommandSerializing.h>
#import <TSDrawables/TSDPathPainter.h>
#import <TSDrawables/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor, TSDStrokePattern, NSString;

@interface TSDStroke : NSObject <TSSPropertyCommandSerializing, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying> {

	int _cap;
	int _join;
	TSUColor* _color;
	double _width;
	double _miterLimit;
	TSDStrokePattern* _pattern;
	double _actualWidth;

}

@property (nonatomic,readonly) char dontClearBackground; 
@property (nonatomic,readonly) char empty; 
@property (nonatomic,readonly) char solid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) TSUColor * i_color;                                             //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double i_width;                                               //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double i_actualWidth;                                         //@synthesize actualWidth=_actualWidth - In the implementation block
@property (assign,setter=i_setCap:,nonatomic) int i_cap;                                   //@synthesize cap=_cap - In the implementation block
@property (assign,nonatomic) int i_join;                                                   //@synthesize join=_join - In the implementation block
@property (assign,nonatomic) double i_miterLimit;                                          //@synthesize miterLimit=_miterLimit - In the implementation block
@property (setter=i_setPattern:,nonatomic,copy) TSDStrokePattern * i_pattern;              //@synthesize pattern=_pattern - In the implementation block
@property (nonatomic,copy,readonly) TSUColor * color; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double renderedWidth; 
@property (nonatomic,readonly) double actualWidth; 
@property (nonatomic,readonly) int cap; 
@property (nonatomic,readonly) int join; 
@property (nonatomic,readonly) double miterLimit; 
@property (nonatomic,copy,readonly) TSDStrokePattern * pattern; 
@property (nonatomic,readonly) char isNullStroke; 
@property (nonatomic,readonly) char isDash; 
@property (nonatomic,readonly) char isRoundDash; 
@property (nonatomic,readonly) char shouldRender; 
@property (nonatomic,readonly) char supportsPattern; 
@property (nonatomic,readonly) char supportsWidth; 
@property (nonatomic,readonly) char supportsColor; 
@property (nonatomic,readonly) char supportsLineOptions; 
@property (nonatomic,readonly) double suggestedMinimumLineWidth; 
@property (nonatomic,readonly) char isFrame; 
@property (nonatomic,readonly) char isNearlyWhite; 
@property (nonatomic,readonly) double dashSpacing; 
@property (nonatomic,readonly) char drawsOutsideStrokeBounds; 
@property (nonatomic,readonly) char needsToExtendJoinsForBoundsCalculation; 
@property (nonatomic,readonly) TSDStrokeOutsets outsets; 
@property (nonatomic,readonly) char drawsInOneStep; 
@property (nonatomic,readonly) char shouldAntialiasDefeat; 
@property (nonatomic,readonly) char usesOpenGL; 
+(id)emptyStrokeWithWidth:(double)arg1 ;
+(id)zeroWidthEmptyStroke;
+(id)mergeRangeEmptyStroke;
+(id)portalStroke;
+(id)stroke;
+(Class)mutableClass;
+(char)canMixWithNilObjects;
+(id)i_newStroke;
+(id)i_newEmptyStroke;
+(id)emptyStroke;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 ;
+(id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
+(long long)indexOfStroke:(id)arg1 strokeArray:(id)arg2 ;
+(id)editedStrokeFromModelStroke:(id)arg1 selectedStroke:(id)arg2 ;
+(id)instanceWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
+(id)colorOnSuppressedBackgrounds;
-(char)empty;
-(char)dontClearBackground;
-(char)solid;
-(char)isEqualToStroke:(id)arg1 ;
-(char)isPortalStroke;
-(void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)width;
-(TSDStrokePattern *)pattern;
-(TSUColor *)color;
-(double)miterLimit;
-(char)isFrame;
-(char)isNearlyWhite;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(const CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(int)cap;
-(int)join;
-(void)applyToContext:(CGContextRef)arg1 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 ;
-(id)strokeLineEnd:(id)arg1 ;
-(void)paintLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(CGContextRef)arg5 useFastDrawing:(char)arg6 ;
-(char)supportsColor;
-(char)shouldRender;
-(double)actualWidth;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(char)isRoundDash;
-(char)isDash;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
-(id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6 ;
-(void)setI_actualWidth:(double)arg1 ;
-(TSUColor *)i_color;
-(double)i_width;
-(int)i_cap;
-(int)i_join;
-(double)i_miterLimit;
-(TSDStrokePattern *)i_pattern;
-(void)i_setCap:(int)arg1 ;
-(double)i_actualWidth;
-(char)supportsWidth;
-(char)supportsLineOptions;
-(char)supportsPattern;
-(const CGPathRef)pathToStrokeFromCGPath:(const CGPathRef)arg1 ;
-(void)setI_color:(TSUColor *)arg1 ;
-(void)setI_width:(double)arg1 ;
-(void)setI_join:(int)arg1 ;
-(void)setI_miterLimit:(double)arg1 ;
-(void)i_setPattern:(id)arg1 ;
-(void)applyToContext:(CGContextRef)arg1 insideStroke:(char)arg2 ;
-(id)colorForCGContext:(CGContextRef)arg1 ;
-(void)paintRect:(CGRect)arg1 wantsInteriorStroke:(char)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintPath:(const CGPathRef)arg1 wantsInteriorStroke:(char)arg2 inContext:(CGContextRef)arg3 ;
-(void)paintPath:(const CGPathRef)arg1 wantsInteriorStroke:(char)arg2 inContext:(CGContextRef)arg3 useFastDrawing:(char)arg4 parameterized:(char)arg5 shouldReverseDrawOrder:(char)arg6 ;
-(void)p_strokePathChunk:(const CGPathRef)arg1 inContext:(CGContextRef)arg2 wantsInteriorStroke:(char)arg3 ;
-(double)horizontalMarginForSwatch;
-(char)isNullStroke;
-(double)renderedWidth;
-(double)dashSpacing;
-(char)drawsOutsideStrokeBounds;
-(char)needsToExtendJoinsForBoundsCalculation;
-(CGRect)boundsForPath:(id)arg1 ;
-(TSDStrokeOutsets)outsets;
-(void)i_setPropertiesFromStroke:(id)arg1 ;
-(void)i_setPatternPropertiesFromStroke:(id)arg1 ;
-(void)applyInteriorWrapPropertiesToContext:(CGContextRef)arg1 insideStroke:(char)arg2 ;
-(double)lineEndInsetAdjustment;
-(CGRect)boundsForLineEnd:(id)arg1 atPoint:(CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(CGAffineTransform)arg5 ;
-(id)pathForLineEnd:(id)arg1 wrapPath:(char)arg2 atPoint:(CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5 ;
-(double)suggestedMinimumLineWidth;
-(char)drawsInOneStep;
-(char)shouldAntialiasDefeat;
-(id)strokeByTransformingByTransform:(CGAffineTransform)arg1 ;
-(char)canDrawWithOtherStroke:(id)arg1 ;
-(id)initWithArchive:(const StrokeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(StrokeArchive*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(char)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)arg1 ;
-(id)pathToStrokeFromTSUBezierPath:(id)arg1 ;
-(char)usesOpenGL;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
@end

