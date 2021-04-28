/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISVariantResourceProviderProtocol.h>
#import <libobjc.A.dylib/ISVariantResourceProtocol.h>

@class NSString, NSDictionary, NSURL, NSMutableDictionary, NSMutableArray;

@interface ISCompositVariantResource : NSObject <ISVariantResourceProviderProtocol, ISVariantResourceProtocol> {

	NSString* _variantName;
	unsigned long long _flags;
	NSDictionary* _assetCatalogReference;
	NSDictionary* _compositionInfo;
	NSURL* _baseURL;
	NSMutableDictionary* _vectorResources;
	NSMutableDictionary* _imageSetResources;
	NSDictionary* _recipes;
	NSMutableArray* _layers;

}

@property (retain) NSDictionary * compositionInfo;                       //@synthesize compositionInfo=_compositionInfo - In the implementation block
@property (retain) NSURL * baseURL;                                      //@synthesize baseURL=_baseURL - In the implementation block
@property (retain) NSMutableDictionary * vectorResources;                //@synthesize vectorResources=_vectorResources - In the implementation block
@property (retain) NSMutableDictionary * imageSetResources;              //@synthesize imageSetResources=_imageSetResources - In the implementation block
@property (retain) NSDictionary * recipes;                               //@synthesize recipes=_recipes - In the implementation block
@property (retain) NSMutableArray * layers;                              //@synthesize layers=_layers - In the implementation block
@property (readonly) NSDictionary * assetCatalogReference;               //@synthesize assetCatalogReference=_assetCatalogReference - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * variantName;                             //@synthesize variantName=_variantName - In the implementation block
@property (readonly) unsigned long long flags;                           //@synthesize flags=_flags - In the implementation block
+(id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2 error:(id*)arg3 ;
-(CGImageRef)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)imageResourceNamed:(id)arg1 ;
-(id)resolvedResourceNamed:(id)arg1 ;
-(id)numberResourceNamed:(id)arg1 ;
-(id)vectorResourceNamed:(id)arg1 ;
-(id)textResourceNamed:(id)arg1 ;
-(id)initWithCompositionInfo:(id)arg1 baseURL:(id)arg2 variantName:(id)arg3 flags:(unsigned long long)arg4 ;
-(void)loadResources;
-(void)loadLayers;
-(char)addResourceWithResourceURL:(id)arg1 namePrefix:(id)arg2 error:(id*)arg3 ;
-(char)addResourceWithURL:(id)arg1 error:(id*)arg2 ;
-(id)recipeNamed:(id)arg1 ;
-(id)resolvedResourceNamed:(id)arg1 ofClass:(Class)arg2 ;
-(char)drawInContext:(CGContextRef)arg1 withScale:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSDictionary *)assetCatalogReference;
-(NSDictionary *)compositionInfo;
-(void)setCompositionInfo:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)vectorResources;
-(void)setVectorResources:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)imageSetResources;
-(void)setImageSetResources:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)recipes;
-(void)setRecipes:(NSDictionary *)arg1 ;
-(unsigned long long)flags;
-(NSURL *)baseURL;
-(NSMutableArray *)layers;
-(void)setLayers:(NSMutableArray *)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)variantName;
@end

