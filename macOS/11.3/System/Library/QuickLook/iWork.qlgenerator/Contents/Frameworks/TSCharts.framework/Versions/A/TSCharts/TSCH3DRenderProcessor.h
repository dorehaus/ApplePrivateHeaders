/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@class TSCH3DFramebuffer;

@interface TSCH3DRenderProcessor : NSObject {

	TSCH3DFramebuffer* _activeFramebuffer;

}

@property (nonatomic,retain) TSCH3DFramebuffer * activeFramebuffer;              //@synthesize activeFramebuffer=_activeFramebuffer - In the implementation block
+(void)initialize;
+(id)processor;
-(id)effects;
-(void)popState;
-(void)pushState;
-(void)endFrame;
-(void)beginFrame;
-(void)pushRenderState;
-(void)popRenderState;
-(void)wipeActiveFramebuffer:(const tvec4<float>*)arg1 ;
-(void)geometry:(id)arg1 ;
-(void)normals:(id)arg1 ;
-(void)texcoords:(id)arg1 ;
-(void)updateRenderState;
-(RenderState)renderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)resetBuffers;
-(TSCH3DFramebuffer *)activeFramebuffer;
-(void)setActiveFramebuffer:(TSCH3DFramebuffer *)arg1 ;
-(char)canRenderPrefilteredLines;
@end

