/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class IFImageBag, CUICatalog, NSString;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource> {

	IFImageBag* _imageBag;
	CUICatalog* _catalog;
	NSString* _imageName;
	NSString* _symbolName;

}

@property (readonly) CUICatalog * catalog;                               //@synthesize catalog=_catalog - In the implementation block
@property (readonly) IFImageBag * imageBag;                              //@synthesize imageBag=_imageBag - In the implementation block
@property (readonly) NSString * imageName;                               //@synthesize imageName=_imageName - In the implementation block
@property (readonly) NSString * symbolName;                              //@synthesize symbolName=_symbolName - In the implementation block
@property (getter=isPrecomposed,readonly) char precomposed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id*)arg4 ;
+(id)coreGlyphsCatalog;
+(id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id*)arg3 ;
+(id)imageForStaticAssetWithKey:(id)arg1 withDescriptor:(id)arg2 ;
+(id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id*)arg3 ;
-(id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 ;
-(id)imageWithName:(id)arg1 scale:(double)arg2 ;
-(IFImageBag *)imageBag;
-(id)symbolImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4 ;
-(NSString *)symbolName;
-(NSString *)imageName;
-(CUICatalog *)catalog;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(char)isPrecomposed;
@end

