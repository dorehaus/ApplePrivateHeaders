/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMediaInfo.h>
#import <TSDrawables/TSDReducibleImageContainer.h>
#import <TSDrawables/TSDContainerInfo.h>
#import <TSDrawables/TSDMixing.h>
#import <TSDrawables/TSSPresetSource.h>
#import <TSDrawables/TSKTransformableObject.h>
#import <TSDrawables/TSDCompatibilityAwareMediaContainer.h>
#import <TSDrawables/TSDAttachmentAwareContainerInfo.h>

@class NSArray, NSSet, TSUBezierPath, TSDImageDataHelper, TSPData, TSDImageAdjustments, TSDMediaStyle, TSDMaskInfo, NSString, TSDInfoGeometry;

@interface TSDImageInfo : TSDMediaInfo <TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer, TSDAttachmentAwareContainerInfo> {

	TSUBezierPath* mInstantAlphaPath;
	CGSize mNaturalSize;
	TSDImageDataHelper* mImageDataHelper;
	TSPData* mImageData;
	TSPData* mThumbnailImageData;
	TSPData* mOriginalImageData;
	TSDImageAdjustments* mImageAdjustments;
	TSPData* mAdjustedImageData;
	TSPData* mThumbnailAdjustedImageData;
	TSDImageDataHelper* mAdjustedImageDataHelper;
	TSPData* mEnhancedImageData;
	TSDMediaStyle* mStyle;
	TSDMaskInfo* mMaskInfo;
	TSUBezierPath* mTracedPath;
	char mShouldTracePDFData;
	char mCurrentlyInDocument;
	double mDescentForInlineLayout;
	char mDescentForInlineLayoutValid;

}

@property (nonatomic,retain,readonly) TSPData * imageData; 
@property (nonatomic,retain) TSPData * imageDataNonnull; 
@property (nonatomic,retain) TSPData * thumbnailImageData; 
@property (nonatomic,retain) TSPData * originalImageData; 
@property (nonatomic,readonly) TSPData * imageDataForExport; 
@property (nonatomic,readonly) TSDMediaStyle * imageStyle; 
@property (nonatomic,retain) TSDMaskInfo * maskInfo; 
@property (nonatomic,retain) TSUBezierPath * instantAlphaPath; 
@property (nonatomic,readonly) char canBeMasked; 
@property (nonatomic,copy) TSDImageAdjustments * imageAdjustments; 
@property (nonatomic,retain) TSPData * adjustedImageData; 
@property (nonatomic,retain) TSPData * thumbnailAdjustedImageData; 
@property (nonatomic,retain) TSPData * enhancedImageData; 
@property (nonatomic,readonly) char canAdjustImage; 
@property (nonatomic,readonly) unsigned long long estimatedDataSizeForNewAdjustmentSentToServer; 
@property (nonatomic,readonly) TSUBezierPath * tracedPath; 
@property (assign,nonatomic) char shouldTracePDFData; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (nonatomic,readonly) char shouldGenerateThumbnails; 
@property (nonatomic,readonly) double descentForInlineLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) char isMaster; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) char inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,readonly) NSSet * infosToObserveForAttachedInfo; 
+(id)presetKinds;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3 ;
+(id)i_thumbnailForImageData:(id)arg1 ;
+(void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7 ;
+(void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3 reservedCount:(unsigned long long)arg4 ;
+(id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(unsigned long long)arg3 ;
-(char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(void)dealloc;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(CGSize)originalSize;
-(TSPData *)thumbnailImageData;
-(void)setThumbnailImageData:(TSPData *)arg1 ;
-(TSDInfoGeometry *)geometry;
-(TSPData *)imageData;
-(void)acceptVisitor:(id)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(id)mediaFileType;
-(TSDMediaStyle *)imageStyle;
-(char)needsDownload;
-(char)isPDF;
-(id)copyWithContext:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(Class)layoutClass;
-(TSPData *)originalImageData;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(Class)repClass;
-(NSObject*<TSDInfo>)parentInfo;
-(NSArray *)childInfos;
-(void)setExteriorTextWrap:(id)arg1 ;
-(id)presetKind;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(CGAffineTransform)computeFullTransform;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(char)canAspectRatioLockBeChangedByUser;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(Class)styleClass;
-(TSDMaskInfo *)maskInfo;
-(TSUBezierPath *)instantAlphaPath;
-(TSDImageAdjustments *)imageAdjustments;
-(TSPData *)enhancedImageData;
-(TSPData *)adjustedImageData;
-(char)isMasked;
-(CGSize)defaultOriginalSize;
-(void)setOriginalImageData:(TSPData *)arg1 ;
-(id)copyWithContext:(id)arg1 style:(id)arg2 ;
-(id)geometryWithMask;
-(void)setImageAdjustments:(TSDImageAdjustments *)arg1 ;
-(void)setAdjustedImageData:(TSPData *)arg1 ;
-(void)setEnhancedImageData:(TSPData *)arg1 ;
-(void)setThumbnailAdjustedImageData:(TSPData *)arg1 ;
-(id)defaultMaskInfoWithContext:(id)arg1 ;
-(id)defaultMaskInfo;
-(void)setMaskInfo:(TSDMaskInfo *)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5 ;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)setInstantAlphaPath:(TSUBezierPath *)arg1 ;
-(char)maskCanBeReset;
-(CGPoint)centerForReplacingWithNewMedia;
-(void)updateGeometryToReplaceMediaInfo:(id)arg1 ;
-(TSUBezierPath *)tracedPath;
-(TSPData *)thumbnailAdjustedImageData;
-(char)canResetMediaSize;
-(id)styleIdentifierTemplateForNewPreset;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)saveToArchive:(ImageArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ImageArchive*)arg1 unarchiver:(id)arg2 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(char)allowsTitle;
-(char)allowsCaption;
-(void)scaleDownSizeToFitWithinSize:(CGSize)arg1 ;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(id)promisedDataForType:(id)arg1 ;
-(char)p_canCopy:(id)arg1 ;
-(char)canCopyData;
-(long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2 ;
-(double)descentForInlineLayout;
-(char)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(void)setImageDataNonnull:(TSPData *)arg1 ;
-(void)setImageData:(id)arg1 thumbnailData:(id)arg2 ;
-(void)setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2 ;
-(char)p_aspectRatioUnlockedResizeWouldCauseSkew;
-(void)p_setImageData:(id)arg1 thumbnailData:(id)arg2 ;
-(char)shouldGenerateThumbnails;
-(char)hasPDFDataForCopy;
-(char)shouldTracePDFData;
-(NSSet *)infosToObserveForAttachedInfo;
-(void)setShouldTracePDFData:(char)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9 ;
-(TSPData *)imageDataNonnull;
-(void)i_forciblyRegenerateThumbnail;
-(TSPData *)imageDataForExport;
-(char)canBeMasked;
-(id)i_instantAlphaPathIgnoringNaturalSize;
-(char)canAdjustImage;
-(unsigned long long)estimatedDataSizeForNewAdjustmentSentToServer;
-(id)propertyNameForFlagsCommand;
-(id)propertyNameForOriginalSizeCommand;
-(unsigned short)propertyIdForFlagsCommand;
-(unsigned short)propertyIdForOriginalSizeCommand;
-(id)mediaDataForDragging;
-(void)p_upgradeImageGeometry;
-(void)p_upgradeImageThumbnail;
@end
