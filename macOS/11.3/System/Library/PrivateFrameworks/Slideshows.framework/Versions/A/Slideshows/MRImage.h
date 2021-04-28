/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Slideshows/Slideshows-Structs.h>
@class MRTextureSource, MRImageManager, MRTexture, NSString, NSDictionary, NSMutableDictionary;

@interface MRImage : NSObject {

	MRTextureSource* _textureSource;
	MRImage* _referenceImage;
	unsigned _flags;
	int _clampMode;
	int _retainByUserCount;
	MRImageManager* _imageManager;
	MRTexture* _texture;
	double _centerX;
	double _centerY;
	double _scale;
	double _rotationAngle;
	NSString* _filterID;
	NSDictionary* _shader;
	double _sourceTimestamp;
	double _renderTime;
	NSString* _label;
	NSMutableDictionary* _userData;
	CGSize _size;

}

@property (readonly) MRTexture * texture;                                         //@synthesize texture=_texture - In the implementation block
@property (retain) NSDictionary * shader;                                         //@synthesize shader=_shader - In the implementation block
@property (readonly) int retainByUserCount;                                       //@synthesize retainByUserCount=_retainByUserCount - In the implementation block
@property (assign,nonatomic) double centerX;                                      //@synthesize centerX=_centerX - In the implementation block
@property (assign,nonatomic) double centerY;                                      //@synthesize centerY=_centerY - In the implementation block
@property (assign,nonatomic) double scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) double rotationAngle;                                //@synthesize rotationAngle=_rotationAngle - In the implementation block
@property (assign,nonatomic) char usesBackgroundColorAsBorderColor; 
@property (readonly) char usesMipmap; 
@property (assign,nonatomic) char mipmapFiltersNearest; 
@property (assign,nonatomic) char hasKenBurns; 
@property (assign,nonatomic) char scaleWasFixedForTargetAspectRatio; 
@property (nonatomic,copy) NSString * filterID;                                   //@synthesize filterID=_filterID - In the implementation block
@property (assign,nonatomic) double sourceTimestamp;                              //@synthesize sourceTimestamp=_sourceTimestamp - In the implementation block
@property (assign,nonatomic) double renderTime;                                   //@synthesize renderTime=_renderTime - In the implementation block
@property (readonly) MRImageManager * imageManager;                               //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,readonly) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (readonly) double width; 
@property (readonly) double height; 
@property (nonatomic,readonly) CGLContextObject* updateGLContext; 
@property (assign,nonatomic) int clampMode;                                       //@synthesize clampMode=_clampMode - In the implementation block
@property (nonatomic,readonly) char hasKBOrShader; 
@property (assign,nonatomic) char filtersNearest; 
@property (assign,nonatomic) char preservesAspectRatio; 
@property (nonatomic,readonly) char isOpaque; 
@property (nonatomic,copy) NSString * label;                                      //@synthesize label=_label - In the implementation block
@property (readonly) NSMutableDictionary * userData;                              //@synthesize userData=_userData - In the implementation block
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) char isEmpty; 
-(CGSize)size;
-(void)dealloc;
-(id)init;
-(char)isEmpty;
-(void)cleanup;
-(NSMutableDictionary *)userData;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(MRTexture *)texture;
-(double)width;
-(double)height;
-(double)scale;
-(char)isOpaque;
-(void)setScale:(double)arg1 ;
-(double)aspectRatio;
-(id)initWithImage:(id)arg1 ;
-(double)centerX;
-(double)centerY;
-(NSString *)filterID;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(char)preservesAspectRatio;
-(void)setPreservesAspectRatio:(char)arg1 ;
-(void)setCenterX:(double)arg1 ;
-(void)setCenterY:(double)arg1 ;
-(MRImageManager *)imageManager;
-(void)setRenderTime:(double)arg1 ;
-(double)renderTime;
-(NSDictionary *)shader;
-(void)setShader:(NSDictionary *)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(void)setClampMode:(int)arg1 ;
-(void)releaseByUser;
-(id)retainByUser;
-(void)getMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(int)clampMode;
-(char)usesBackgroundColorAsBorderColor;
-(char)filtersNearest;
-(char)usesMipmap;
-(char)mipmapFiltersNearest;
-(void)setOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR22*)arg4 ;
-(void)unsetOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const SCD_Struct_MR22*)arg3 ;
-(id)insertingInCollection;
-(CGSize)relativeSizeInContextPixelSize:(CGSize)arg1 ;
-(char)scaleWasFixedForTargetAspectRatio;
-(void)setUsesBackgroundColorAsBorderColor:(char)arg1 ;
-(void)removingFromCollection;
-(id)retainedByUserImage;
-(id)retainedByUserImageWithShader:(id)arg1 ;
-(void)kenburnsMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(id)initWithTextureSource:(id)arg1 andSize:(CGSize)arg2 ;
-(void)setFiltersNearest:(char)arg1 ;
-(void)setUsesMipmap:(char)arg1 ;
-(void)setMipmapFiltersNearest:(char)arg1 ;
-(char)hasKenBurns;
-(void)setHasKenBurns:(char)arg1 ;
-(void)setScaleWasFixedForTargetAspectRatio:(char)arg1 ;
-(char)hasKBOrShader;
-(CGLContextObject*)updateGLContext;
-(void)uploadCGImage:(CGImageRef)arg1 toTextureRect:(CGRect)arg2 ;
-(double)sourceTimestamp;
-(void)setSourceTimestamp:(double)arg1 ;
-(int)retainByUserCount;
@end

