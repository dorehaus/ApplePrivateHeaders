/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class MRTextRenderer, MRImage, MRCroppingSprite;

@interface MREffectJustATitle : MREffect {

	MRTextRenderer* mTextRenderer0;
	MRTextRenderer* mTextRenderer1;
	MRImage* mImage0;
	MRImage* mImage1;
	MRCroppingSprite* mTextSprite0;
	MRCroppingSprite* mTextSprite1;
	CGRect mText0Rect;
	CGRect mText1Rect;
	char mTextWasUpdatedSinceLastRendering;

}
-(id)init;
-(void)setAttributes:(id)arg1 ;
-(void)_unload;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
@end

