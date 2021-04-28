/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class OITSUColor, NSArray, OITSUBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	OITSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	OITSUBezierPath* mPath;

}
-(void)setPath:(id)arg1 ;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end

