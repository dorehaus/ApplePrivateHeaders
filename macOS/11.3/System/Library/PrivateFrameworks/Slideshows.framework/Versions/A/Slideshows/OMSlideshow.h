/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/MPAssetKeyDelegate.h>
#import <libobjc.A.dylib/OKDocumentDelegate.h>
#import <libobjc.A.dylib/OKDocumentMediaItemLookupDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol OMSlideshowEditingDelegate, OMSlideshowMediaItemLookupDelegate;
@class MPDocument, OKDocument, NSMutableDictionary, NSArray, NSDictionary, NSNumber, NSURL, OMSlideshowTheme, NSString;

@interface OMSlideshow : NSObject <MPAssetKeyDelegate, OKDocumentDelegate, OKDocumentMediaItemLookupDelegate, NSCoding> {

	MPDocument* _marimbaDocument;
	OKDocument* _opusDocument;
	NSMutableDictionary* _mediaItems;
	NSArray* _synopsis;
	NSArray* _itemMap;
	NSDictionary* _restoredMarimbaCustomDurations;
	NSDictionary* _restoredMarimbaSubtitles;
	NSNumber* _restoredMarimbaSeed;
	NSArray* _restoredOpusGuidelines;
	NSMutableDictionary* _mediaAttributes;
	char _wantsIris;
	struct {
		unsigned isLoaded : 1;
		unsigned deferSynopsisUpdateDelegateCall : 1;
		unsigned synopsisUpdateDelegateCallWasDeferred : 1;
	}  _flags;
	NSURL* _url;
	OMSlideshowTheme* _theme;
	id<OMSlideshowEditingDelegate> _editingDelegate;
	id<OMSlideshowMediaItemLookupDelegate> _mediaItemLookupDelegate;
	NSDictionary* _subtitles;
	double _minDuration;
	double _maxDuration;
	double _duration;

}

@property (readonly) NSURL * url;                                                               //@synthesize url=_url - In the implementation block
@property (readonly) OMSlideshowTheme * theme;                                                  //@synthesize theme=_theme - In the implementation block
@property (readonly) double duration;                                                           //@synthesize duration=_duration - In the implementation block
@property (readonly) double minDuration;                                                        //@synthesize minDuration=_minDuration - In the implementation block
@property (readonly) double maxDuration;                                                        //@synthesize maxDuration=_maxDuration - In the implementation block
@property (readonly) NSDictionary * subtitles;                                                  //@synthesize subtitles=_subtitles - In the implementation block
@property (assign) id<OMSlideshowEditingDelegate> editingDelegate;                              //@synthesize editingDelegate=_editingDelegate - In the implementation block
@property (assign) id<OMSlideshowMediaItemLookupDelegate> mediaItemLookupDelegate;              //@synthesize mediaItemLookupDelegate=_mediaItemLookupDelegate - In the implementation block
@property (readonly) char isLoaded; 
@property (readonly) char synopsisSupportsMultipleItemsPerGroup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)addMediaItemClass:(Class)arg1 ;
+(id)stringAttributesWithAttributedString:(id)arg1 ;
+(id)attributedStringWithNSAttributesFromStringAttributes:(id)arg1 ;
+(id)unarchiveSlideshowFromData:(id)arg1 withMediaURLs:(id)arg2 andMediaItemLookupDelegate:(id)arg3 error:(id*)arg4 ;
+(id)createMediaItemMetadata;
+(id)attributedStringWithCTAttributesFromStringAttributes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(NSURL *)url;
-(char)isLoaded;
-(double)duration;
-(char)_hasTitle;
-(OMSlideshowTheme *)theme;
-(NSDictionary *)subtitles;
-(double)maxDuration;
-(id)synopsis;
-(void)saveToURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setEditingDelegate:(id<OMSlideshowEditingDelegate>)arg1 ;
-(id<OMSlideshowEditingDelegate>)editingDelegate;
-(unsigned long long)countOfItems;
-(void)setMediaItemLookupDelegate:(id<OMSlideshowMediaItemLookupDelegate>)arg1 ;
-(unsigned long long)authorWithTheme:(id)arg1 mediaURLs:(id)arg2 attributes:(id)arg3 progressHandler:(/*^block*/id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)__internalMarimbaDocument;
-(id)__internalOpusDocument;
-(void)recomputeSynopsis;
-(void)_recomputeSynopsis;
-(id<OMSlideshowMediaItemLookupDelegate>)mediaItemLookupDelegate;
-(id)_mediaPropertiesForMediaURL:(id)arg1 ;
-(void)_closeOpusDocument;
-(id)_writeToDictionary;
-(char)synopsisSupportsMultipleItemsPerGroup;
-(void)_updateDurations;
-(void)_updateSubtitles;
-(id)_subtitleDictionaryForGuidelines;
-(void)authorMarimbaDocumentWithStyle:(id)arg1 mediaURLS:(id)arg2 attributes:(id)arg3 ;
-(id)_makeOpusGuidelinesFromAttributes:(id)arg1 theme:(id)arg2 ;
-(id)_titleGuidelineWithString:(id)arg1 andAttributes:(id)arg2 ;
-(id)_guidelinesForSubtitleDictionary:(id)arg1 removeStringAttributes:(char)arg2 ;
-(id)_scaleToFitGuidelineWithValue:(char)arg1 ;
-(id)_transitionGuidelineFromSettings:(id)arg1 theme:(id)arg2 ;
-(id)mediaItemForAssetKey:(id)arg1 ;
-(char)_startDeferringSynopsisUpdateDelegateCall;
-(void)_stopDeferringSynopsisUpdateDelegateCall:(char)arg1 ;
-(char)canStartMovingItemsAtIndices:(id)arg1 actuallyMovingItemIndices:(id*)arg2 ;
-(void)_moveMediaAssetsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_subtitleGuidelineWithValue:(id)arg1 andMediaItem:(id)arg2 ;
-(void)insertText:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_subtitleGuidelineWithString:(id)arg1 andMediaItem:(id)arg2 ;
-(void)_insertMediaAssets:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_removeMediaAssetsAtIndices:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCenter:(CGPoint)arg1 scaleAtStart:(double)arg2 andCenter:(CGPoint)arg3 scaleAtEnd:(double)arg4 forMediaPath:(id)arg5 ;
-(void)document:(id)arg1 needsAnimationPathsAppliedForSlide:(id)arg2 inEffect:(id)arg3 ;
-(id)_marimbaMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(char)arg4 ;
-(id)_opusMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(char)arg4 ;
-(unsigned long long)_marimbaExportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(unsigned long long)_opusExportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)mediaItemForURL:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(CGSize)resolutionForAssetKey:(id)arg1 ;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3 ;
-(id)attributesforAssetPath:(id)arg1 ;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5 ;
-(id)avAssetForAssetKey:(id)arg1 ;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1 ;
-(id)initWithMarimbaDocument:(id)arg1 ;
-(void)invalidateMediaPropertiesForMediaURL:(id)arg1 ;
-(CGImageRef)posterImageWithSize:(CGSize)arg1 ;
-(char)document:(id)arg1 shouldUseDefaultAnimatedPathsForSlide:(id)arg2 inEffect:(id)arg3 ;
-(id)_guidelinesForSubtitleDictionary:(id)arg1 ;
-(char)canStartMovingItemsAtIndices:(id)arg1 ;
-(char)canMoveItemsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)moveItemsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)canInsertTextAtIndex:(unsigned long long)arg1 ;
-(void)insertText:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(char)canInsertMediaAssetsAtIndex:(unsigned long long)arg1 ;
-(void)insertMediaAssets:(id)arg1 atIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)canRemoveItemsAtIndices:(id)arg1 ;
-(void)removeItemsAtIndices:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCenter:(CGPoint)arg1 scale:(double)arg2 forMediaPath:(id)arg3 ;
-(void)setCustomDuration:(double)arg1 forItemsAtIndices:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)durationsForItemsAtIndices:(id)arg1 hasCustomDuration:(char*)arg2 ;
-(char)hasCustomDurationForItemAtIndex:(long long)arg1 ;
-(char)canStartMovingCollectionsAtIndices:(id)arg1 ;
-(char)canMoveCollectionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)moveCollectionsAtIndices:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(char)canStartMovingItemsAtIndexPaths:(id)arg1 ;
-(char)canMoveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(char)arg4 ;
-(id)moveItemsAtIndexPaths:(id)arg1 toIndex:(unsigned long long)arg2 inCollectionAtIndex:(unsigned long long)arg3 createNewCollection:(char)arg4 ;
-(unsigned long long)exportMovieToURL:(id)arg1 options:(id)arg2 progressHandler:(/*^block*/id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(double)minDuration;
@end

