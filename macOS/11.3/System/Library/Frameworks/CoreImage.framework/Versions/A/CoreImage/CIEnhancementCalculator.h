/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIEnhancementCalculation.h>

@interface CIEnhancementCalculator : CIEnhancementCalculation {

	char faceBalanceEnabled;
	char vibranceEnabled;
	char curvesEnabled;
	char shadowsEnabled;

}

@property (assign) char faceBalanceEnabled; 
@property (assign) char vibranceEnabled; 
@property (assign) char curvesEnabled; 
@property (assign) char shadowsEnabled; 
-(void)setFaceBalanceEnabled:(char)arg1 ;
-(void)setVibranceEnabled:(char)arg1 ;
-(void)setCurvesEnabled:(char)arg1 ;
-(void)setShadowsEnabled:(char)arg1 ;
-(char)faceBalanceEnabled;
-(void)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 features:(id)arg3 ;
-(void)setupHistogramsUsing:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(char)vibranceEnabled;
-(char)curvesEnabled;
-(void)analyzeFeatures:(id)arg1 usingContext:(id)arg2 baseImage:(id)arg3 ;
-(id)histogramFromRows:(id)arg1 componentOffset:(unsigned)arg2 ;
-(id)setupFaceColorFromImage:(id)arg1 usingContext:(id)arg2 detectorOpts:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(char)shadowsEnabled;
@end

