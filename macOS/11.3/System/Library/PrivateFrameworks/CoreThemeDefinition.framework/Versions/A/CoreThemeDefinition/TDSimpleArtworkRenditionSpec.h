/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDImageColorHistogram, TDPNGAsset, NSOrderedSet, TDThemeCompressionType, NSString;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {

	CGRect _alignmentRect;
	char _isBackstop;
	TDImageColorHistogram* _histogram;

}

@property (assign,nonatomic) char allowsMultiPassEncoding; 
@property (assign,nonatomic) char allowsOptimalRowbytesPacking; 
@property (assign,nonatomic) char allowsCompactCompression; 
@property (assign,nonatomic) char allowsPaletteImageCompression; 
@property (assign,nonatomic) char allowsHevcCompression; 
@property (assign,nonatomic) char allowsDeepmapCompression; 
@property (assign,nonatomic) char allowsDeepmap2Compression; 
@property (nonatomic,retain) TDPNGAsset * asset; 
@property (nonatomic,retain) NSOrderedSet * slices; 
@property (nonatomic,retain) TDThemeCompressionType * compressionType; 
@property (nonatomic,retain) TDImageColorHistogram * histogram;                     //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) CGRect alignmentRect; 
@property (assign,nonatomic) CGRect primitiveAlignmentRect; 
@property (nonatomic,retain) NSString * alignmentRectString; 
@property (nonatomic,retain) NSString * originalImageSizeString; 
@property (nonatomic,retain) NSString * nonAlphaImageAreaString; 
@property (nonatomic,retain) NSString * physicalSizeInMetersString; 
@property (assign,nonatomic) CGSize physicalSizeInMeters; 
@property (assign,nonatomic) char isTintable; 
@property (assign,nonatomic) char isBackstop;                                       //@synthesize isBackstop=_isBackstop - In the implementation block
@property (assign,nonatomic) double postScaleFactor; 
+(void)initialize;
-(void)dealloc;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(CGRect)alignmentRect;
-(TDImageColorHistogram *)histogram;
-(void)setHistogram:(TDImageColorHistogram *)arg1 ;
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)createCSIRepresentationWithCompression:(char)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(char)updatePackingPropertiesWithDocument:(id)arg1 ;
-(char)canBePackedWithDocument:(id)arg1 ;
-(void)drawPackableRenditionInContext:(CGContextRef)arg1 withDocument:(id)arg2 ;
-(CGSize)physicalSizeInMeters;
-(void)setPhysicalSizeInMeters:(CGSize)arg1 ;
-(void)setIsBackstop:(char)arg1 ;
-(CGImageRef)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned*)arg3 vectorBased:(char*)arg4 ;
-(void)awakeFromFetch;
-(void)_logError:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
-(id)_slicesToUseForCSI;
-(CGRect)primitiveAlignmentRect;
-(void)setPrimitiveAlignmentRect:(CGRect)arg1 ;
-(int)_rawPixelFormatOfCGImage:(CGImageRef)arg1 ;
-(CGSize)_scaleRecognitionImageFromSize:(CGSize)arg1 ;
-(char)isBackstop;
-(id)_sliceRectanglesForRenditionSize:(SCD_Struct_TD13)arg1 unadjustedSliceRectangles:(id*)arg2 imageSlicesNeedAdjustment:(char*)arg3 newRenditionSize:(SCD_Struct_TD13*)arg4 ;
-(SCD_Struct_TD14)_edgeMetricsForAlignmentRect:(CGRect)arg1 originalRenditionSize:(SCD_Struct_TD13)arg2 newRenditionSize:(SCD_Struct_TD13)arg3 ;
@end

