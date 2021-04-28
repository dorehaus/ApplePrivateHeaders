/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVVideoCompositionInstruction;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVVideoCompositionRenderContext, NSDictionary, NSArray;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {

	AVWeakReference* _session;
	AVVideoCompositionRenderContext* _renderContext;
	OpaqueFigVideoCompositorFrameRef _compositionFrame;
	SCD_Struct_CM3 _compositionTime;
	NSDictionary* _sourcesByTrackID;
	NSArray* _sourceTrackIDsInClientOrder;
	id<AVVideoCompositionInstruction> _instruction;
	char _isFinished;

}

@property (nonatomic,retain) AVWeakReference * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVVideoCompositionRenderContext * renderContext;                //@synthesize renderContext=_renderContext - In the implementation block
@property (assign,nonatomic) OpaqueFigVideoCompositorFrameRef compositionFrame;              //@synthesize compositionFrame=_compositionFrame - In the implementation block
@property (assign,nonatomic) SCD_Struct_CM3 compositionTime;                                 //@synthesize compositionTime=_compositionTime - In the implementation block
@property (nonatomic,retain) NSDictionary * sourcesByTrackID;                                //@synthesize sourcesByTrackID=_sourcesByTrackID - In the implementation block
@property (nonatomic,retain) NSArray * sourceTrackIDsInClientOrder;                          //@synthesize sourceTrackIDsInClientOrder=_sourceTrackIDsInClientOrder - In the implementation block
@property (nonatomic,retain) id<AVVideoCompositionInstruction> instruction;                  //@synthesize instruction=_instruction - In the implementation block
@property (assign,nonatomic) char isFinished;                                                //@synthesize isFinished=_isFinished - In the implementation block
-(void)dealloc;
-(char)isFinished;
-(AVVideoCompositionRenderContext *)renderContext;
-(AVWeakReference *)session;
-(void)setSession:(AVWeakReference *)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(SCD_Struct_CM3)compositionTime;
-(void)setRenderContext:(AVVideoCompositionRenderContext *)arg1 ;
-(OpaqueFigVideoCompositorFrameRef)compositionFrame;
-(void)setCompositionFrame:(OpaqueFigVideoCompositorFrameRef)arg1 ;
-(void)setCompositionTime:(SCD_Struct_CM3)arg1 ;
-(NSDictionary *)sourcesByTrackID;
-(void)setSourcesByTrackID:(NSDictionary *)arg1 ;
-(NSArray *)sourceTrackIDsInClientOrder;
-(void)setSourceTrackIDsInClientOrder:(NSArray *)arg1 ;
-(id<AVVideoCompositionInstruction>)instruction;
-(void)setInstruction:(id<AVVideoCompositionInstruction>)arg1 ;
@end

