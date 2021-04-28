/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSArray;

@interface _NSASCIIArtFramesRenderer : NSObject {

	NSArray* _frames;
	double _outputLineWidth;

}

@property (nonatomic,readonly) NSArray * frames; 
@property (nonatomic,readonly) double outputLineWidth; 
-(id)description;
-(id)visualDescription;
-(id)initWithFrames:(id)arg1 ;
-(NSArray *)frames;
-(id)_normalizeFrames:(id)arg1 ;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(id)renderedLines;
-(double)outputLineWidth;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
@end
