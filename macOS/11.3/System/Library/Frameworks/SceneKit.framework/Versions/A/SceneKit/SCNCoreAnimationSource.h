/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNImageSource.h>

@class CALayer;

@interface SCNCoreAnimationSource : SCNImageSource {

	CALayer* _layer;

}

@property (nonatomic,retain) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
-(void)dealloc;
-(CALayer *)layer;
-(char)isOpaque;
-(void)setLayer:(CALayer *)arg1 ;
-(id)textureSource;
@end
