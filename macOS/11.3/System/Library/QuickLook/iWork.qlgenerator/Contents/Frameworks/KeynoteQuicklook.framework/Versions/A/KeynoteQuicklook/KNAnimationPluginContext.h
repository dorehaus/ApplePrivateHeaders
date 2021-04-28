/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <libobjc.A.dylib/KNAnimationPluginContext.h>
@class NSArray, TSDMetalTextureRenderer, TSDAnimationSet, KNAnimationRandomGenerator, TSDMetalContext, KNAnimatedBuild, NSDictionary, TSDGLState;


@protocol KNAnimationPluginContext <NSObject>
@property (nonatomic,readonly) NSArray * textures; 
@property (nonatomic,readonly) TSDMetalTextureRenderer * metalTextureRenderer; 
@property (nonatomic,readonly) TSDAnimationSet * animationSet; 
@property (nonatomic,readonly) NSArray * scaledTextures; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,readonly) unsigned long long direction; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double percent; 
@property (nonatomic,readonly) char isMotionBlurred; 
@property (nonatomic,readonly) KNAnimationRandomGenerator * randomGenerator; 
@property (nonatomic,readonly) TSDMetalContext * metalContext; 
@property (nonatomic,readonly) CGRect drawableFrame; 
@property (nonatomic,readonly) CGRect animationFrame; 
@property (nonatomic,readonly) CGRect boundingRectOnCanvas; 
@property (assign,nonatomic) CGRect boundingRect; 
@property (nonatomic,readonly) KNAnimatedBuild * animatedBuild; 
@property (nonatomic,readonly) NSDictionary * transitionAttributes; 
@property (nonatomic,readonly) NSArray * magicMoveMatches; 
@property (nonatomic,readonly) char isBuild; 
@property (nonatomic,readonly) char isTransition; 
@property (nonatomic,readonly) char isMagicMove; 
@property (nonatomic,readonly) char isFrameRenderer; 
@property (nonatomic,readonly) char isOpenGLRenderer; 
@property (nonatomic,readonly) char isMetalRenderer; 
@property (nonatomic,readonly) char isSceneRenderingEnabled; 
@property (nonatomic,readonly) char isPreview; 
@property (nonatomic,readonly) char isMovieExport; 
@property (nonatomic,readonly) char willRenderWithLiveTextureSources; 
@property (nonatomic,readonly) TSDGLState * GLState; 
@property (nonatomic,readonly) char isWarmingUp; 
@required
-(NSArray *)tags;
-(double)duration;
-(unsigned long long)direction;
-(CGRect)boundingRect;
-(NSArray *)textures;
-(TSDMetalContext *)metalContext;
-(char)isWarmingUp;
-(double)percent;
-(char)isPreview;
-(void)setBoundingRect:(CGRect)arg1;
-(NSDictionary *)transitionAttributes;
-(char)isMagicMove;
-(KNAnimationRandomGenerator *)randomGenerator;
-(char)isTransition;
-(char)isMetalRenderer;
-(CGRect)drawableFrame;
-(char)isBuild;
-(KNAnimatedBuild *)animatedBuild;
-(char)isFrameRenderer;
-(char)isMovieExport;
-(char)isSceneRenderingEnabled;
-(NSArray *)magicMoveMatches;
-(TSDMetalTextureRenderer *)metalTextureRenderer;
-(TSDAnimationSet *)animationSet;
-(NSArray *)scaledTextures;
-(char)isMotionBlurred;
-(CGRect)animationFrame;
-(CGRect)boundingRectOnCanvas;
-(char)isOpenGLRenderer;
-(char)willRenderWithLiveTextureSources;
-(TSDGLState *)GLState;

@end


@class NSArray, TSDMetalTextureRenderer, TSDAnimationSet, KNAnimationRandomGenerator, TSDMetalContext, KNAnimatedBuild, NSDictionary, TSDGLState, TSDRep, NSString;

@interface KNAnimationPluginContext : NSObject <KNAnimationPluginContext> {

	char _isSceneRenderingEnabled;
	char _isMotionBlurred;
	char _isPreview;
	char _isMovieExport;
	char _isWarmingUp;
	NSArray* _textures;
	TSDMetalTextureRenderer* _metalTextureRenderer;
	TSDAnimationSet* _animationSet;
	NSArray* _scaledTextures;
	NSArray* _tags;
	unsigned long long _direction;
	double _duration;
	double _percent;
	KNAnimatedBuild* _animatedBuild;
	NSDictionary* _transitionAttributes;
	NSArray* _magicMoveMatches;
	TSDGLState* _GLState;
	TSDMetalContext* _metalContext;
	TSDRep* _rep;
	long long _rendererType;
	KNAnimationRandomGenerator* _randomGenerator;
	CGRect _boundingRectOnCanvas;
	CGRect _boundingRect;
	CGRect _drawableFrame;
	CGRect _animationFrame;

}

@property (nonatomic,retain) KNAnimationRandomGenerator * randomGenerator;                //@synthesize randomGenerator=_randomGenerator - In the implementation block
@property (nonatomic,retain) NSArray * textures;                                          //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) TSDMetalTextureRenderer * metalTextureRenderer;              //@synthesize metalTextureRenderer=_metalTextureRenderer - In the implementation block
@property (nonatomic,retain) TSDAnimationSet * animationSet;                              //@synthesize animationSet=_animationSet - In the implementation block
@property (nonatomic,retain) NSArray * scaledTextures;                                    //@synthesize scaledTextures=_scaledTextures - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                              //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                                //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double duration;                                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double percent;                                              //@synthesize percent=_percent - In the implementation block
@property (assign,nonatomic) char isMotionBlurred;                                        //@synthesize isMotionBlurred=_isMotionBlurred - In the implementation block
@property (assign,nonatomic) CGRect boundingRectOnCanvas;                                 //@synthesize boundingRectOnCanvas=_boundingRectOnCanvas - In the implementation block
@property (assign,nonatomic) CGRect boundingRect;                                         //@synthesize boundingRect=_boundingRect - In the implementation block
@property (assign,nonatomic,__weak) KNAnimatedBuild * animatedBuild;                      //@synthesize animatedBuild=_animatedBuild - In the implementation block
@property (assign,nonatomic,__weak) NSDictionary * transitionAttributes;                  //@synthesize transitionAttributes=_transitionAttributes - In the implementation block
@property (assign,nonatomic,__weak) NSArray * magicMoveMatches;                           //@synthesize magicMoveMatches=_magicMoveMatches - In the implementation block
@property (assign,nonatomic) char isPreview;                                              //@synthesize isPreview=_isPreview - In the implementation block
@property (assign,nonatomic) char isMovieExport;                                          //@synthesize isMovieExport=_isMovieExport - In the implementation block
@property (getter=LState,nonatomic,retain) TSDGLState * GLState;                          //@synthesize GLState=_GLState - In the implementation block
@property (nonatomic,retain) TSDMetalContext * metalContext;                              //@synthesize metalContext=_metalContext - In the implementation block
@property (assign,nonatomic) CGRect drawableFrame;                                        //@synthesize drawableFrame=_drawableFrame - In the implementation block
@property (assign,nonatomic) CGRect animationFrame;                                       //@synthesize animationFrame=_animationFrame - In the implementation block
@property (assign,nonatomic) char isWarmingUp;                                            //@synthesize isWarmingUp=_isWarmingUp - In the implementation block
@property (assign,nonatomic,__weak) TSDRep * rep;                                         //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) long long rendererType;                                      //@synthesize rendererType=_rendererType - In the implementation block
@property (assign,nonatomic) char isSceneRenderingEnabled;                                //@synthesize isSceneRenderingEnabled=_isSceneRenderingEnabled - In the implementation block
@property (nonatomic,readonly) char isBuild; 
@property (nonatomic,readonly) char isTransition; 
@property (nonatomic,readonly) char isMagicMove; 
@property (nonatomic,readonly) char isFrameRenderer; 
@property (nonatomic,readonly) char isOpenGLRenderer; 
@property (nonatomic,readonly) char isMetalRenderer; 
@property (nonatomic,readonly) char willRenderWithLiveTextureSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSArray *)tags;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(unsigned long long)direction;
-(void)setTags:(NSArray *)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(CGRect)boundingRect;
-(NSArray *)textures;
-(void)setTextures:(NSArray *)arg1 ;
-(TSDMetalContext *)metalContext;
-(char)isWarmingUp;
-(double)percent;
-(void)setPercent:(double)arg1 ;
-(long long)rendererType;
-(char)isPreview;
-(void)setIsPreview:(char)arg1 ;
-(void)setBoundingRect:(CGRect)arg1 ;
-(void)setTransitionAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)transitionAttributes;
-(TSDRep *)rep;
-(void)setRep:(TSDRep *)arg1 ;
-(char)isMagicMove;
-(KNAnimationRandomGenerator *)randomGenerator;
-(void)setRendererType:(long long)arg1 ;
-(char)isTransition;
-(char)isMetalRenderer;
-(CGRect)drawableFrame;
-(char)isBuild;
-(KNAnimatedBuild *)animatedBuild;
-(char)isFrameRenderer;
-(void)setIsMotionBlurred:(char)arg1 ;
-(void)setBoundingRectOnCanvas:(CGRect)arg1 ;
-(void)setAnimatedBuild:(KNAnimatedBuild *)arg1 ;
-(char)isMovieExport;
-(void)setIsMovieExport:(char)arg1 ;
-(char)isSceneRenderingEnabled;
-(NSArray *)magicMoveMatches;
-(TSDMetalTextureRenderer *)metalTextureRenderer;
-(TSDAnimationSet *)animationSet;
-(NSArray *)scaledTextures;
-(char)isMotionBlurred;
-(CGRect)animationFrame;
-(CGRect)boundingRectOnCanvas;
-(char)isOpenGLRenderer;
-(char)willRenderWithLiveTextureSources;
-(TSDGLState *)GLState;
-(void)setIsSceneRenderingEnabled:(char)arg1 ;
-(void)setMetalTextureRenderer:(TSDMetalTextureRenderer *)arg1 ;
-(void)setAnimationSet:(TSDAnimationSet *)arg1 ;
-(void)setScaledTextures:(NSArray *)arg1 ;
-(void)setMagicMoveMatches:(NSArray *)arg1 ;
-(void)setGLState:(TSDGLState *)arg1 ;
-(void)setMetalContext:(TSDMetalContext *)arg1 ;
-(void)setDrawableFrame:(CGRect)arg1 ;
-(void)setAnimationFrame:(CGRect)arg1 ;
-(void)setIsWarmingUp:(char)arg1 ;
-(void)setRandomGenerator:(KNAnimationRandomGenerator *)arg1 ;
@end

