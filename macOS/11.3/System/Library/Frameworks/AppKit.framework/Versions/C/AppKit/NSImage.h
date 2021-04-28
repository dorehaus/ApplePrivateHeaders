/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSTextAttachmentImageContainer.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSPasteboardReading.h>
#import <libobjc.A.dylib/NSPasteboardWriting.h>

@protocol NSImageRepProvider, NSImageDelegate;
@class NSString, NSColor, NSDictionary, NSData, NSArray;

@interface NSImage : NSObject <NSTextAttachmentImageContainer, NSCopying, NSSecureCoding, NSPasteboardReading, NSPasteboardWriting> {

	NSString* _name;
	CGSize _size;
	id<NSImageRepProvider> _reps;
	NSColor* _backgroundColor;
	id<NSImageDelegate> _imageDelegate;
	CGRect _alignmentRectInNormalizedCoordinates;
	NSString* _accessibilityDescriptionBacking;
	NSEdgeInsets _capInsets;
	long long _resizingMode;
	NSDictionary* _configuration;
	NSColor* _tintColor;
	struct {
		unsigned scalable : 1;
		unsigned dataRetained : 1;
		unsigned uniqueWindow : 1;
		unsigned sizeWasExplicitlySet : 1;
		unsigned builtIn : 1;
		unsigned needsToExpand : 1;
		unsigned useEPSOnResolutionMismatch : 1;
		unsigned matchesOnlyOnBestFittingAxis : 1;
		unsigned colorMatchPreferred : 1;
		unsigned multipleResolutionMatching : 1;
		unsigned focusedWhilePrinting : 1;
		unsigned archiveByName : 1;
		unsigned unboundedCacheDepth : 1;
		unsigned flipped : 1;
		unsigned aliased : 1;
		unsigned dirtied : 1;
		unsigned cacheMode : 2;
		unsigned sampleMode : 3;
		unsigned resMatchPreferred : 1;
		unsigned isTemplate : 1;
		unsigned hasTrivialEdges : 1;
		unsigned  : 8;
	}  _flags;

}

@property (readonly) char willProvideAdaptedImageForPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setReps:,retain) id<NSImageRepProvider> _reps;                                                        //@synthesize reps=_reps - In the implementation block
@property (setter=_setDefaultAccessibilityDescription:,retain) NSString * _defaultAccessibilityDescription; 
@property (readonly) char _incorporatesContentStyling; 
@property (readonly) char _prefersResolutionMatch; 
@property (setter=_setTintColor:,copy) NSColor * _tintColor;                                                             //@synthesize tintColor=_tintColor - In the implementation block
@property (setter=_setHasTrivialEdges:) char _hasTrivialEdges; 
@property (assign) unsigned long long imageInterpolation; 
@property (setter=_setImageInterpolation:) unsigned long long _imageInterpolation; 
@property (getter=_isSymbolImage,readonly) char _symbolImage; 
@property (assign) CGSize size; 
@property (copy) NSColor * backgroundColor; 
@property (assign) char usesEPSOnResolutionMismatch; 
@property (assign) char prefersColorMatch; 
@property (assign) char matchesOnMultipleResolution; 
@property (assign) char matchesOnlyOnBestFittingAxis; 
@property (readonly) NSData * TIFFRepresentation; 
@property (copy,readonly) NSArray * representations; 
@property (getter=isValid,readonly) char valid; 
@property (__weak) id<NSImageDelegate> delegate; 
@property (assign) unsigned long long cacheMode; 
@property (assign) CGRect alignmentRect; 
@property (getter=isTemplate) char template; 
@property (copy) NSString * accessibilityDescription; 
@property (assign) NSEdgeInsets capInsets; 
@property (assign) long long resizingMode; 
+(void)initialize;
+(char)supportsSecureCoding;
+(id)_catalogIconImageWithName:(id)arg1 bundle:(id)arg2 ;
+(id)_catalogImageWithName:(id)arg1 bundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 flipped:(char)arg2 drawingHandler:(/*^block*/id)arg3 ;
+(id)readableTypesForPasteboard:(id)arg1 ;
+(id)imageFileTypes;
+(id)imageUnfilteredTypes;
+(id)imageUnfilteredFileTypes;
+(id)imageUnfilteredPasteboardTypes;
+(id)_imageWithSystemSymbolName:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 drawHandler:(/*^block*/id)arg2 ;
+(id)imageTypes;
+(char)canInitWithPasteboard:(id)arg1 ;
+(id)imageWithSystemSymbolName:(id)arg1 accessibilityDescription:(id)arg2 ;
+(id)imageWithPrivateSystemSymbolName:(id)arg1 accessibilityDescription:(id)arg2 ;
+(id)imagePasteboardTypes;
+(char)_canInitWithPasteboard:(id)arg1 allowMultipleFiles:(char)arg2 ;
+(id)_imageNamed:(id)arg1 ;
+(id)_systemImageNamed:(id)arg1 ;
+(id)_mainBundleImageNamed:(id)arg1 ;
+(id)_kitBundleImageNamed:(id)arg1 ;
+(id)_systemIconImageNamed:(id)arg1 ;
+(id)_symbolCompatibilityImageNamed:(id)arg1 ;
+(id)_coreUIImageNamed:(id)arg1 ;
+(id)_imageWithSystemSymbolName:(id)arg1 accessibilityDescription:(id)arg2 allowPrivateLookup:(char)arg3 ;
+(id)imageWithImageRep:(id)arg1 ;
+(id)_allNames;
+(id)imageWithSize:(CGSize)arg1 drawingIsFlipped:(char)arg2 drawHandler:(/*^block*/id)arg3 ;
+(void)_invalidateImageTypeCaches;
+(id)_imageWithSymbolName:(id)arg1 bundle:(id)arg2 ;
+(id)_emblemForCount:(long long)arg1 ;
+(id)_imageWithSystemSymbolName:(id)arg1 catalog:(id)arg2 createdWithCompatibilityImageName:(char)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)name;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(char)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<NSImageDelegate>)delegate;
-(void)setDelegate:(id<NSImageDelegate>)arg1 ;
-(id)initWithPasteboard:(id)arg1 ;
-(char)setName:(id)arg1 ;
-(id)initWithIconRef:(OpaqueIconRefRef)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSArray *)representations;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(NSData *)TIFFRepresentation;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(char)isFlipped;
-(void)setTemplate:(char)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 size:(CGSize)arg2 ;
-(void)addRepresentation:(id)arg1 ;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(void)setCapInsets:(NSEdgeInsets)arg1 ;
-(long long)resizingMode;
-(void)setResizingMode:(long long)arg1 ;
-(char)isTemplate;
-(void)_setDefaultAccessibilityDescription:(id)arg1 ;
-(NSColor *)backgroundColor;
-(NSColor *)_tintColor;
-(id)initWithSize:(CGSize)arg1 ;
-(void)_drawMappingAlignmentRectToRect:(CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 flip:(char)arg6 hints:(id)arg7 ;
-(double)recommendedLayerContentsScale:(double)arg1 ;
-(id)layerContentsForContentsScale:(double)arg1 ;
-(id)_imageByBadgingWithImage:(id)arg1 rect:(CGRect)arg2 ;
-(NSString *)accessibilityDescription;
-(void)setCachedSeparately:(char)arg1 ;
-(void)lockFocus;
-(void)drawAtPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)unlockFocus;
-(id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2 ;
-(char)hasAlpha;
-(id)TIFFRepresentationUsingCompression:(unsigned long long)arg1 factor:(float)arg2 ;
-(void)setFlipped:(char)arg1 ;
-(id)_imageWithConfiguration:(id)arg1 ;
-(CGRect)alignmentRect;
-(id)_defaultImageHints;
-(char)_isSymbolImage;
-(id)_imageWithFallbackConfiguration:(id)arg1 ;
-(void)setCacheMode:(unsigned long long)arg1 ;
-(id)initWithImageRep:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 ;
-(void)setImageInterpolation:(unsigned long long)arg1 ;
-(unsigned long long)imageInterpolation;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(char)arg5 hints:(id)arg6 ;
-(void)lockFocusFlipped:(char)arg1 ;
-(char)hitTestRect:(CGRect)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
-(unsigned long long)_imageInterpolation;
-(void)_compositeFlipped:(char)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 ;
-(void)_compositeFlipped:(char)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 operation:(unsigned long long)arg4 fraction:(double)arg5 ;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(void)lockFocusWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
-(void*)_createPatternForContext:(id)arg1 ;
-(void)addRepresentations:(id)arg1 ;
-(id)initByReferencingFile:(id)arg1 ;
-(id)imageWithSymbolConfiguration:(id)arg1 ;
-(NSString *)_defaultAccessibilityDescription;
-(void)_drawMappingAlignmentRectToRect:(CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 tintColor:(id)arg4 operation:(unsigned long long)arg5 fraction:(double)arg6 flip:(char)arg7 hints:(id)arg8 ;
-(void)recache;
-(void)_usingRepProviderPerformBlock:(/*^block*/id)arg1 ;
-(unsigned long long)cacheMode;
-(void)_setReps:(id)arg1 ;
-(id<NSImageRepProvider>)_reps;
-(void)_setRepProvider:(id)arg1 ;
-(id)initWithISIcon:(id)arg1 ;
-(id)_repProviderForSymbolName:(id)arg1 allowPrivateLookup:(char)arg2 ;
-(void)_usingRepresentationsPerformBlock:(/*^block*/id)arg1 ;
-(void)_setRepProviderWithRepresentationsArray:(id)arg1 ;
-(void)_addRepresentations:(id)arg1 ;
-(void)setScalesWhenResized:(char)arg1 ;
-(id)bestRepresentationAmongRepresentations:(id)arg1 forHints:(id)arg2 ;
-(id)bestRepresentationForHints:(id)arg1 ;
-(id)bestRepresentationForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(id)initByReferencingURL:(id)arg1 ;
-(void)_setRepProviderWithReferencingURL:(id)arg1 ;
-(void)setDataRetained:(char)arg1 ;
-(void)_setRepProviderWithReferencingURLs:(id)arg1 ;
-(void)_setRepProviderWithISIcon:(id)arg1 ;
-(void)_setRepProviderWithIconRef:(OpaqueIconRefRef)arg1 ;
-(void)_setPrefersResolutionMatch:(char)arg1 ;
-(id)_initWithIconRef:(OpaqueIconRefRef)arg1 ;
-(char)_legacyAddRepresentationsForIconNamed:(id)arg1 fromIconSectionInAppBinary:(id)arg2 ;
-(void)_setRepProviderWithSymbolName:(id)arg1 allowPrivateLookup:(char)arg2 ;
-(void)_setAlignmentRectInNormalizedCoordinates:(CGRect)arg1 ;
-(void)_setAccessibilityDescriptionBacking:(id)arg1 ;
-(CGRect)_alignmentRectInNormalizedCoordinates;
-(id)_accessibilityDescriptionBackingForArchiving;
-(NSEdgeInsets)capInsets;
-(id)_accessibilityDescriptionBackingForCopying;
-(void)_setImageInterpolation:(unsigned long long)arg1 ;
-(char)_incorporatesContentStyling;
-(void)_setTintColor:(id)arg1 ;
-(id)_imageWithSymbolConfiguration:(id)arg1 ;
-(id)_accessibilityDescriptionBacking;
-(id)_providedAccessibilityDescription;
-(void)_usingBestRepresentationForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 body:(/*^block*/id)arg4 ;
-(id)_imageDidNotDrawHandlerRep;
-(void)_drawInRect:(CGRect)arg1 withState:(unsigned long long)arg2 backgroundStyle:(int)arg3 tintColor:(id)arg4 operation:(unsigned long long)arg5 fraction:(double)arg6 flip:(char)arg7 hints:(id)arg8 ;
-(void)_dispatchImageDidNotDraw:(id)arg1 ;
-(char)scalesWhenResized;
-(char)_whenDrawn:(id)arg1 fills:(const CGRect*)arg2 ;
-(char)_drawRepresentation:(id)arg1 inRect:(CGRect)arg2 withScaling:(char)arg3 ;
-(void)_replaceRepsWithRep:(id)arg1 ;
-(void)_lockFocusOnRepresentation:(id)arg1 rect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
-(void)_usingBestRepresentationAmongRepresentations:(id)arg1 forRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 body:(/*^block*/id)arg5 ;
-(void)compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 ;
-(void)dissolveToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 fraction:(double)arg3 ;
-(char)_composite:(long long)arg1 delta:(double)arg2 fromRect:(CGRect)arg3 toPoint:(CGPoint)arg4 ;
-(void)compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 ;
-(void)removeRepresentation:(id)arg1 ;
-(id)bestRepresentationForDevice:(id)arg1 ;
-(id)initByReferencingURLs:(id)arg1 ;
-(id)initWithDataIgnoringOrientation:(id)arg1 ;
-(id)initFromImage:(id)arg1 rect:(CGRect)arg2 ;
-(id)_initWithData:(id)arg1 fileType:(id)arg2 hfsType:(id)arg3 ;
-(id)_initWithIconRef:(OpaqueIconRefRef)arg1 includeThumbnail:(char)arg2 ;
-(void)cancelIncrementalLoad;
-(void)setUsesEPSOnResolutionMismatch:(char)arg1 ;
-(char)usesEPSOnResolutionMismatch;
-(void)setPrefersColorMatch:(char)arg1 ;
-(char)prefersColorMatch;
-(char)_prefersResolutionMatch;
-(void)setMatchesOnMultipleResolution:(char)arg1 ;
-(char)matchesOnMultipleResolution;
-(char)matchesOnlyOnBestFittingAxis;
-(void)setMatchesOnlyOnBestFittingAxis:(char)arg1 ;
-(void)_setAntialiased:(char)arg1 ;
-(char)_antialiased;
-(void)_applyAsContentsToLayer:(id)arg1 ;
-(id)_imageByApplyingTintColor:(id)arg1 ;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(void)_dumpFullImageInfo;
-(void)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 hints:(id)arg5 ;
-(char)drawRepresentation:(id)arg1 inRect:(CGRect)arg2 ;
-(char)hitTestRect:(CGRect)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
-(char)hitTestPoint:(CGPoint)arg1 withImageDestinationRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 ;
-(char)isDataRetained;
-(char)isCachedSeparately;
-(void)setCacheDepthMatchesImageDepth:(char)arg1 ;
-(char)cacheDepthMatchesImageDepth;
-(void)compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 ;
-(void)dissolveToPoint:(CGPoint)arg1 fraction:(double)arg2 ;
-(void)_compositeToPoint:(CGPoint)arg1 operation:(unsigned long long)arg2 fraction:(double)arg3 ;
-(void)_compositeToPoint:(CGPoint)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 ;
-(void)lockFocusOnRepresentation:(id)arg1 ;
-(id)_alternateImageWithCriteria:(id)arg1 ;
-(char)_hasTrivialEdges;
-(void)_setHasTrivialEdges:(char)arg1 ;
-(char)willProvideAdaptedImageForPresentation;
-(id)imageForBounds:(CGRect)arg1 attributes:(id)arg2 location:(id)arg3 textContainer:(id)arg4 ;
-(CGRect)attachmentBoundsForAttributes:(id)arg1 location:(id)arg2 textContainer:(id)arg3 proposedLineFragment:(CGRect)arg4 position:(CGPoint)arg5 ;
-(void)CA_prepareRenderValue;
-(void*)CA_copyRenderValue;
-(char)NS_needsRecommitOnDefaultContentsScaleChange;
-(id)_imageByScalingToSize:(CGSize)arg1 withImageInterpolation:(unsigned long long)arg2 ;
-(id)_imageByApplyingShadowForDragging;
-(id)_imageByScalingToSize:(CGSize)arg1 withImageInterpolation:(unsigned long long)arg2 imageScaling:(unsigned long long)arg3 ;
-(id)_safari_imageWithBackgroundColor:(id)arg1 compositingOperation:(unsigned long long)arg2 ;
-(id)_flatImageWithColor:(id)arg1 ;
@end

