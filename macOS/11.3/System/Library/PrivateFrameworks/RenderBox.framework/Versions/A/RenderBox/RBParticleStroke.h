/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/Versions/A/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBParticleStroke <RBStroke>
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float imageScale; 
@property (nonatomic,readonly) int imageCount; 
@property (nonatomic,readonly) char rotatesImage; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) long long seed; 
@required
-(CGImageRef)image;
-(int)blendMode;
-(float)imageScale;
-(long long)seed;
-(int)imageCount;
-(char)rotatesImage;

@end
