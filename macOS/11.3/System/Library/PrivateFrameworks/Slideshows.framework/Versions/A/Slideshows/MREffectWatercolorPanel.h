/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class NSMutableDictionary, MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectWatercolorPanel : MREffect {

	NSMutableDictionary* mSprites;
	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	MRCroppingSprite* mTextSprite;
	NSMutableDictionary* mBreakInformation;

}
-(void)setAttributes:(id)arg1 ;
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
-(void)renderEffect2AtTime:(double)arg1 isSquare:(char)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect3AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffectSubtitleAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderSubtitleBreakAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderBreakAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
@end

