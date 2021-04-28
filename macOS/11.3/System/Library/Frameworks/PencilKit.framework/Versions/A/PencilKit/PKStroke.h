/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKInk, NSUUID, PKStrokePath, NSArray, _PKStrokeClipPlane, PKStrokeRenderMask, NSBezierPath;

@interface PKStroke : NSObject <NSCopying> {

	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	CGRect _cachedBounds;
	double _cachedMaxWidthForStroke;
	PKInk* _ink;
	SCD_Struct_PK38 _flags;
	NSUUID* _strokeUUID;
	PKStrokePath* _strokeData;
	NSArray* _substrokes;
	_PKStrokeClipPlane* _clipPlane;
	PKStrokeRenderMask* _renderMask;
	NSUUID* _groupID;
	long long _shapeType;
	PKStrokeID _version;
	PKStrokeID _sortID;
	PKStrokeID _substrokesVersion;
	CGAffineTransform _transform;

}

@property (nonatomic,copy) _PKStrokeClipPlane * _clipPlane;                                        //@synthesize clipPlane=_clipPlane - In the implementation block
@property (nonatomic,copy) PKStrokeRenderMask * _renderMask;                                       //@synthesize renderMask=_renderMask - In the implementation block
@property (nonatomic,copy) NSUUID * _groupID;                                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK39 _flags;                                               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long _shapeType;                                                 //@synthesize shapeType=_shapeType - In the implementation block
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) char _hidden; 
@property (nonatomic,readonly) char _isFullyHidden; 
@property (assign,setter=_setIsNewCopy:,getter=_isNewCopy,nonatomic) char _isNewCopy; 
@property (nonatomic,retain) PKStrokePath * _strokeData; 
@property (nonatomic,readonly) NSUUID * _strokeDataUUID; 
@property (assign,setter=_setBounds:,nonatomic) CGRect _bounds; 
@property (nonatomic,readonly) CGRect _untransformedBounds; 
@property (nonatomic,readonly) unsigned _randomSeed; 
@property (nonatomic,retain) PKInk * ink;                                                          //@synthesize ink=_ink - In the implementation block
@property (setter=_setStrokeUUID:,nonatomic,retain) NSUUID * _strokeUUID;                          //@synthesize strokeUUID=_strokeUUID - In the implementation block
@property (nonatomic,readonly) char _isInternal; 
@property (assign,nonatomic) PKStrokeID _sortID;                                                   //@synthesize sortID=_sortID - In the implementation block
@property (assign,nonatomic) PKStrokeID _version;                                                  //@synthesize version=_version - In the implementation block
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform _transform;                   //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) PKStrokeID _substrokesVersion;                                        //@synthesize substrokesVersion=_substrokesVersion - In the implementation block
@property (nonatomic,retain) NSArray * _substrokes;                                                //@synthesize substrokes=_substrokes - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) PKStrokePath * path;                                                //@synthesize strokeData=_strokeData - In the implementation block
@property (nonatomic,readonly) NSBezierPath * mask; 
@property (nonatomic,readonly) CGRect renderBounds; 
@property (nonatomic,readonly) NSArray * maskedPathRanges; 
+(PKCompressedStrokePoint)_compressStrokePoint:(PKStrokePoint)arg1 withTimestamp:(double)arg2 ;
+(PKStrokePoint)_decompressStrokePoint:(PKCompressedStrokePoint)arg1 withTimestamp:(double)arg2 ;
+(long long)_asciiDimensionForBoundsDimension:(double)arg1 ;
+(long long)_asciiBitfieldIndexForX:(long long)arg1 y:(long long)arg2 width:(long long)arg3 ;
+(id)copyStrokes:(id)arg1 hidden:(char)arg2 ;
+(id)_testStrokeFromPoints:(PKCompressedStrokePoint*)arg1 length:(long long)arg2 ink:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_isHidden;
-(SCD_Struct_PK39)_flags;
-(id)dataRepresentation;
-(PKStrokePath *)path;
-(PKStrokeID)_version;
-(double)_timestamp;
-(CGAffineTransform)transform;
-(double)timestamp;
-(CGRect)bounds;
-(CGRect)_bounds;
-(NSBezierPath *)mask;
-(CGAffineTransform)_transform;
-(void)_setHidden:(char)arg1 ;
-(double)timestampAtIndex:(unsigned long long)arg1 ;
-(NSUUID *)_groupID;
-(id)debugQuickLookObject;
-(double)startTimestamp;
-(char)_isInternal;
-(unsigned long long)_pointsCount;
-(double)endTimestamp;
-(CGPoint)locationAtIndex:(unsigned long long)arg1 ;
-(void)_setBounds:(CGRect)arg1 ;
-(CGRect)_calculateBounds;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(long long)_inputType;
-(PKStrokeID)_sortID;
-(id)_ascii;
-(id)initWithArchive:(const StrokeDelta*)arg1 error:(id*)arg2 ;
-(void)saveToArchive:(StrokeDelta*)arg1 ;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSUUID *)_strokeUUID;
-(_PKStrokeClipPlane *)_clipPlane;
-(PKStrokeRenderMask *)_renderMask;
-(void)set_clipPlane:(_PKStrokeClipPlane *)arg1 ;
-(void)set_renderMask:(PKStrokeRenderMask *)arg1 ;
-(void)set_groupID:(NSUUID *)arg1 ;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(CGRect)_untransformedBounds;
-(NSUUID *)_strokeDataUUID;
-(unsigned)_randomSeed;
-(PKStrokePath *)_strokeData;
-(id)_ink;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(char)arg5 transientArchiveDictionary:(id)arg6 ;
-(void)_setStrokeUUID:(id)arg1 ;
-(PKStrokeID)readStrokeIDFromArchive:(const StrokeID*)arg1 withSortedUUIDs:(id)arg2 ;
-(void)set_sortID:(PKStrokeID)arg1 ;
-(void)set_version:(PKStrokeID)arg1 ;
-(void)set_shapeType:(long long)arg1 ;
-(void)_setInk:(id)arg1 ;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(void)set_flags:(SCD_Struct_PK39)arg1 ;
-(void)set_strokeData:(PKStrokePath *)arg1 ;
-(void)set_substrokesVersion:(PKStrokeID)arg1 ;
-(void)set_substrokes:(NSArray *)arg1 ;
-(NSArray *)_substrokes;
-(PKStrokeID)_substrokesVersion;
-(void)saveUUIDsTo:(id)arg1 ;
-(void)saveInksTo:(id)arg1 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(char)arg4 parent:(id)arg5 transient:(char)arg6 ;
-(long long)_shapeType;
-(void)saveStrokeID:(const PKStrokeID*)arg1 toArchive:(StrokeID*)arg2 withSortedUUIDs:(id)arg3 ;
-(char)_isFullyHidden;
-(PKStrokeID)readV1StrokeIDFromArchive:(const StrokeID*)arg1 withSortedUUIDs:(id)arg2 ;
-(PKStrokePoint)readPointFromLegacyArchive:(const Point*)arg1 deltaFrom:(const PKStrokePoint*)arg2 ;
-(void)saveV1StrokeID:(const PKStrokeID*)arg1 toArchive:(StrokeID*)arg2 withSortedUUIDs:(id)arg3 ;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 transientArchiveDictionary:(id)arg4 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(char)arg4 transient:(char)arg5 ;
-(id)initWithV1Archive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 ;
-(id)initWithLegacyArchive:(const Command*)arg1 sortedUUIDs:(id)arg2 ;
-(CGPoint)readPointFromArchive:(const Point*)arg1 ;
-(unsigned)saveToV1Archive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(char)arg4 transient:(char)arg5 ;
-(CGPathRef)_newPathRepresentation;
-(id)deltaTo:(id)arg1 ;
-(long long)_visibleSubstrokeCount;
-(void)_addVisibleSubstrokesTo:(id)arg1 ;
-(long long)compareToStroke:(id)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(char)arg2 version:(PKStrokeID)arg3 ink:(id)arg4 transform:(CGAffineTransform)arg5 ;
-(id)initWithData:(id)arg1 id:(id)arg2 sortID:(PKStrokeID)arg3 timestamp:(double)arg4 flags:(SCD_Struct_PK39)arg5 version:(PKStrokeID)arg6 ink:(id)arg7 transform:(CGAffineTransform)arg8 substrokes:(id)arg9 substrokesVersion:(PKStrokeID)arg10 ;
-(id)copyForMutation;
-(id)_updateStroke:(/*^block*/id)arg1 ;
-(id)_mergeWithStroke:(id)arg1 ;
-(char*)_newAsciiBitfield;
-(void)_addTestDataToUnknownFields;
-(id)_dataInUnknownFields;
-(id)strokeApplying:(id)arg1 ;
-(char)_shouldBeClippedAgainstLegacyCanvas;
-(id)_initWithPath:(CGPathRef)arg1 ink:(id)arg2 maxSegmentLength:(double)arg3 inputScale:(double)arg4 velocityForDistanceFunction:(/*^block*/id)arg5 ;
-(id)initWithStroke:(id)arg1 hidden:(char)arg2 version:(PKStrokeID)arg3 ;
-(id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(CGAffineTransform)arg3 mask:(id)arg4 ;
-(id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(CGAffineTransform)arg3 ;
-(id)initWithStroke:(id)arg1 ;
-(void)_consumeRenderVertexes:(/*^block*/id)arg1 ;
-(CGRect)renderBounds;
-(void)interpolatePointDataWithStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionAtDepth:(long long)arg1 ;
-(char*)_newAsciiBitfieldWithWidth:(long long)arg1 height:(long long)arg2 ;
-(id)_substrokeWithRange:(NSRange)arg1 ;
-(id)_initWithStroke:(id)arg1 strokeData:(id)arg2 ;
-(CGPoint)_locationAtIndex:(unsigned long long)arg1 applyStrokeTransform:(char)arg2 ;
-(CGPoint)_locationAtIndex:(unsigned long long)arg1 ;
-(id)_initWithPath:(CGPathRef)arg1 ink:(id)arg2 inputScale:(double)arg3 ;
-(id)initWithStroke:(id)arg1 hidden:(char)arg2 version:(PKStrokeID)arg3 transform:(CGAffineTransform)arg4 ;
-(id)initWithData:(id)arg1 id:(id)arg2 sortID:(PKStrokeID)arg3 timestamp:(double)arg4 hidden:(char)arg5 version:(PKStrokeID)arg6 ink:(id)arg7 transform:(CGAffineTransform)arg8 substrokes:(id)arg9 substrokesVersion:(PKStrokeID)arg10 ;
-(id)copyForMutationWithSubstrokes:(id)arg1 ;
-(char)_isNewCopy;
-(void)_setIsNewCopy:(char)arg1 ;
-(CGPathRef)newPathRepresentation;
-(void)_invalidateBounds;
-(void)_appendPointsOfInterestForSelection:(vector<CGPoint, std::__1::allocator<CGPoint>>*)arg1 ;
-(double)_maxWidthForStroke;
-(id)substrokeWithRange:(NSRange)arg1 ;
-(double)_timestampAtIndex:(unsigned long long)arg1 ;
-(char)_containsSamePointsAsStroke:(id)arg1 ;
-(NSArray *)maskedPathRanges;
-(CGPoint)intersectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(unique_ptr<std::__1::vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint>>, std::__1::default_delete<std::__1::vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint>>>>*)_compressedStrokePoints;
-(char)intersectsPoint:(CGPoint)arg1 boundsOutset:(double)arg2 minimumStrokeThreshold:(double)arg3 ;
-(char)intersectsLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 minThreshold:(double)arg3 ;
-(char)intersectsClosedStroke:(id)arg1 ;
-(char)_visitVisibleSubstrokes:(/*^block*/id)arg1 ;
-(void)generateClipPaths:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>>*)arg1 transform:(CGAffineTransform)arg2 ;
-(id)_sliceWithSlicingBlock:(/*^block*/id)arg1 replica:(id)arg2 ;
-(void)interpolatePointDataWithStep:(double)arg1 from:(double)arg2 to:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(double)_thresholdForPoint:(PKStrokePoint)arg1 ;
-(id)_mergeUnparentedWithStroke:(id)arg1 ;
-(id)_updateWithParent:(id)arg1 ;
-(id)mergeArrayOfStrokes:(id)arg1 with:(id)arg2 ;
-(void)debugRender:(CGContextRef)arg1 ;
-(CGPathRef)selectionPathRepresentationWithPointsCount:(int*)arg1 ;
-(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>>*)newOutlinePaths;
-(char)intersectsPoint:(CGPoint)arg1 ;
@end

