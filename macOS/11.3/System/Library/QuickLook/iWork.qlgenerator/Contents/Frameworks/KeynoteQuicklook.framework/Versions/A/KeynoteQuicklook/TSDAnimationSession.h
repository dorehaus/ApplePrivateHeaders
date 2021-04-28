/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationSession <NSObject>
@property (nonatomic,readonly) char isOffscreenPlayback; 
@property (assign,nonatomic) char shouldDrawTexturesAsynchronously; 
@property (assign,nonatomic) char shouldUseSourceImage; 
@property (assign,nonatomic) char shouldForceTextureGeneration; 
@property (assign,nonatomic) char shouldAllowBackgroundAlpha; 
@property (nonatomic,readonly) double showScale; 
@required
-(char)shouldForceTextureGeneration;
-(void)setShouldForceTextureGeneration:(char)arg1;
-(char)shouldAllowBackgroundAlpha;
-(double)showScale;
-(char)isOffscreenPlayback;
-(char)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(char)arg1;
-(char)shouldUseSourceImage;
-(void)setShouldUseSourceImage:(char)arg1;
-(void)setShouldAllowBackgroundAlpha:(char)arg1;

@end
