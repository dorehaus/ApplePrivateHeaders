/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSURL, NSString, NSMutableDictionary, NSDictionary, NSArray;

@interface ISIcns : NSObject <ISScalableCompositorResource, NSCopying, NSMutableCopying> {

	unsigned _type;
	NSData* _data;
	id _elements;
	char _dirty;
	NSURL* _url;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned type;                                   //@synthesize type=_type - In the implementation block
@property (retain) NSString * name; 
@property (assign) char dirty;                                      //@synthesize dirty=_dirty - In the implementation block
@property (readonly) NSMutableDictionary * elements;                //@synthesize elements=_elements - In the implementation block
@property (retain) ISIcns * selectedVariant; 
@property (retain) ISIcns * templateVariant; 
@property (retain) NSDictionary * userInfo; 
@property (retain) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (readonly) char containsTemplateVariant; 
@property (readonly) NSData * data;                                 //@synthesize data=_data - In the implementation block
@property (readonly) NSArray * variants; 
+(char)createEmptyIconsetFolderWithURL:(id)arg1 error:(id*)arg2 ;
+(char)writeCustomIcon:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)icnsWithIconFamilyHandle:(IconFamilyResource*)arg1 ;
+(id)placeholderIconResource;
+(id)icnsWithContentsOfURL:(id)arg1 ;
+(id)icnsWithResourceFile:(id)arg1 ;
+(char)removeCustomIconFromURL:(id)arg1 error:(id*)arg2 ;
+(char)writeCustomVolumeIcon:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(id)systemIconNamed:(id)arg1 ;
+(id)notLoadedIconResource;
+(id)genericDocumentIconResource;
+(id)genericFolderIconResource;
+(id)genericAppIconResource;
+(id)icnsWithIcon:(id)arg1 imageDescriptors:(id)arg2 error:(id*)arg3 ;
+(id)icnsWithIcon:(id)arg1 imageDescriptors:(id)arg2 ;
+(id)icnsWithType:(unsigned)arg1 images:(id)arg2 ;
-(CGImageRef)copyCGImageWithIndex:(int)arg1 ;
-(char)isMaskAtIndex:(int)arg1 ;
-(char)writeIconsetImagesToURL:(id)arg1 variantName:(id)arg2 selected:(char)arg3 ;
-(id)assetCatalogResource;
-(CGImageRef)copyCGImageForSize:(CGSize)arg1 scale:(unsigned)arg2 ;
-(short)copyTypeData:(unsigned)arg1 toHandle:(char**)arg2 ;
-(void)setData:(id)arg1 atIndex:(int)arg2 ;
-(char)isVariantElementType:(unsigned)arg1 ;
-(id)variantNamed:(id)arg1 ;
-(unsigned)typeForVariantName:(id)arg1 ;
-(char)containsTemplateVariant;
-(unsigned)colorDepthAtIndex:(int)arg1 ;
-(unsigned)elementTypeAtIndex:(int)arg1 ;
-(id)assetCatalogFilePath;
-(id)assetCatalogIconName;
-(int)findMaskIndex:(int)arg1 ;
-(CGImageRef)CGImageWithData:(id)arg1 iconIndexInfo:(const SCD_Struct_IS13*)arg2 ;
-(int)iconIndexForSize:(CGSize)arg1 scale:(unsigned)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)load;
-(NSString *)name;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(NSDictionary *)userInfo;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned)type;
-(void)setName:(NSString *)arg1 ;
-(void)setDirty:(char)arg1 ;
-(NSURL *)url;
-(ISIcns *)templateVariant;
-(ISIcns *)selectedVariant;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSMutableDictionary *)elements;
-(id)initWithType:(unsigned)arg1 ;
-(void)setVariant:(id)arg1 named:(id)arg2 ;
-(void)enumerateElementsUsingBlock:(/*^block*/id)arg1 ;
-(char)dirty;
-(id)dataAtIndex:(int)arg1 ;
-(unsigned)scaleAtIndex:(int)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSArray *)variants;
-(void)setSelectedVariant:(ISIcns *)arg1 ;
-(void)setTemplateVariant:(ISIcns *)arg1 ;
-(void)removeValueAtIndex:(int)arg1 ;
-(CGSize)sizeAtIndex:(int)arg1 ;
-(id)initWithIcns:(id)arg1 ;
-(char)writeAsIconsetToURL:(id)arg1 ;
@end

