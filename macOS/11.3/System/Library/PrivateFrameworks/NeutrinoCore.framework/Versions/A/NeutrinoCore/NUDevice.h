/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUDevice.h>
@class NSString;


@protocol NUDevice <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) char hasMetalSupport; 
@property (nonatomic,readonly) char hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) long long defaultSampleMode; 
@required
-(NSString *)name;
-(unsigned long long)family;
-(NSString *)model;
-(char)hasOpenGLSupport;
-(id)renderer:(out id*)arg1;
-(id)lowPriorityRenderer:(out id*)arg1;
-(id)rendererWithoutIntermediateCaching:(out id*)arg1;
-(id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1;
-(char)hasMetalSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;

@end


@protocol OS_dispatch_queue, MTLDevice;
@class NSString, NURenderer, NSObject;

@interface NUDevice : NSObject <NUDevice> {

	NURenderer* _renderer;
	NURenderer* _lowPriorityRenderer;
	NURenderer* _noIntermediatesRenderer;
	NURenderer* _lowPriorityNoIntermediatesRenderer;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	NSString* _model;
	id<MTLDevice> _metalDevice;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) char hasMetalSupport; 
@property (nonatomic,readonly) char hasOpenGLSupport; 
@property (nonatomic,readonly) long long openGLVirtualScreen; 
@property (nonatomic,readonly) id<NURenderer> renderer;                         //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) id<NURenderer> lowPriorityRenderer;              //@synthesize lowPriorityRenderer=_lowPriorityRenderer - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice;                       //@synthesize metalDevice=_metalDevice - In the implementation block
@property (nonatomic,readonly) char shouldRenderUsingMetal; 
@property (nonatomic,readonly) char shouldRenderUsingOpenGL; 
@property (nonatomic,readonly) unsigned long long family; 
@property (nonatomic,readonly) long long defaultSampleMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(NSString *)name;
-(void)clearCaches;
-(id<NURenderer>)renderer;
-(id<MTLDevice>)metalDevice;
-(unsigned long long)family;
-(NSString *)model;
-(long long)_openGLVirtualScreen;
-(char)hasOpenGLSupport;
-(id)_newRenderer:(out id*)arg1 ;
-(id)_newLowPriorityRenderer:(out id*)arg1 ;
-(id)_newNoIntermediatesRenderer:(out id*)arg1 ;
-(id)_newLowPriorityNoIntermediatesRenderer:(out id*)arg1 ;
-(long long)_preferredSampleMode;
-(id)renderer:(out id*)arg1 ;
-(id)lowPriorityRenderer:(out id*)arg1 ;
-(id)rendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id)lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1 ;
-(char)hasMetalSupport;
-(long long)openGLVirtualScreen;
-(long long)defaultSampleMode;
-(id)initWithName:(id)arg1 model:(id)arg2 metalDevice:(id)arg3 ;
-(long long)_defaultSampleMode;
-(char)shouldRenderUsingMetal;
-(char)shouldRenderUsingOpenGL;
-(char)shouldLogRendererUsed;
-(id)_renderer:(out id*)arg1 ;
-(id)_lowPriorityRenderer:(out id*)arg1 ;
-(id)_rendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id)_lowPriorityRendererWithoutIntermediateCaching:(out id*)arg1 ;
-(id<NURenderer>)lowPriorityRenderer;
@end

