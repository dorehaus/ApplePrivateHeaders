/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <Slideshows/MUPoolObject.h>

@class MRImage, MRCroppingSprite;

@interface MRFlipupRenderable : MUPoolObject {

	double zPosition;
	char needsBlend;
	char isBreak;
	float modelViewMatrix[16];
	double color;
	double opacity;
	MRImage* slide;
	MRCroppingSprite* sprite;
	CGPoint position;
	CGSize size;
	float flippedModelViewMatrix[16];
	MRCroppingSprite* reflectionSprite;
	CGPoint reflectionPosition;

}

@property (nonatomic,retain) MRImage * slide; 
@property (nonatomic,retain) MRCroppingSprite * sprite; 
@property (nonatomic,retain) MRCroppingSprite * reflectionSprite; 
+(SCD_Struct_MR28*)poolInfo;
-(void)dealloc;
-(void)purge;
-(MRImage *)slide;
-(void)setSlide:(MRImage *)arg1 ;
-(MRCroppingSprite *)sprite;
-(void)setSprite:(MRCroppingSprite *)arg1 ;
-(MRCroppingSprite *)reflectionSprite;
-(void)setReflectionSprite:(MRCroppingSprite *)arg1 ;
@end

