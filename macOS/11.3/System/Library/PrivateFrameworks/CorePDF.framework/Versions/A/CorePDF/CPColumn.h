/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	char hasCentredParagraph;
	char hasColumnBreak;
	double maxLeftPad;
	double maxRightPad;
	double maxRight;
	double minLeft;
	char complete;

}

@property (assign) char complete; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)complete;
-(void)setComplete:(char)arg1 ;
-(void)accept:(id)arg1 ;
-(CGRect)columnBounds;
-(double)leftPad;
-(double)rightPad;
-(double)selectionBottom;
-(void)setHasColumnBreak:(char)arg1 ;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(double)bottomBaseline;
-(char)hasCentredParagraph;
-(void)setHasCentredParagraph:(char)arg1 ;
-(double)maxLeftPad;
-(void)setMaxLeftPad:(double)arg1 ;
-(double)maxRightPad;
-(void)setMaxRightPad:(double)arg1 ;
-(CGRect)paddedBounds;
-(int)outOrder;
-(int)inOrder;
@end
