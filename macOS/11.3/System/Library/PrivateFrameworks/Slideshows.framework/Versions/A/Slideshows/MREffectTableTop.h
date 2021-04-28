/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MREffect.h>

@class NSMutableDictionary, MRCroppingSprite, MRImageProvider, MRTextRenderer, MRImage, NSArray, MRCAMLBezierData;

@interface MREffectTableTop : MREffect {

	NSMutableDictionary* mSprites;
	MRCroppingSprite* mExtraSprites[2];
	MRImageProvider* mPhotoBackProvider;
	MRTextRenderer* mTextRenderer;
	MRImage* mTextImage;
	MRCroppingSprite* mTextSprite;
	MRCroppingSprite* mPhotoBackSprite;
	float mLocalMatrix[16];
	CGSize mMaxTextSize;
	char mIsBreak;
	char mIsLoaded;
	NSArray* mShuffledIndicies;
	MRCAMLBezierData* mBezierData;
	char mNeedsToUpdateSizes;

}
+(void)initialize;
-(void)_cleanup;
-(void)_unload;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(char)isLoadedForTime:(double)arg1 ;
-(void)_loadForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(char)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(char)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(char)getCurrentCenter:(CGPoint*)arg1 scale:(double*)arg2 rotation:(double*)arg3 isMain:(char*)arg4 forElement:(id)arg5 ;
-(CGSize)_maxSizeForTextElement:(id)arg1 ;
-(long long)_maxLinesForTextElement:(id)arg1 ;
@end
